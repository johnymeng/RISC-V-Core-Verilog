// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep16.h for the primary calling header

#include "Vstep16__pch.h"
#include "Vstep16__Syms.h"
#include "Vstep16___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep16___024root___dump_triggers__stl(Vstep16___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep16___024root___eval_triggers__stl(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstep16___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
