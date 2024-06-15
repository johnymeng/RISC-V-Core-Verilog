// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep1.h for the primary calling header

#include "Vstep1__pch.h"
#include "Vstep1___024root.h"

VL_ATTR_COLD void Vstep1___024root___eval_static__TOP(Vstep1___024root* vlSelf);

VL_ATTR_COLD void Vstep1___024root___eval_static(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___eval_static\n"); );
    // Body
    Vstep1___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vstep1___024root___eval_static__TOP(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__count = 0U;
    vlSelf->bench__DOT__uut__DOT__counter = 0U;
}

VL_ATTR_COLD void Vstep1___024root___eval_final(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vstep1___024root___eval_settle(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep1___024root___dump_triggers__act(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge bench.CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep1___024root___dump_triggers__nba(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge bench.CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep1___024root___ctor_var_reset(Vstep1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
