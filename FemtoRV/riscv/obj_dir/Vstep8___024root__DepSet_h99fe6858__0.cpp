// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep8.h for the primary calling header

#include "Vstep8__pch.h"
#include "Vstep8__Syms.h"
#include "Vstep8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep8___024root___dump_triggers__act(Vstep8___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep8___024root___eval_triggers__act(Vstep8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->bench__DOT__uut__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->bench__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 
        = vlSelf->bench__DOT__uut__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstep8___024root___dump_triggers__act(vlSelf);
    }
#endif
}
