// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep3.h for the primary calling header

#include "Vstep3__pch.h"
#include "Vstep3___024root.h"

VL_ATTR_COLD void Vstep3___024root___eval_initial__TOP(Vstep3___024root* vlSelf);
VlCoroutine Vstep3___024root___eval_initial__TOP__Vtiming__0(Vstep3___024root* vlSelf);

void Vstep3___024root___eval_initial(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_initial\n"); );
    // Body
    Vstep3___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep3___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 
        = vlSelf->bench__DOT__uut__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep3___024root___eval_initial__TOP__Vtiming__0(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_initial__TOP__Vtiming__0\n"); );
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

void Vstep3___024root___eval_act(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_act\n"); );
}

void Vstep3___024root___nba_sequent__TOP__0(Vstep3___024root* vlSelf);
void Vstep3___024root___nba_sequent__TOP__1(Vstep3___024root* vlSelf);

void Vstep3___024root___eval_nba(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep3___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep3___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vstep3___024root___nba_sequent__TOP__0(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK 
        = (0x3fffffU & ((IData)(1U) + vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK));
    vlSelf->bench__DOT__uut__DOT__clk = (1U & (vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK 
                                               >> 0x15U));
}

VL_INLINE_OPT void Vstep3___024root___nba_sequent__TOP__1(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__leds = ((0x14U >= (IData)(vlSelf->bench__DOT__uut__DOT__PC))
                                           ? vlSelf->bench__DOT__uut__DOT__MEM
                                          [vlSelf->bench__DOT__uut__DOT__PC]
                                           : (IData)(vlSelf->bench__DOT__uut__DOT____Vxrand_h8df71b37__0));
    vlSelf->bench__DOT__uut__DOT__PC = ((1U & ((~ (IData)(vlSelf->bench__DOT__uut__DOT__resetn)) 
                                               | (0x14U 
                                                  == (IData)(vlSelf->bench__DOT__uut__DOT__PC))))
                                         ? 0U : (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->bench__DOT__uut__DOT__PC))));
}

void Vstep3___024root___timing_resume(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep3___024root___eval_triggers__act(Vstep3___024root* vlSelf);

bool Vstep3___024root___eval_phase__act(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep3___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep3___024root___timing_resume(vlSelf);
        Vstep3___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep3___024root___eval_phase__nba(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep3___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep3___024root___dump_triggers__nba(Vstep3___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep3___024root___dump_triggers__act(Vstep3___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep3___024root___eval(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep3___024root___dump_triggers__nba(vlSelf);
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
                Vstep3___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep3___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep3___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep3___024root___eval_debug_assertions(Vstep3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
