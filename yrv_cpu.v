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