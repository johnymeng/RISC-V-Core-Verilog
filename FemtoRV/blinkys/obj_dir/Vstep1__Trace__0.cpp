// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep1__Syms.h"


void Vstep1___024root__trace_chg_0_sub_0(Vstep1___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep1___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root__trace_chg_0\n"); );
    // Init
    Vstep1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep1___024root*>(voidSelf);
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep1___024root__trace_chg_0_sub_0(Vstep1___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(((0x1fU == (IData)(vlSelf->bench__DOT__uut__DOT__counter))
                                 ? (IData)(vlSelf->bench__DOT__uut__DOT__count)
                                 : 0U)),5);
        bufp->chgCData(oldp+1,(vlSelf->bench__DOT__uut__DOT__count),5);
        bufp->chgCData(oldp+2,(vlSelf->bench__DOT__uut__DOT__counter),5);
        bufp->chgBit(oldp+3,((0x1fU == (IData)(vlSelf->bench__DOT__uut__DOT__counter))));
    }
    bufp->chgBit(oldp+4,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+5,(vlSelf->bench__DOT__prev_LEDS),5);
}

void Vstep1___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep1___024root__trace_cleanup\n"); );
    // Init
    Vstep1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep1___024root*>(voidSelf);
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
