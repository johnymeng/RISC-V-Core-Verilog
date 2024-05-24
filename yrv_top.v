module yrv_top (csr_achk, csr_addr, csr_read, csr_wdata, csr_write, debug_mode,
                ebrk_inst, mem_addr, mem_ble, mem_lock, mem_trans, mem_wdata,
                mem_write, timer_en, wfi_state, brk_req, bus_32, clk, csr_ok_ext,
                csr_rdata, dbg_req, dresetb, ei_req, halt_reg, hw_id, li_req,
                mem_rdata, mem_ready, nmi_req, resetb, sw_req, timer_match,
                timer_rdata);

input brk_req; /* breakpoint request */
input bus_32; /* 32-bit bus select */
input clk; /* cpu clock */
input csr_ok_ext; /* valid external csr addr */
input dbg_req; /* debug request */
input dresetb; /* debug reset */
input ei_req; /* external int request */
input halt_reg; /* halt (enter debug) */
input mem_ready; /* memory ready */
input nmi_req; /* non-maskable interrupt */
input resetb; /* master reset */
input sw_req; /* sw int request */
input timer_match; /* timer/cmp match */
input [9:0] hw_id; /* hardware id */
input [15:0] li_req; /* local int requests */
input [31:0] csr_rdata; /* csr external read data */
input [31:0] mem_rdata; /* memory read data */
input [31:0] timer_rdata; /* timer read data */


output csr_read; /* csr read enable */
output csr_write; /* csr write enable */
output debug_mode; /* in debug mode */
output ebrk_inst; /* ebreak instruction */
output mem_lock; /* memory lock (rmw) */
output mem_write; /* memory write enable */
output timer_en; /* timer enable */
output wfi_state; /* waiting for interrupt */
output [1:0] mem_trans; /* memory transfer type */
output [3:0] mem_ble; /* memory byte lane enables */
output [11:0] csr_achk; /* csr address to check */
output [11:0] csr_addr; /* csr address */
output [31:0] csr_wdata; /* csr write data */
output [31:0] mem_addr; /* memory address */
output [31:0] mem_wdata; /* memory write data */