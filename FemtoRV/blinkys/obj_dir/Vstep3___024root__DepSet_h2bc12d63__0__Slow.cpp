// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep3.h for the primary calling header

#include "Vstep3__pch.h"
#include "Vstep3___024root.h"

VL_ATTR_COLD void Vstep3___024root___eval_static__TOP(Vstep3___024root* vlSelf);

VL_ATTR_COLD void Vstep3___024root___eval_static(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_static\n"); );
    // Body
    Vstep3___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vstep3___024root___eval_static__TOP(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__PC = 0U;
    vlSelf->bench__DOT__uut__DOT__leds = 0U;
    vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK = 0U;
}

VL_ATTR_COLD void Vstep3___024root___eval_initial__TOP(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT____Vxrand_h8df71b37__0 
        = (0x1fU & VL_RAND_RESET_I(5));
    vlSelf->bench__DOT__uut__DOT__MEM[0U] = 0U;
    vlSelf->bench__DOT__uut__DOT__MEM[1U] = 1U;
    vlSelf->bench__DOT__uut__DOT__MEM[2U] = 2U;
    vlSelf->bench__DOT__uut__DOT__MEM[3U] = 4U;
    vlSelf->bench__DOT__uut__DOT__MEM[4U] = 8U;
    vlSelf->bench__DOT__uut__DOT__MEM[5U] = 0x10U;
    vlSelf->bench__DOT__uut__DOT__MEM[6U] = 0x11U;
    vlSelf->bench__DOT__uut__DOT__MEM[7U] = 0x12U;
    vlSelf->bench__DOT__uut__DOT__MEM[8U] = 0x14U;
    vlSelf->bench__DOT__uut__DOT__MEM[9U] = 0x18U;
    vlSelf->bench__DOT__uut__DOT__MEM[0xaU] = 0x19U;
    vlSelf->bench__DOT__uut__DOT__MEM[0xbU] = 0x1aU;
    vlSelf->bench__DOT__uut__DOT__MEM[0xcU] = 0x1cU;
    vlSelf->bench__DOT__uut__DOT__MEM[0xdU] = 0x1dU;
    vlSelf->bench__DOT__uut__DOT__MEM[0xeU] = 0x1eU;
    vlSelf->bench__DOT__uut__DOT__MEM[0xfU] = 0x1fU;
    vlSelf->bench__DOT__uut__DOT__MEM[0x10U] = 0x1eU;
    vlSelf->bench__DOT__uut__DOT__MEM[0x11U] = 0x1cU;
    vlSelf->bench__DOT__uut__DOT__MEM[0x12U] = 0x18U;
    vlSelf->bench__DOT__uut__DOT__MEM[0x13U] = 0x10U;
    vlSelf->bench__DOT__uut__DOT__MEM[0x14U] = 0U;
}

VL_ATTR_COLD void Vstep3___024root___eval_final(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep3___024root___dump_triggers__stl(Vstep3___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstep3___024root___eval_phase__stl(Vstep3___024root* vlSelf);

VL_ATTR_COLD void Vstep3___024root___eval_settle(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_settle\n"); );
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
            Vstep3___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstep3___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep3___024root___dump_triggers__stl(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep3___024root___stl_sequent__TOP__0(Vstep3___024root* vlSelf);

VL_ATTR_COLD void Vstep3___024root___eval_stl(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstep3___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vstep3___024root___stl_sequent__TOP__0(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__clk = (1U & (vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK 
                                               >> 0x15U));
}

VL_ATTR_COLD void Vstep3___024root___eval_triggers__stl(Vstep3___024root* vlSelf);

VL_ATTR_COLD bool Vstep3___024root___eval_phase__stl(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstep3___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstep3___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep3___024root___dump_triggers__act(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vstep3___024root___dump_triggers__nba(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vstep3___024root___ctor_var_reset(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT____Vxrand_h8df71b37__0 = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__PC = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 21; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__MEM[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->bench__DOT__uut__DOT__leds = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK = VL_RAND_RESET_I(22);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
