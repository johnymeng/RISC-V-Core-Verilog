// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep4.h for the primary calling header

#include "Vstep4__pch.h"
#include "Vstep4___024root.h"

VL_ATTR_COLD void Vstep4___024root___eval_static__TOP(Vstep4___024root* vlSelf);

VL_ATTR_COLD void Vstep4___024root___eval_static(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_static\n"); );
    // Body
    Vstep4___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vstep4___024root___eval_static__TOP(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__prev_LEDS = 0U;
    vlSelf->tb__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK = 0U;
}

VL_ATTR_COLD void Vstep4___024root___eval_initial__TOP(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb__DOT__uut__DOT__PC = 0U;
    vlSelf->tb__DOT__uut__DOT__instr = 0x33U;
    vlSelf->tb__DOT__uut__DOT__MEM[0U] = 0xb3U;
    vlSelf->tb__DOT__uut__DOT__MEM[1U] = 0x108093U;
    vlSelf->tb__DOT__uut__DOT__MEM[2U] = 0x108093U;
    vlSelf->tb__DOT__uut__DOT__MEM[3U] = 0x108093U;
    vlSelf->tb__DOT__uut__DOT__MEM[4U] = 0x108093U;
    vlSelf->tb__DOT__uut__DOT__MEM[5U] = 0xa103U;
    vlSelf->tb__DOT__uut__DOT__MEM[6U] = 0x20a023U;
    vlSelf->tb__DOT__uut__DOT__MEM[7U] = 0x100073U;
}

VL_ATTR_COLD void Vstep4___024root___eval_final(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep4___024root___dump_triggers__stl(Vstep4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstep4___024root___eval_phase__stl(Vstep4___024root* vlSelf);

VL_ATTR_COLD void Vstep4___024root___eval_settle(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_settle\n"); );
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
            Vstep4___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstep4___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep4___024root___dump_triggers__stl(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep4___024root___stl_sequent__TOP__0(Vstep4___024root* vlSelf);

VL_ATTR_COLD void Vstep4___024root___eval_stl(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstep4___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vstep4___024root___stl_sequent__TOP__0(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_0 
        = (0x7fU & vlSelf->tb__DOT__uut__DOT__instr);
    vlSelf->tb__DOT__uut__DOT__clk = (1U & ((IData)(vlSelf->tb__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK) 
                                            >> 0xaU));
}

VL_ATTR_COLD void Vstep4___024root___eval_triggers__stl(Vstep4___024root* vlSelf);

VL_ATTR_COLD bool Vstep4___024root___eval_phase__stl(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstep4___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstep4___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep4___024root___dump_triggers__act(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.uut.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb.CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep4___024root___dump_triggers__nba(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.uut.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb.CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep4___024root___ctor_var_reset(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__uut__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__uut__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__uut__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
