/**********************************************************************************/
/* User Counter/Timers */
/**********************************************************************************/
`define CYCLE 12’hc00 /* mcycle_reg */
`define TIME 12’hc01 /* timer_rdata */
`define INSTRET 12’hc02 /* minstret_reg */
`define CYCLEH 12’hc80 /* mcycleh_reg */
`define TIMEH 12’hc81 /* timer_rdata */
`define INSTRETH 12’hc82 /* minstreth_reg */

/**********************************************************************************/
/* Machine Information Registers */
/**********************************************************************************/
`define MVENDORID 12’hf11 /* `MVENDORID_DEF */
`define MARCHID 12’hf12 /* `MARCHID_DEF */
`define MIMPID 12’hf13 /* `MIMPID_DEF */
`define MHARTID 12’hf14 /* hw_id */

/**********************************************************************************/
/* Machine Trap Setup */
/**********************************************************************************/
`define MSTATUS 12’h300 /* various */
`define MISA 12’h301 /* `MISA_DEF */
`define MIE 12’h304 /* various m*ie_reg */
`define MTVEC 12’h305 /* mtvec_reg, vmode_reg */

/**********************************************************************************/
/* Machine Trap Handling */
/**********************************************************************************/
`define MSCRATCH 12’h340 /* mscratch_reg */
`define MEPC 12’h341 /* mepc_reg */
`define MCAUSE 12’h342 /* mcause_reg */
`define MIP 12’h344 /* various m*ip_reg */

/**********************************************************************************/
/* Machine Counter/Timers */
/**********************************************************************************/
`define MCYCLE 12’hb00 /* mcycle_reg */
`define MINSTRET 12’hb02 /* minstret_reg */
`define MCYCLEH 12’hb80 /* mcycleh_reg */
`define MINSTRETH 12’hb82 /* minstreth_reg */

/**********************************************************************************/
/* Machine Counter Setup */
/**********************************************************************************/
`define MCOUNTINHIBIT 12’h320 /* various */

/**********************************************************************************/
/* Debug Mode Registers */
/**********************************************************************************/
`define DCSR 12’h7b0 /* various */
`define DPC 12’h7b1 /* dpc_reg */
`define DSCRATCH0 12’h7b2 /* dscratch0_reg */
`define DSCRATCH1 12’h7b3 /* dscratch1_reg */