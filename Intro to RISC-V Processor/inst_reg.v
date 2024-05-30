module inst_reg  (src1_data, src2_data, clk, dst_addr, dst_data, reg_enabl, src1_addr,
                  src2_addr, wr_enabl);

  input         clk;                                       /* cpu clock                    */
  input         reg_enabl;                                 /* register enable              */
  input         wr_enabl;                                  /* write enable                 */
  input   [4:0] dst_addr;                                  /* dst address                  */
  input   [4:0] src1_addr;                                 /* src1 address                 */
  input   [4:0] src2_addr;                                 /* src2 address                 */
  input  [31:0] dst_data;                                  /* dst write data               */

  output [31:0] src1_data;                                 /* rs1 read data                */
  output [31:0] src2_data;                                 /* rs2 read data                */

  /*****************************************************************************************/
  /* signal declarations                                                                   */
  /*****************************************************************************************/
  wire   [31:0] src1_data,    src2_data;                   /* read data                    */

`ifdef ICE40_VERSION
  /*****************************************************************************************/
  /* Lattice memory                                                                        */
  /*****************************************************************************************/
  SB_RAM256x16 RAM1L  ( .RDATA(src1_data[15:0]), .RADDR({3'b0, src1_addr}), .RCLK(clk),
                        .RCLKE(reg_enabl), .RE(reg_enabl), .WADDR({3'b0, dst_addr}),
                        .WCLK(clk), .WCLKE(reg_enabl), .WDATA(dst_data[15:0]),
                        .WE(wr_enabl), .MASK(16'h0) );

  SB_RAM256x16 RAM1H  ( .RDATA(src1_data[31:16]), .RADDR({3'b0, src1_addr}), .RCLK(clk),
                        .RCLKE(reg_enabl), .RE(reg_enabl), .WADDR({3'b0, dst_addr}),
                        .WCLK(clk), .WCLKE(reg_enabl), .WDATA(dst_data[31:16]),
                        .WE(wr_enabl), .MASK(16'h0) );

  SB_RAM256x16 RAM2L  ( .RDATA(src2_data[15:0]), .RADDR({3'b0, src2_addr}), .RCLK(clk),
                        .RCLKE(reg_enabl), .RE(reg_enabl), .WADDR({3'b0, dst_addr}),
                        .WCLK(clk), .WCLKE(reg_enabl), .WDATA(dst_data[15:0]),
                        .WE(wr_enabl), .MASK(16'h0) );

  SB_RAM256x16 RAM2H  ( .RDATA(src2_data[31:16]), .RADDR({3'b0, src2_addr}), .RCLK(clk),
                        .RCLKE(reg_enabl), .RE(reg_enabl), .WADDR({3'b0, dst_addr}),
                        .WCLK(clk), .WCLKE(reg_enabl), .WDATA(dst_data[31:16]),
                        .WE(wr_enabl), .MASK(16'h0) );

`endif  // ICE40_VERSION

`ifdef SERIES7_VERSION
  /*****************************************************************************************/
  /* Xilinx memory                                                                         */
  /*****************************************************************************************/
  BRAM_SDP_MACRO     #( .BRAM_SIZE("18Kb"), .DEVICE("7SERIES"), .WRITE_WIDTH(32),
                        .READ_WIDTH(32), .SIM_COLLISION_CHECK("NONE"),
                        .WRITE_MODE("READ_FIRST") )
                RAM_1 ( .DO(src1_data), .DI(dst_data), .RDADDR({4'h0, src1_addr}),
                        .RDCLK(clk), .RDEN(reg_enabl), .REGCE(1'b1), .RST(1'b0),
                        .WE({4{wr_enabl}}), .WRADDR({4'h0, dst_addr}), .WRCLK(clk),
                        .WREN(reg_enabl) );

  BRAM_SDP_MACRO     #( .BRAM_SIZE("18Kb"), .DEVICE("7SERIES"), .WRITE_WIDTH(32),
                        .READ_WIDTH(32), .SIM_COLLISION_CHECK("NONE"),
                        .WRITE_MODE("READ_FIRST") )
                RAM_2 ( .DO(src2_data), .DI(dst_data), .RDADDR({4'h0, src2_addr}),
                        .RDCLK(clk), .RDEN(reg_enabl), .REGCE(1'b1), .RST(1'b0),
                        .WE({4{wr_enabl}}), .WRADDR({4'h0, dst_addr}), .WRCLK(clk),
                        .WREN(reg_enabl) );

`endif  // SERIES7_VERSION

  endmodule
