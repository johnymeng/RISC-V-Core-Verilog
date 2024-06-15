// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep7.h for the primary calling header

#include "Vstep7__pch.h"
#include "Vstep7___024root.h"

VL_ATTR_COLD void Vstep7___024root___eval_initial__TOP(Vstep7___024root* vlSelf);
VlCoroutine Vstep7___024root___eval_initial__TOP__Vtiming__0(Vstep7___024root* vlSelf);

void Vstep7___024root___eval_initial(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_initial\n"); );
    // Body
    Vstep7___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep7___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 
        = vlSelf->bench__DOT__uut__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep7___024root___eval_initial__TOP__Vtiming__0(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->bench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "bench_iverilog.v", 
                                           20);
        vlSelf->bench__DOT__CLK = (1U & (~ (IData)(vlSelf->bench__DOT__CLK)));
        if (VL_UNLIKELY(((IData)(vlSelf->bench__DOT__uut__DOT__leds) 
                         != (IData)(vlSelf->bench__DOT__prev_LEDS)))) {
            VL_WRITEF_NX("LEDS = %b\n",0,5,vlSelf->bench__DOT__uut__DOT__leds);
        }
        vlSelf->bench__DOT__prev_LEDS = vlSelf->bench__DOT__uut__DOT__leds;
    }
}

void Vstep7___024root___eval_act(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_act\n"); );
}

void Vstep7___024root___nba_sequent__TOP__0(Vstep7___024root* vlSelf);
void Vstep7___024root___nba_sequent__TOP__1(Vstep7___024root* vlSelf);

void Vstep7___024root___eval_nba(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep7___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep7___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vstep7___024root___nba_sequent__TOP__0(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
        = (0xfffffU & ((IData)(1U) + vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK));
    vlSelf->bench__DOT__uut__DOT__clk = (1U & (vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
                                               >> 0x13U));
}

VL_INLINE_OPT void Vstep7___024root___nba_sequent__TOP__1(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
    __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__PC;
    __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__PC = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr = 0;
    IData/*19:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__instr = 0;
    IData/*19:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__instr = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__instr;
    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__instr = 0;
    IData/*31:0*/ __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0;
    __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0 = 0;
    CData/*4:0*/ __VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0;
    __VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0 = 0;
    CData/*1:0*/ __Vdly__bench__DOT__uut__DOT__state;
    __Vdly__bench__DOT__uut__DOT__state = 0;
    CData/*0:0*/ __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0;
    __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0 = 0;
    // Body
    __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0 = 0U;
    __Vdly__bench__DOT__uut__DOT__state = vlSelf->bench__DOT__uut__DOT__state;
    if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
        if (((((((((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)) 
                   | (0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
                  | (0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
                 | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
                | (0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
               | (0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
              | (0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
             | (3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            if (VL_UNLIKELY((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("ALUreg rd=%2# rs1=%2# rs2=%2# funct3=%b\n",0,
                             5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                         >> 7U)),5,
                             (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xfU)),5,
                             (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0x14U)),3,
                             (7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                    >> 0xcU)));
            } else if (VL_UNLIKELY((0x13U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("ALUimm rd=%2# rs1=%2# imm=%0# funct3=%b\n",0,
                             5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                         >> 7U)),5,
                             (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xfU)),32,
                             (((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->bench__DOT__uut__DOT__instr 
                                            >> 0x14U))),
                             3,(7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                      >> 0xcU)));
            } else if (VL_UNLIKELY((0x63U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("BRANCH\n",0);
            } else if (VL_UNLIKELY((0x6fU == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("JAL\n",0);
            } else if (VL_UNLIKELY((0x67U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("JALR\n",0);
            } else if (VL_UNLIKELY((0x17U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("AUIPC\n",0);
            } else if ((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) {
                VL_WRITEF_NX("LUI\n",0);
            } else {
                VL_WRITEF_NX("LOAD\n",0);
            }
        } else if (VL_UNLIKELY((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("STORE\n",0);
        } else if (VL_UNLIKELY((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("SYSTEM\n",0);
        }
        if (VL_UNLIKELY((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_FINISH_MT("step7.v", 206, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->bench__DOT__uut__DOT__writeBackEn) 
                     & (0U != (IData)(vlSelf->bench__DOT__uut__DOT__rdId))))) {
        VL_WRITEF_NX("x%0# <= %b\n",0,5,vlSelf->bench__DOT__uut__DOT__rdId,
                     32,vlSelf->bench__DOT__uut__DOT__aluOut);
        __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0 
            = vlSelf->bench__DOT__uut__DOT__aluOut;
        __VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0 
            = vlSelf->bench__DOT__uut__DOT__rdId;
        __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0 = 1U;
        if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__rdId))) {
            vlSelf->bench__DOT__uut__DOT__leds = (0x1fU 
                                                  & vlSelf->bench__DOT__uut__DOT__aluOut);
        }
    }
    if (VL_UNLIKELY((0U == (IData)(vlSelf->bench__DOT__uut__DOT__state)))) {
        VL_WRITEF_NX("PC=%10# ",0,32,vlSelf->bench__DOT__uut__DOT__PC);
        vlSelf->bench__DOT__uut__DOT__instr = vlSelf->bench__DOT__uut__DOT__MEM
            [(0xffU & (vlSelf->bench__DOT__uut__DOT__PC 
                       >> 2U))];
        __Vdly__bench__DOT__uut__DOT__state = 1U;
        __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__PC 
            = vlSelf->bench__DOT__uut__DOT__PC;
        __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
            = vlSelf->bench__DOT__uut__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__PC 
                                                    >> 2U))];
        if ((0x40U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
            if (VL_LIKELY((0x20U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                if ((0x10U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if (VL_UNLIKELY((8U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        VL_WRITEF_NX("?????",0);
                    } else if (VL_UNLIKELY((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        VL_WRITEF_NX("?????",0);
                    } else if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        if (VL_LIKELY((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                            if (VL_UNLIKELY((0U == 
                                             (7U & 
                                              (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                               >> 0xcU))))) {
                                VL_WRITEF_NX("ebreak",0);
                            } else if (VL_LIKELY((2U 
                                                  == 
                                                  (7U 
                                                   & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                      >> 0xcU))))) {
                                if ((0x8000000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    if ((0x200000U 
                                         & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                        VL_WRITEF_NX("rdinstreth x%0#",0,
                                                     5,
                                                     (0x1fU 
                                                      & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                         >> 7U)));
                                    } else {
                                        VL_WRITEF_NX("rdcycleh x%0#",0,
                                                     5,
                                                     (0x1fU 
                                                      & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                         >> 7U)));
                                    }
                                } else if ((0x200000U 
                                            & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    VL_WRITEF_NX("rdinstret x%0#",0,
                                                 5,
                                                 (0x1fU 
                                                  & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                     >> 7U)));
                                } else {
                                    VL_WRITEF_NX("rdcycle x%0#",0,
                                                 5,
                                                 (0x1fU 
                                                  & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                     >> 7U)));
                                }
                            } else {
                                VL_WRITEF_NX("SYSTEM",0);
                            }
                        } else {
                            VL_WRITEF_NX("?????",0);
                        }
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else if ((8U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if (VL_LIKELY((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                            if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                VL_WRITEF_NX("jal x%0#,0x%0x",0,
                                             5,(0x1fU 
                                                & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                   >> 7U)),
                                             32,(__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__PC 
                                                 + 
                                                 ([&]() {
                                                    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr 
                                                        = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                                    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__Vfuncout 
                                                        = 
                                                        (((- (IData)(
                                                                     (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | ((0xff000U 
                                                             & __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr) 
                                                            | ((0x800U 
                                                                & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__instr 
                                                                     >> 0x14U)))));
                                                }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Jimm__26__Vfuncout)));
                            } else {
                                VL_WRITEF_NX("?????",0);
                            }
                        } else {
                            VL_WRITEF_NX("?????",0);
                        }
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else if ((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            VL_WRITEF_NX("jalr x%0#,x%0#,%0d",0,
                                         5,(0x1fU & 
                                            (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 7U)),
                                         5,(0x1fU & 
                                            (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 0xfU)),
                                         32,([&]() {
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__instr 
                                                = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__Vfuncout 
                                                = (
                                                   ((- (IData)(
                                                               (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__instr 
                                                                >> 0x1fU))) 
                                                    << 0xbU) 
                                                   | (0x7ffU 
                                                      & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__instr 
                                                         >> 0x14U)));
                                        }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__27__Vfuncout));
                        } else {
                            VL_WRITEF_NX("?????",0);
                        }
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                    if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        if ((0x4000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    VL_WRITEF_NX("bgeu",0);
                                } else {
                                    VL_WRITEF_NX("bltu",0);
                                }
                            } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                VL_WRITEF_NX("bge",0);
                            } else {
                                VL_WRITEF_NX("blt",0);
                            }
                        } else if (VL_UNLIKELY((0x2000U 
                                                & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                            VL_WRITEF_NX("B???",0);
                        } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            VL_WRITEF_NX("bne",0);
                        } else {
                            VL_WRITEF_NX("beq",0);
                        }
                        VL_WRITEF_NX(" x%0#,x%0#,0x%0x",0,
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 0xfU)),
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 0x14U)),
                                     32,(__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__PC 
                                         + ([&]() {
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr 
                                                = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__Vfuncout 
                                                = (
                                                   ((- (IData)(
                                                               (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__instr 
                                                               >> 7U)))));
                                        }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Bimm__28__Vfuncout)));
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else {
                    VL_WRITEF_NX("?????",0);
                }
            } else {
                VL_WRITEF_NX("?????",0);
            }
        } else if ((0x20U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
            if ((0x10U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                if (VL_UNLIKELY((8U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                    VL_WRITEF_NX("?????",0);
                } else if ((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            VL_WRITEF_NX("lui x%0#,0x%0x <0x%0x>",0,
                                         5,(0x1fU & 
                                            (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 7U)),
                                         20,([&]() {
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__instr 
                                                = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__Vfuncout 
                                                = (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__instr 
                                                   >> 0xcU);
                                        }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__29__Vfuncout),
                                         32,([&]() {
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__instr 
                                                = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__Vfuncout 
                                                = (0xfffff000U 
                                                   & __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__instr);
                                        }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__30__Vfuncout));
                        } else {
                            VL_WRITEF_NX("?????",0);
                        }
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                    if (VL_LIKELY((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        if ((0U == (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                    >> 7U))) {
                            VL_WRITEF_NX("nop",0);
                        } else {
                            if ((0x2000000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                if ((0x4000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                        if ((0x1000U 
                                             & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                            VL_WRITEF_NX("remu",0);
                                        } else {
                                            VL_WRITEF_NX("rem",0);
                                        }
                                    } else if ((0x1000U 
                                                & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                        VL_WRITEF_NX("divu",0);
                                    } else {
                                        VL_WRITEF_NX("div",0);
                                    }
                                } else if ((0x2000U 
                                            & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                        VL_WRITEF_NX("mulhu",0);
                                    } else {
                                        VL_WRITEF_NX("mulhsu",0);
                                    }
                                } else if ((0x1000U 
                                            & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    VL_WRITEF_NX("mulh",0);
                                } else {
                                    VL_WRITEF_NX("mul",0);
                                }
                            } else if ((0x4000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                        VL_WRITEF_NX("and",0);
                                    } else {
                                        VL_WRITEF_NX("or",0);
                                    }
                                } else if ((0x1000U 
                                            & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    VL_WRITEF_NX("%s",0,
                                                 24,
                                                 ((0x40000000U 
                                                   & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)
                                                   ? 0x737261U
                                                   : 0x73726cU));
                                } else {
                                    VL_WRITEF_NX("xor",0);
                                }
                            } else if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                    VL_WRITEF_NX("sltu",0);
                                } else {
                                    VL_WRITEF_NX("slt",0);
                                }
                            } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                VL_WRITEF_NX("sll",0);
                            } else {
                                VL_WRITEF_NX("%s",0,
                                             24,((0x40000000U 
                                                  & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)
                                                  ? 0x737562U
                                                  : 0x616464U));
                            }
                            VL_WRITEF_NX(" x%0#,x%0#,x%0#",0,
                                         5,(0x1fU & 
                                            (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 7U)),
                                         5,(0x1fU & 
                                            (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 0xfU)),
                                         5,(0x1fU & 
                                            (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 0x14U)));
                        }
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else {
                    VL_WRITEF_NX("?????",0);
                }
            } else if (VL_UNLIKELY((8U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                VL_WRITEF_NX("?????",0);
            } else if (VL_UNLIKELY((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                VL_WRITEF_NX("?????",0);
            } else if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if (VL_UNLIKELY((0U == (7U & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                  >> 0xcU))))) {
                        VL_WRITEF_NX("sb",0);
                    } else if (VL_UNLIKELY((1U == (7U 
                                                   & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                      >> 0xcU))))) {
                        VL_WRITEF_NX("sh",0);
                    } else if ((2U == (7U & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 0xcU)))) {
                        VL_WRITEF_NX("sw",0);
                    } else {
                        VL_WRITEF_NX("s??",0);
                    }
                    VL_WRITEF_NX(" x%0#,%0d(x%0#)",0,
                                 5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 0x14U)),
                                 32,([&]() {
                                    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__instr 
                                        = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                    __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__Vfuncout 
                                        = (((- (IData)(
                                                       (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__instr 
                                                        >> 0x1fU))) 
                                            << 0xbU) 
                                           | ((0x7e0U 
                                               & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__instr 
                                                    >> 7U))));
                                }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Simm__31__Vfuncout),
                                 5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                             >> 0xfU)));
                } else {
                    VL_WRITEF_NX("?????",0);
                }
            } else {
                VL_WRITEF_NX("?????",0);
            }
        } else if ((0x10U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
            if (VL_UNLIKELY((8U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                VL_WRITEF_NX("?????",0);
            } else if ((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                    if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        VL_WRITEF_NX("auipc x%0#,0x%0x <0x%0x>",0,
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 7U)),
                                     20,([&]() {
                                        __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__instr 
                                            = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                        __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__Vfuncout 
                                            = (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__instr 
                                               >> 0xcU);
                                    }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm_raw__32__Vfuncout),
                                     32,(__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__PC 
                                         + ([&]() {
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__instr 
                                                = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                            __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__Vfuncout 
                                                = (0xfffff000U 
                                                   & __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__instr);
                                        }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Uimm__33__Vfuncout)));
                    } else {
                        VL_WRITEF_NX("?????",0);
                    }
                } else {
                    VL_WRITEF_NX("?????",0);
                }
            } else if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                if (VL_LIKELY((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                    if ((0x4000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                                VL_WRITEF_NX("andi",0);
                            } else {
                                VL_WRITEF_NX("ori",0);
                            }
                        } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            VL_WRITEF_NX("%s",0,32,
                                         ((0x40000000U 
                                           & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)
                                           ? 0x73726169U
                                           : 0x73726c69U));
                        } else {
                            VL_WRITEF_NX("xori",0);
                        }
                    } else if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                            VL_WRITEF_NX("sltiu",0);
                        } else {
                            VL_WRITEF_NX("slti",0);
                        }
                    } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        VL_WRITEF_NX("slli",0);
                    } else {
                        VL_WRITEF_NX("addi",0);
                    }
                    if (((1U == (7U & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                       >> 0xcU))) | 
                         (5U == (7U & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                       >> 0xcU))))) {
                        VL_WRITEF_NX(" x%0#,x%0#,%0#",0,
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 7U)),
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 0xfU)),
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 0x14U)));
                    } else {
                        VL_WRITEF_NX(" x%0#,x%0#,%0d",0,
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 7U)),
                                     5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                                 >> 0xfU)),
                                     32,([&]() {
                                        __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__instr 
                                            = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                        __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__Vfuncout 
                                            = (((- (IData)(
                                                           (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__instr 
                                                            >> 0x1fU))) 
                                                << 0xbU) 
                                               | (0x7ffU 
                                                  & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__instr 
                                                     >> 0x14U)));
                                    }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__34__Vfuncout));
                    }
                } else {
                    VL_WRITEF_NX("?????",0);
                }
            } else {
                VL_WRITEF_NX("?????",0);
            }
        } else if (VL_UNLIKELY((8U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
            VL_WRITEF_NX("?????",0);
        } else if (VL_UNLIKELY((4U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
            VL_WRITEF_NX("?????",0);
        } else if (VL_LIKELY((2U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
            if ((1U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                if ((0x4000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if (VL_UNLIKELY((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr))) {
                        VL_WRITEF_NX("l??",0);
                    } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        VL_WRITEF_NX("lhu",0);
                    } else {
                        VL_WRITEF_NX("lbu",0);
                    }
                } else if ((0x2000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                        VL_WRITEF_NX("l??",0);
                    } else {
                        VL_WRITEF_NX("lw",0);
                    }
                } else if ((0x1000U & __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr)) {
                    VL_WRITEF_NX("lh",0);
                } else {
                    VL_WRITEF_NX("lb",0);
                }
                VL_WRITEF_NX(" x%0#,%0d(x%0#)",0,5,
                             (0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                       >> 7U)),32,([&]() {
                                __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__instr 
                                    = __Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr;
                                __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__Vfuncout 
                                    = (((- (IData)(
                                                   (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__instr 
                                                    >> 0x1fU))) 
                                        << 0xbU) | 
                                       (0x7ffU & (__Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__instr 
                                                  >> 0x14U)));
                            }(), __Vfunc_bench__DOT__uut__DOT__riscv_disasm_Iimm__35__Vfuncout),
                             5,(0x1fU & (__Vtask_bench__DOT__uut__DOT__riscv_disasm__25__instr 
                                         >> 0xfU)));
            } else {
                VL_WRITEF_NX("?????",0);
            }
        } else {
            VL_WRITEF_NX("?????",0);
        }
        VL_WRITEF_NX("\n",0);
    } else if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
        vlSelf->bench__DOT__uut__DOT__rs1 = vlSelf->bench__DOT__uut__DOT__RegisterBank
            [vlSelf->bench__DOT__uut__DOT__rs1Id];
        __Vdly__bench__DOT__uut__DOT__state = 2U;
        vlSelf->bench__DOT__uut__DOT__rs2 = vlSelf->bench__DOT__uut__DOT__RegisterBank
            [vlSelf->bench__DOT__uut__DOT__rs2Id];
    } else if ((2U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
        if (VL_UNLIKELY(vlSelf->bench__DOT__uut__DOT__isSYSTEM)) {
            VL_FINISH_MT("step7.v", 177, "");
        }
        if ((1U & (~ (IData)(vlSelf->bench__DOT__uut__DOT__isSYSTEM)))) {
            vlSelf->bench__DOT__uut__DOT__PC = ((IData)(4U) 
                                                + vlSelf->bench__DOT__uut__DOT__PC);
        }
        __Vdly__bench__DOT__uut__DOT__state = 0U;
    }
    if (__VdlySet__bench__DOT__uut__DOT__RegisterBank__v0) {
        vlSelf->bench__DOT__uut__DOT__RegisterBank[__VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0] 
            = __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0;
    }
    vlSelf->bench__DOT__uut__DOT__state = __Vdly__bench__DOT__uut__DOT__state;
    vlSelf->bench__DOT__uut__DOT__rdId = (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                                   >> 7U));
    vlSelf->bench__DOT__uut__DOT__rs1Id = (0x1fU & 
                                           (vlSelf->bench__DOT__uut__DOT__instr 
                                            >> 0xfU));
    vlSelf->bench__DOT__uut__DOT__rs2Id = (0x1fU & 
                                           (vlSelf->bench__DOT__uut__DOT__instr 
                                            >> 0x14U));
    vlSelf->bench__DOT__uut__DOT__isSYSTEM = (0x73U 
                                              == (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__instr));
    vlSelf->bench__DOT__uut__DOT__writeBackEn = ((2U 
                                                  == (IData)(vlSelf->bench__DOT__uut__DOT__state)) 
                                                 & ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->bench__DOT__uut__DOT__instr)) 
                                                    | (0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->bench__DOT__uut__DOT__instr))));
    if ((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) {
        vlSelf->bench__DOT__uut__DOT__aluIn2 = vlSelf->bench__DOT__uut__DOT__rs2;
        vlSelf->bench__DOT__uut__DOT__shamt = (0x1fU 
                                               & vlSelf->bench__DOT__uut__DOT__rs2);
    } else {
        vlSelf->bench__DOT__uut__DOT__aluIn2 = (((- (IData)(
                                                            (vlSelf->bench__DOT__uut__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 0xbU) 
                                                | (0x7ffU 
                                                   & (vlSelf->bench__DOT__uut__DOT__instr 
                                                      >> 0x14U)));
        vlSelf->bench__DOT__uut__DOT__shamt = (0x1fU 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x14U));
    }
    vlSelf->bench__DOT__uut__DOT__aluOut = ((0x4000U 
                                             & vlSelf->bench__DOT__uut__DOT__instr)
                                             ? ((0x2000U 
                                                 & vlSelf->bench__DOT__uut__DOT__instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)
                                                  ? 
                                                 (vlSelf->bench__DOT__uut__DOT__rs1 
                                                  & vlSelf->bench__DOT__uut__DOT__aluIn2)
                                                  : 
                                                 (vlSelf->bench__DOT__uut__DOT__rs1 
                                                  | vlSelf->bench__DOT__uut__DOT__aluIn2))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->bench__DOT__uut__DOT__instr)
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->bench__DOT__uut__DOT__rs1, (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                                   : 
                                                  (vlSelf->bench__DOT__uut__DOT__rs1 
                                                   >> (IData)(vlSelf->bench__DOT__uut__DOT__shamt)))
                                                  : 
                                                 (vlSelf->bench__DOT__uut__DOT__rs1 
                                                  ^ vlSelf->bench__DOT__uut__DOT__aluIn2)))
                                             : ((0x2000U 
                                                 & vlSelf->bench__DOT__uut__DOT__instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)
                                                  ? 
                                                 (vlSelf->bench__DOT__uut__DOT__rs1 
                                                  < vlSelf->bench__DOT__uut__DOT__aluIn2)
                                                  : 
                                                 VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__rs1, vlSelf->bench__DOT__uut__DOT__aluIn2))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)
                                                  ? 
                                                 (vlSelf->bench__DOT__uut__DOT__rs1 
                                                  << (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                                  : 
                                                 ((IData)(
                                                          (0x40000020U 
                                                           == 
                                                           (0x40000020U 
                                                            & vlSelf->bench__DOT__uut__DOT__instr)))
                                                   ? 
                                                  (vlSelf->bench__DOT__uut__DOT__rs1 
                                                   - vlSelf->bench__DOT__uut__DOT__aluIn2)
                                                   : 
                                                  (vlSelf->bench__DOT__uut__DOT__rs1 
                                                   + vlSelf->bench__DOT__uut__DOT__aluIn2)))));
}

void Vstep7___024root___timing_resume(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep7___024root___eval_triggers__act(Vstep7___024root* vlSelf);

bool Vstep7___024root___eval_phase__act(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep7___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep7___024root___timing_resume(vlSelf);
        Vstep7___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep7___024root___eval_phase__nba(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep7___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep7___024root___dump_triggers__nba(Vstep7___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep7___024root___dump_triggers__act(Vstep7___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep7___024root___eval(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep7___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstep7___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep7___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep7___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep7___024root___eval_debug_assertions(Vstep7___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep7__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep7___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
