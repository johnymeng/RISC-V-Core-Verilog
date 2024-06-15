// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep3__Syms.h"


void Vstep3___024root__trace_chg_0_sub_0(Vstep3___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep3___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_chg_0\n"); );
    // Init
    Vstep3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep3___024root*>(voidSelf);
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep3___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep3___024root__trace_chg_0_sub_0(Vstep3___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->bench__DOT__uut__DOT__MEM[0]),5);
        bufp->chgCData(oldp+1,(vlSelf->bench__DOT__uut__DOT__MEM[1]),5);
        bufp->chgCData(oldp+2,(vlSelf->bench__DOT__uut__DOT__MEM[2]),5);
        bufp->chgCData(oldp+3,(vlSelf->bench__DOT__uut__DOT__MEM[3]),5);
        bufp->chgCData(oldp+4,(vlSelf->bench__DOT__uut__DOT__MEM[4]),5);
        bufp->chgCData(oldp+5,(vlSelf->bench__DOT__uut__DOT__MEM[5]),5);
        bufp->chgCData(oldp+6,(vlSelf->bench__DOT__uut__DOT__MEM[6]),5);
        bufp->chgCData(oldp+7,(vlSelf->bench__DOT__uut__DOT__MEM[7]),5);
        bufp->chgCData(oldp+8,(vlSelf->bench__DOT__uut__DOT__MEM[8]),5);
        bufp->chgCData(oldp+9,(vlSelf->bench__DOT__uut__DOT__MEM[9]),5);
        bufp->chgCData(oldp+10,(vlSelf->bench__DOT__uut__DOT__MEM[10]),5);
        bufp->chgCData(oldp+11,(vlSelf->bench__DOT__uut__DOT__MEM[11]),5);
        bufp->chgCData(oldp+12,(vlSelf->bench__DOT__uut__DOT__MEM[12]),5);
        bufp->chgCData(oldp+13,(vlSelf->bench__DOT__uut__DOT__MEM[13]),5);
        bufp->chgCData(oldp+14,(vlSelf->bench__DOT__uut__DOT__MEM[14]),5);
        bufp->chgCData(oldp+15,(vlSelf->bench__DOT__uut__DOT__MEM[15]),5);
        bufp->chgCData(oldp+16,(vlSelf->bench__DOT__uut__DOT__MEM[16]),5);
        bufp->chgCData(oldp+17,(vlSelf->bench__DOT__uut__DOT__MEM[17]),5);
        bufp->chgCData(oldp+18,(vlSelf->bench__DOT__uut__DOT__MEM[18]),5);
        bufp->chgCData(oldp+19,(vlSelf->bench__DOT__uut__DOT__MEM[19]),5);
        bufp->chgCData(oldp+20,(vlSelf->bench__DOT__uut__DOT__MEM[20]),5);
    }
    bufp->chgBit(oldp+21,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+22,(vlSelf->bench__DOT__uut__DOT__leds),5);
    bufp->chgCData(oldp+23,(vlSelf->bench__DOT__prev_LEDS),5);
    bufp->chgBit(oldp+24,(vlSelf->bench__DOT__uut__DOT__clk));
    bufp->chgCData(oldp+25,(vlSelf->bench__DOT__uut__DOT__PC),5);
    bufp->chgIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK),22);
}

void Vstep3___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_cleanup\n"); );
    // Init
    Vstep3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep3___024root*>(voidSelf);
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
