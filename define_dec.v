/**********************************************************************************/
/* RV32I major opcodes */
/**********************************************************************************/
`define OP_LD 5’h00 /* load */
`define OP_FNC 5’h03 /* fence */
`define OP_IMM 5’h04 /* immediate */
`define OP_AUI 5’h05 /* add upper immediate */
`define OP_ST 5’h08 /* store */
`define OP_AMO 5’h0b /* atomic memory operation */
`define OP_OP 5’h0c /* operation */
`define OP_LUI 5’h0d /* load upper immediate */
`define OP_BR 5’h18 /* branch */
`define OP_JALR 5’h19 /* jump and link register */
`define OP_JAL 5’h1b /* jump and link */
`define OP_SYS 5’h1c /* system */

/**********************************************************************************/
/* RV32C output for illegal opcode */
/**********************************************************************************/
`define RV32C_BAD 30’h3fffffff

/**********************************************************************************/
/* RV32C register addresses for expansion */
/**********************************************************************************/
`define X0 5’h00
`define X1 5’h01
`define X2 5’h02