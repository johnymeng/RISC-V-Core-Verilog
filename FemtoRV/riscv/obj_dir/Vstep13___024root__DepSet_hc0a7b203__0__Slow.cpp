// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep13.h for the primary calling header

#include "Vstep13__pch.h"
#include "Vstep13__Syms.h"
#include "Vstep13___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep13___024root___dump_triggers__stl(Vstep13___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep13___024root___eval_triggers__stl(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstep13___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
