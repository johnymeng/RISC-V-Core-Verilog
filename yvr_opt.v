/**********************************************************************************/
/* read-only csr defaults */
/**********************************************************************************/
`define MISA_DEF 32’h00000000 /* misa */
`define MVENDORID_DEF 32’h00000000 /* vendor id */
`define MARCHID_DEF 32’h00000000 /* architecture id */
`define MIMPID_DEF 32’h00000000 /* implementation id */

/**********************************************************************************/
/* read/write csr reset values */
/**********************************************************************************/
`define MEPC_RST 32’h00000000 /* exception pc register */
`define MSCR_RST 32’h00000000 /* scratch register */
`define MTVEC_RST 30’h00000040 /* trap vector register 0x0100 */

/**********************************************************************************/
/* default addresses */
/**********************************************************************************/
`define NMI_VECT 32’h00000100 /* nmi vector 0x0100 */
`define RST_BASE 31’h00000100 /* reset start address 0x0200 */

/**********************************************************************************/
/* debug options */
/**********************************************************************************/
`define XDEBUGVER 4’hf /* debug version */
`define DBG_VECT 32’h00000140 /* debug vector 0x0140 */
`define DEX_VECT 32’h000001c0 /* dbg exception vector 0x01c0 */

/**********************************************************************************/
/* cycle counter width select - default is 64-bit */
/**********************************************************************************/
`define CYCCNT_64 /* 64-bit */
// `define CYCCNT_32 /* 32-bit */
// `define CYCCNT_0 /* none */

/**********************************************************************************/
/* instructions-retired counter width select - default is 64-bit */
/**********************************************************************************/
`define INSTRET_64 /* 64-bit */
// `define INSTRET_32 /* 32-bit */
// `define INSTRET_0 /* none */