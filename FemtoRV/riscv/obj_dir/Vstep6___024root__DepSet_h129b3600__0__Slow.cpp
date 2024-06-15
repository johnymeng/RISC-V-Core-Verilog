// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep6.h for the primary calling header

#include "Vstep6__pch.h"
#include "Vstep6__Syms.h"
#include "Vstep6___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep6___024root___dump_triggers__stl(Vstep6___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep6___024root___eval_triggers__stl(Vstep6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep6___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstep6___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
