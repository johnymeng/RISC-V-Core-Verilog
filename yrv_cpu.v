module yrv_cpu (csr_achk, csr_addr, csr_read, csr_wdata, csr_write, dbg_type,
                debug_mode, dpc_reg, ebrk_inst, eret_inst, iack_int, iack_nmi,
                inst_ret, mcause_reg, mem_addr, mem_ble, mem_lock, mem_trans,
                mem_wdata, mem_write, mepc_reg, nmip_reg, wfi_state, brk_req,
                bus_32, clk, csr_idata, csr_rdata, csr_ok_ext, csr_ok_int, dbg_req,
                ebrkd_reg, halt_reg, irq_bus, mem_rdata, mem_ready, mli_code,
                mtvec_reg, resetb, step_reg, vmode_reg);


input brk_req; /* breakpoint request */
input bus_32; /* 32-bit bus select */
input clk; /* cpu clock */
input csr_ok_ext; /* valid external csr addr */
input csr_ok_int; /* valid internal csr addr */
input dbg_req; /* debug request */
input ebrkd_reg; /* ebreak causes debug */
input halt_reg; /* halt (enter debug) */
input resetb; /* master reset */
input mem_ready; /* memory ready */
input step_reg; /* single-step */
input [1:0] vmode_reg; /* vectored interrupt mode */
input [4:0] irq_bus; /* irq: nmi/li/ei/tmr/sw */
input [6:0] mli_code; /* mli highest pending */
input [31:0] csr_idata; /* csr internal read data */
input [31:0] csr_rdata; /* csr external read data */
input [31:0] mem_rdata; /* memory read data */
input [31:2] mtvec_reg; /* trap vector base */


output csr_read; /* csr read enable */
output csr_write; /* csr write enable */
output debug_mode; /* in debug mode */
output ebrk_inst; /* ebreak instruction */
output eret_inst; /* eret instruction */
output iack_int; /* iack: nmi/li/ei/tmr/sw */
output iack_nmi; /* iack: nmi */
output inst_ret; /* inst retired */
output mem_lock; /* memory lock (rmw) */
output mem_write; /* memory write enable */
output nmip_reg; /* nmi pending in debug mode */
output wfi_state; /* waiting for interrupt */
output [1:0] mem_trans; /* memory transfer type */
output [2:0] dbg_type; /* debug cause */
output [3:0] mem_ble; /* memory byte lane enables */
output [6:0] mcause_reg; /* exception cause */
output [11:0] csr_achk; /* csr address to check */
output [11:0] csr_addr; /* csr address */
output [31:0] csr_wdata; /* csr write data */
output [31:1] dpc_reg; /* debug pc */
output [31:0] mem_addr; /* memory address */
output [31:0] mem_wdata; /* memory write data */
output [31:1] mepc_reg; /* exception pc */


/********************************************************************************/
 /* start-up and pipeline control */
 /********************************************************************************/
/*
    here we init the start up delay after being reset since some components need time after being reset to work
    the counter (rdelay_reg) is initilalized to 0 after being reset and after the reset is removed,
    it counts up to 0x80 (128)

    while the counter is running, bus_32 is smapled up until 0x7F (127)

    when the counter reaches 0x80, valid_1_reg is set to 1 and we can start
*/
always @(posedge clk or negedge resetb) 
begin
    if(!resetb) 
    begin
        // = : block assignment, variable is immediately assigned the value of the right side expression
        // <= : non-blocking assignment, variable is assigned the value of the right side expression at end of current time step/end
        mem32_reg <= 1'b0; //b = binary
        rdata_reg <= 32'h0; //h = hexidecimal
        rdelay_reg <= 8'h0;
        rdymask_reg <= 1'b0;
        valid_0_reg <= 1'b0;
        valid_1_reg <= 1'b0;
    end
    else 
    begin
        if(!rdelay_reg[7]) mem32_reg <= bus_32; //if highest bit of rdelay_reg is low, mem32_reg gets value of bus
        if(valid_0_reg && mem_rdy) rdata_reg <= mem_rdata;
        rdelay_reg <= rdelay_reg + !rdelay_reg[7]
        rdymask_reg <= ~|mem_trans && mem_ready;
        if(mem_rdy) valid_0_reg <= !mem_trans[1] && mem_trans[0];
        valid_1_reg <= rdelay_reg[7] || valid_1_reg;
    end
end

assign mem_idata = (valid_0_reg) ? mem_rdata : rdata_reg;
assign mem_rdy = mem_ready || rdymask_reg;
assign mem_rdy_v = mem_rdy && valid_1_reg;

assign run_dec = mem_rdy_v && !stall_csr && !stall_ldst;
assign run_exe = mem_rdy_v && !stall_csr && !stall_ldst && !stall_align;
assign run_mem = mem_rdy_v && !stall_csr && !stall_ldst && (ld_pc || !stall_cmp); 

 /********************************************************************************/
 /* clock 1 - memory address */
 /********************************************************************************/

 /*
    pc_1_reg = Program counter (PC)
    start of pipeline, this is where we PC load and increment reside
    pc_1_reg is 31 bits in size, therefore, bit 0 of pc_1_nxt is always 0
    PC is propagated through pipeline since some instructions require value of PC
    propagating is easier than recreating PC value of current instruction
    ldpc_1_reg is used to purge instructions that may have been buffered previously
 */
 assign pc_1_adj = {(!wfi_reg && mem32_reg), (!wfi_reg && !mem32_reg), 1'b0};

`ifdef INSTANCE_INC
    inst_inc PC_1_INC (.inc_out(pc_1_nxt), .clk(clk), .inc_ain({pc_1_reg, 1'b0}),
                       .inc_bin(pc_1_adj));
`else
    assign pc_1_nxt = {pc_1_reg, 1'b0} + pc_1_adj;
`endif 

always @ (posedge clk or negedge resetb) 
begin
    if(!resetb)
    begin
        ldpc_1_reg <= 1'b0;
        pc_1_reg <= `RST_BASE; //pc_1_reg = Program Counter (PC)
    end
    else if (run_mem) 
    begin
        ldpc_1_reg <= ld_pc;
        pc_1_reg <= (ld_pc) ? addr_out[31:1] : 
                    (mem32_reg) ? {pc_1_nxt[31:2], 1'b0} : pc_1_nxt[31:1];
    end
end


/*****************************************************************************************/
/* load/store/amo state machine                                                          */
/*****************************************************************************************/
  always @ (mem32_reg or addr_out or type_out) begin
    casex ({mem32_reg, type_out[1:0], addr_out[1:0]}) //type_out[1:0] specifies size of data being operated on (byte, half word, word)
      5'b001x1,                                       //addr_out[1:0] specifies starting byte address of operation
      5'b01xx0, 
      5'b10111,
      5'b11x01,
      5'b11x1x: ls_ph_ini = 4'b0111;
      5'b01xx1: ls_ph_ini = 4'b1111;
      default:  ls_ph_ini = 4'b0011;
      endcase
    end

  always @ (addr_out or type_out) begin
    case ({type_out[1:0], addr_out[0]})
      3'b100:  ls_ainc_ini = 2'h2;
      default: ls_ainc_ini = 2'h1;
      endcase
    end

`ifdef INSTANCE_INC
  inst_inc LS_ADDR_INC ( .inc_out(ls_addr_nxt), .clk(clk), .inc_ain(ls_addr_reg),
                         .inc_bin({1'b0, ls_ainc_reg}) ); 
`else
  assign ls_addr_nxt = ls_addr_reg + ls_ainc_reg;
`endif

  always @ (posedge clk or negedge resetb) begin
    if (!resetb) begin
      ls_addr_reg <= 32'h0;
      ls_ainc_reg <=  2'h2;
      ls_ph_reg   <=  4'h0;
      ls_sadd_reg <= 32'h0;
      ls_sinc_reg <=  2'h0;
      ls_sph_reg  <=  4'h0;
      ls_data_reg <= 32'h0;
      ls_type_reg <=  3'h2;
      ls_amo_reg  <=  1'b0;
      ls_st_reg   <=  1'b0;
      end
    else begin
      if ((ld_addr || stall_ldst) && mem_rdy_v) begin
        ls_addr_reg <= (ld_addr) ? addr_out    :
                       (ld_rmw)  ? ls_sadd_reg : ls_addr_nxt;
        ls_ainc_reg <= (ld_addr) ? ls_ainc_ini :
                       (ld_rmw)  ? ls_sinc_reg : 2'h2;
        ls_ph_reg   <= (ld_addr) ? ls_ph_ini   :
                       (ld_rmw)  ? ls_sph_reg  :
                                   {1'b0, ls_ph_reg[3:2], (|ls_ph_reg[3:2] ||
                                    (ls_ph_reg[1] && !ls_st_reg))};
        end
      if (ld_addr && mem_rdy_v) begin
        ls_data_reg <= src2_5_out;
        ls_sadd_reg <= addr_out;
        ls_sinc_reg <= ls_ainc_ini;
        ls_sph_reg  <= ls_ph_ini;
        ls_type_reg <= type_out;
        end
      if ((ld_addr || ld_rmw) && mem_rdy_v) begin
        ls_amo_reg  <= ld_rmw;
        ls_st_reg   <= ld_rmw || st_out;
        end
      end
    end

  assign ld_rmw     = !ls_st_reg && amo_6_reg && (ls_ph_reg == 4'h1);
  assign ls_run     = |ls_ph_reg[3:1];
  assign stall_ldst = |ls_ph_reg;

/*****************************************************************************************/
/* dedicated amo alu                                                                     */
/*****************************************************************************************/
`ifdef INSTANCE_ADD
  inst_add AMO_ADD   ( .add_out(ls_amo_add), .clk(clk), .add_ain(ls_data_reg),
                       .add_bin(mem_rdat), .add_cyin(1'b0) ); 
`else
  assign ls_amo_add = ls_data_reg + mem_rdat;
`endif

  always @ (imm_6_reg or ls_amo_add or ls_amo_reg or ls_data_reg or mem_rdat) begin
    case ({ls_amo_reg, imm_6_reg[11:7]})
      6'b100000: ls_amo_out = ls_amo_add;
      6'b100100: ls_amo_out = ls_data_reg ^ mem_rdat;
      6'b101000: ls_amo_out = ls_data_reg | mem_rdat;
      6'b101100: ls_amo_out = ls_data_reg & mem_rdat;
      default:   ls_amo_out = ls_data_reg;
      endcase
    end

/*****************************************************************************************/
/* write data multiplexing                                                               */
/*****************************************************************************************/
  always @ (mem32_reg or ls_amo_out or ls_type_reg or ls_sadd_reg or ls_ph_reg) begin
    casex ({mem32_reg, ls_type_reg[1:0], ls_sadd_reg[1:0], ls_ph_reg[3:2]})
      7'b000x1xx,
      7'b001x101,
      7'b010x111,
      7'b010x100,
      7'b1xx01xx: ls_data_out = {ls_amo_out[23:0], ls_amo_out[31:24]};
      7'b010x000,
      7'b1xx10xx: ls_data_out = {ls_amo_out[15:0], ls_amo_out[31:16]};
      7'b001x100,
      7'b010x101,
      7'b1xx11xx: ls_data_out = {ls_amo_out[7:0],  ls_amo_out[31:8]};
      default:    ls_data_out =  ls_amo_out;
      endcase
    end

  always @ (mem32_reg or ls_type_reg or ls_sadd_reg or ls_ph_reg) begin
    casex ({mem32_reg, ls_type_reg[1:0], ls_sadd_reg[1:0], ls_ph_reg[3:2]})
      7'b000x0xx,
      7'b001x100,
      7'b010x100,
      7'b10000xx,
      7'b1011100,
      7'b1100100: ls_ble_out = 4'b0001;
      7'b01xxx11,
      7'b001xxx1,
      7'b000x1xx,
      7'b10001xx: ls_ble_out = 4'b0010;
      7'b10010xx: ls_ble_out = 4'b0100;
      7'b10101xx: ls_ble_out = 4'b0110;
      7'b11x1100: ls_ble_out = 4'b0111;
      7'b10011xx,
      7'b10111x1,
      7'b11x11x1: ls_ble_out = 4'b1000;
      7'b10110xx,
      7'b11x10x1: ls_ble_out = 4'b1100;
      7'b11x01x1: ls_ble_out = 4'b1110;
      7'b11x00xx: ls_ble_out = 4'b1111;
      default:    ls_ble_out = 4'b0011;
      endcase
    end

/*****************************************************************************************/
/* memory interface                                                                      */
/*****************************************************************************************/
  assign mem_addr  = (stall_ldst) ? ls_addr_reg      :
                     (stall_cmp)  ? {pc_2_reg, 1'b0} : {pc_1_reg, 1'b0};
  assign mem_lock  = stall_ldst && amo_6_reg;
  assign mem_ble   = (ls_run) ? ls_ble_out : {mem32_reg, mem32_reg, 2'b11};
  assign mem_trans = {ls_run, ls_run || !(!valid_1_reg || stall_csr || ld_pc || wfi_state ||
                                (!ls_ph_reg[1] && ls_ph_reg[0]))};
  assign mem_write =  ls_run && ls_st_reg;

  always @ (posedge clk or negedge resetb) begin
    if (!resetb) begin
      mem_wdata <= 32'h0;
      end
    else begin
      if (mem_rdy_v && ls_st_reg && ls_ph_reg[1]) mem_wdata <= ls_data_out;
      end
    end

/*****************************************************************************************/
/* read data assembly                                                                    */
/*****************************************************************************************/
  always @ (posedge clk or negedge resetb) begin
    if (!resetb) begin
      ls_din3_reg <=  8'h0;
      ls_din2_reg <= 32'h0;
      ls_din1_reg <= 32'h0;
      end
    else begin
      if (mem_rdy_v && !ls_st_reg && ls_ph_reg[2]) ls_din3_reg <= mem_rdata[15:8];
      if (mem_rdy_v && !ls_st_reg && ls_ph_reg[1]) ls_din2_reg <= mem_rdata;
      if (mem_rdy_v && !ls_st_reg && ls_ph_reg[0]) ls_din1_reg <= mem_rdata;
      end
    end

  assign sext1_07 = !ls_type_reg[2] && ls_din1_reg[7];
  assign sext1_15 = !ls_type_reg[2] && ls_din1_reg[15];
  assign sext1_23 = !ls_type_reg[2] && ls_din1_reg[23];
  assign sext1_31 = !ls_type_reg[2] && ls_din1_reg[31];

  always @ (mem32_reg or ls_type_reg or ls_sadd_reg or ls_din3_reg or ls_din2_reg or
            ls_din1_reg or sext1_07 or sext1_15 or sext1_23 or sext1_31) begin
    casex ({mem32_reg, ls_type_reg[1:0], ls_sadd_reg[1:0]})
      5'b00010,
      5'bx0000: mem_rdat = { {24{sext1_07}},   ls_din1_reg[7:0]  };
      5'b00011,
      5'bx0001: mem_rdat = { {24{sext1_15}},   ls_din1_reg[15:8] };
      5'b00110,
      5'bx0100: mem_rdat = { {16{sext1_15}},   ls_din1_reg[15:0] };
      5'b001x1: mem_rdat = { {16{sext1_07}},   ls_din1_reg[7:0],   ls_din2_reg[15:8] };
      5'b010x0: mem_rdat = {ls_din1_reg[15:0], ls_din2_reg[15:0] };
      5'b010x1: mem_rdat = {ls_din1_reg[7:0],  ls_din2_reg[15:0],  ls_din3_reg};
      5'b10010: mem_rdat = { {24{sext1_23}},   ls_din1_reg[23:16]};
      5'b10011: mem_rdat = { {24{sext1_31}},   ls_din1_reg[31:24]};
      5'b10101: mem_rdat = { {16{sext1_23}},   ls_din1_reg[23:8] };
      5'b10110: mem_rdat = { {16{sext1_31}},   ls_din1_reg[31:16]};
      5'b10111: mem_rdat = { {16{sext1_07}},   ls_din1_reg[7:0],   ls_din2_reg[31:24]};
      5'b11001: mem_rdat = {ls_din1_reg[7:0],  ls_din2_reg[31:8] };
      5'b11010: mem_rdat = {ls_din1_reg[15:0], ls_din2_reg[31:16]};
      5'b11011: mem_rdat = {ls_din1_reg[23:0], ls_din2_reg[31:24]};
      default:  mem_rdat =  ls_din1_reg;
      endcase
    end


/*****************************************************************************************/
/* clock 2 - memory access                                                               */
/*****************************************************************************************/
  always @ (posedge clk or negedge resetb) begin
    if (!resetb) begin
      ldpc_2_reg  <=  1'b0;
      pc_2_reg    <= `RST_BASE;
      valid_2_reg <=  1'b0;
      end
    else if (run_mem) begin
      ldpc_2_reg  <= ldpc_1_reg;
      pc_2_reg    <= pc_1_reg;
      valid_2_reg <= !ld_pc && !wfi_reg && valid_1_reg;
      end
    end

/*****************************************************************************************/
/* clock 3 - pre-decode                                                                  */
/*****************************************************************************************/
  assign ld_insth = mem32_reg || ( word_inst && (ifull_3_reg == 3'b001));
  assign ld_instl = mem32_reg || (!word_inst && (ifull_3_reg == 3'b001)) ||
                    (ifull_3_reg == 3'b011) || (ifull_3_reg == 3'b000);

  always @ (posedge clk or negedge resetb) begin
    if (!resetb) begin
      ifull_3_reg <=  3'h0;
      inst_3_reg  <= 32'h0;
      instu_3_reg <= 16'h0;
      end
    else if (run_dec) begin
      ifull_3_reg <= (valid_2_reg && !ldpc_1_reg) ? ifull_3_nxt : 3'b000;
      if (ld_insth) inst_3_reg[31:16] <= (mem32_reg) ? mem_idata[31:16] : mem_idata[15:0];
      if (ld_instl) inst_3_reg[15:0]  <= mem_idata[15:0];
      instu_3_reg <= inst_3_reg[31:16];
      end
    end

  assign stall_align = valid_3_reg && ((word_instu && (ifull_3_reg == 3'b010)) ||
                                       (word_inst  && (ifull_3_reg == 3'b001)));
  assign word_instu  = &inst_3_reg[17:16];
  assign word_inst   = &inst_3_reg[1:0];
  assign stall_cmp   = ((ifull_3_reg == 3'b011) && !word_instu && !word_inst) ||
                       ((ifull_3_reg == 3'b111) && !word_instu);

  always @ (mem32_reg or ifull_3_reg or pc_2_reg or word_inst or word_instu) begin
    case ({mem32_reg, ifull_3_reg})
      4'b0000: ifull_3_nxt = 3'b001;
      4'b0001: ifull_3_nxt = (word_inst)  ? 3'b011 : 3'b001;
      4'b0011: ifull_3_nxt = 3'b001;
      4'b1000: ifull_3_nxt = {2'b01, !pc_2_reg[1]};
      4'b1010: ifull_3_nxt = (word_instu) ? 3'b111 : 3'b011;
      4'b1011: ifull_3_nxt = (word_inst)  ? 3'b011 :
                             (word_instu) ? 3'b111 : 3'b100;
      4'b1100: ifull_3_nxt = 3'b011;
      4'b1111: ifull_3_nxt = (word_instu) ? 3'b111 : 3'b100;
      default: ifull_3_nxt = 3'b000;
      endcase
    end

  assign opc[31:16] = (ifull_3_reg[2]) ? inst_3_reg[15:0] : inst_3_reg[31:16];
  assign opc[15:0]  = (ifull_3_reg[2]) ? instu_3_reg :
                      (ifull_3_reg[0]) ? inst_3_reg[15:0] : inst_3_reg[31:16];

/*****************************************************************************************/
/* stage 3 program counter                                                               */
/*****************************************************************************************/
  always @ (ifull_3_reg or word_inst) begin
    case (ifull_3_reg)
      3'b011:  pc_3_inc = {word_inst, !word_inst};
      3'b111:  pc_3_inc = 2'b10;
      default: pc_3_inc = 2'b01;
      endcase
    end

`ifdef INSTANCE_INC
  inst_inc  PC_3_INC  ( .inc_out(pc_3_nxt), .clk(clk), .inc_ain({pc_3_reg, 1'b0}),
                        .inc_bin({pc_3_inc, 1'b0}) ); 
`else
  assign pc_3_nxt = {pc_3_reg, 1'b0} + {pc_3_inc, 1'b0};
`endif

  always @ (posedge clk or negedge resetb) begin
    if (!resetb) begin
      pc_3_reg    <= `RST_BASE;
      valid_3_reg <=  1'b0;
      end
    else if (run_exe) begin
      pc_3_reg    <= (valid_3_reg) ? pc_3_nxt[31:1] : pc_2_reg;
      valid_3_reg <= !ld_pc && valid_2_reg;
      end
    end