// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench.h for the primary calling header

#include "Vbench__pch.h"
#include "Vbench___024root.h"

VL_ATTR_COLD void Vbench___024root___eval_static__TOP(Vbench___024root* vlSelf);

VL_ATTR_COLD void Vbench___024root___eval_static(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_static\n"); );
    // Body
    Vbench___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vbench___024root___eval_static__TOP(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__count = 0U;
    vlSelf->bench__DOT__uut__DOT__counter = 0U;
}

VL_ATTR_COLD void Vbench___024root___eval_final(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbench___024root___eval_settle(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbench___024root___dump_triggers__act(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vbench___024root___dump_triggers__nba(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vbench___024root___ctor_var_reset(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
}
