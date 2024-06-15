// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep6.h for the primary calling header

#include "Vstep6__pch.h"
#include "Vstep6___024root.h"

VL_ATTR_COLD void Vstep6___024root___eval_static__TOP(Vstep6___024root* vlSelf);

VL_ATTR_COLD void Vstep6___024root___eval_static(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_static\n"); );
    // Body
    Vstep6___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vstep6___024root___eval_static__TOP(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__state = 0U;
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK = 0U;
}

VL_ATTR_COLD void Vstep6___024root___eval_initial__TOP(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__PC = 0U;
    vlSelf->bench__DOT__uut__DOT__MEM[0U] = 0xb3U;
    vlSelf->bench__DOT__uut__DOT__MEM[1U] = 0x108093U;
    vlSelf->bench__DOT__uut__DOT__MEM[2U] = 0x108093U;
    vlSelf->bench__DOT__uut__DOT__MEM[3U] = 0x108093U;
    vlSelf->bench__DOT__uut__DOT__MEM[4U] = 0x108093U;
    vlSelf->bench__DOT__uut__DOT__MEM[5U] = 0x8133U;
    vlSelf->bench__DOT__uut__DOT__MEM[6U] = 0x2081b3U;
    vlSelf->bench__DOT__uut__DOT__MEM[7U] = 0x31d193U;
    vlSelf->bench__DOT__uut__DOT__MEM[8U] = 0x1f19193U;
    vlSelf->bench__DOT__uut__DOT__MEM[9U] = 0x4051d193U;
    vlSelf->bench__DOT__uut__DOT__MEM[0xaU] = 0x1a1d093U;
    vlSelf->bench__DOT__uut__DOT__MEM[0xbU] = 0x100073U;
}

VL_ATTR_COLD void Vstep6___024root___eval_final(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep6___024root___dump_triggers__stl(Vstep6___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstep6___024root___eval_phase__stl(Vstep6___024root* vlSelf);

VL_ATTR_COLD void Vstep6___024root___eval_settle(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vstep6___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstep6___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep6___024root___dump_triggers__stl(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep6___024root___stl_sequent__TOP__0(Vstep6___024root* vlSelf);

VL_ATTR_COLD void Vstep6___024root___eval_stl(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstep6___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vstep6___024root___stl_sequent__TOP__0(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->bench__DOT__uut__DOT__clk = (1U & (vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
                                               >> 0x13U));
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

VL_ATTR_COLD void Vstep6___024root___eval_triggers__stl(Vstep6___024root* vlSelf);

VL_ATTR_COLD bool Vstep6___024root___eval_phase__stl(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstep6___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstep6___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep6___024root___dump_triggers__act(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge bench.uut.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge bench.CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep6___024root___dump_triggers__nba(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge bench.uut.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge bench.CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep6___024root___ctor_var_reset(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__leds = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__rs1Id = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__rs2Id = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__rdId = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__RegisterBank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__writeBackEn = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__aluIn2 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__aluOut = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK = VL_RAND_RESET_I(20);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
