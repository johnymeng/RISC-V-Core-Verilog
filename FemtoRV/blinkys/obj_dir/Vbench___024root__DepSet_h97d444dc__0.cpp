// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench.h for the primary calling header

#include "Vbench__pch.h"
#include "Vbench___024root.h"

VlCoroutine Vbench___024root___eval_initial__TOP__Vtiming__0(Vbench___024root* vlSelf);

void Vbench___024root___eval_initial(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_initial\n"); );
    // Body
    Vbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vbench___024root___eval_initial__TOP__Vtiming__0(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->bench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "bench_iverilog.v", 
                                           20);
        vlSelf->bench__DOT__CLK = (1U & (~ (IData)(vlSelf->bench__DOT__CLK)));
        if (VL_UNLIKELY((((0x1fU == (IData)(vlSelf->bench__DOT__uut__DOT__counter))
                           ? (IData)(vlSelf->bench__DOT__uut__DOT__count)
                           : 0U) != (IData)(vlSelf->bench__DOT__prev_LEDS)))) {
            VL_WRITEF_NX("LEDS = %b\n",0,5,((0x1fU 
                                             == (IData)(vlSelf->bench__DOT__uut__DOT__counter))
                                             ? (IData)(vlSelf->bench__DOT__uut__DOT__count)
                                             : 0U));
        }
        vlSelf->bench__DOT__prev_LEDS = ((0x1fU == (IData)(vlSelf->bench__DOT__uut__DOT__counter))
                                          ? (IData)(vlSelf->bench__DOT__uut__DOT__count)
                                          : 0U);
    }
}

void Vbench___024root___eval_act(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_act\n"); );
}

void Vbench___024root___nba_sequent__TOP__0(Vbench___024root* vlSelf);

void Vbench___024root___eval_nba(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbench___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbench___024root___nba_sequent__TOP__0(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__counter = (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->bench__DOT__uut__DOT__counter)));
    vlSelf->bench__DOT__uut__DOT__count = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->bench__DOT__uut__DOT__count)));
}

void Vbench___024root___timing_resume(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vbench___024root___eval_triggers__act(Vbench___024root* vlSelf);

bool Vbench___024root___eval_phase__act(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbench___024root___timing_resume(vlSelf);
        Vbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbench___024root___eval_phase__nba(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbench___024root___dump_triggers__nba(Vbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbench___024root___dump_triggers__act(Vbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vbench___024root___eval(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbench___024root___dump_triggers__nba(vlSelf);
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
                Vbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbench___024root___eval_debug_assertions(Vbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
