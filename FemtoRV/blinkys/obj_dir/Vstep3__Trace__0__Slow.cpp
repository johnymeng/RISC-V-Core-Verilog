// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep3__Syms.h"


VL_ATTR_COLD void Vstep3___024root__trace_init_sub__TOP__0(Vstep3___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"prev_LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+28,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("MEM", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+23,0,"leds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("CW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"SLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"slow_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep3___024root__trace_init_top(Vstep3___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_init_top\n"); );
    // Body
    Vstep3___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstep3___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vstep3___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep3___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep3___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vstep3___024root__trace_register(Vstep3___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstep3___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstep3___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstep3___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstep3___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstep3___024root__trace_const_0_sub_0(Vstep3___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep3___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_const_0\n"); );
    // Init
    Vstep3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep3___024root*>(voidSelf);
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep3___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep3___024root__trace_const_0_sub_0(Vstep3___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+28,(0U));
    bufp->fullBit(oldp+29,(vlSelf->bench__DOT__uut__DOT__resetn));
    bufp->fullIData(oldp+30,(0x15U),32);
}

VL_ATTR_COLD void Vstep3___024root__trace_full_0_sub_0(Vstep3___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep3___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_full_0\n"); );
    // Init
    Vstep3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep3___024root*>(voidSelf);
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep3___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep3___024root__trace_full_0_sub_0(Vstep3___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep3___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->bench__DOT__uut__DOT__MEM[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->bench__DOT__uut__DOT__MEM[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->bench__DOT__uut__DOT__MEM[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->bench__DOT__uut__DOT__MEM[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->bench__DOT__uut__DOT__MEM[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->bench__DOT__uut__DOT__MEM[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->bench__DOT__uut__DOT__MEM[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->bench__DOT__uut__DOT__MEM[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->bench__DOT__uut__DOT__MEM[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->bench__DOT__uut__DOT__MEM[9]),5);
    bufp->fullCData(oldp+11,(vlSelf->bench__DOT__uut__DOT__MEM[10]),5);
    bufp->fullCData(oldp+12,(vlSelf->bench__DOT__uut__DOT__MEM[11]),5);
    bufp->fullCData(oldp+13,(vlSelf->bench__DOT__uut__DOT__MEM[12]),5);
    bufp->fullCData(oldp+14,(vlSelf->bench__DOT__uut__DOT__MEM[13]),5);
    bufp->fullCData(oldp+15,(vlSelf->bench__DOT__uut__DOT__MEM[14]),5);
    bufp->fullCData(oldp+16,(vlSelf->bench__DOT__uut__DOT__MEM[15]),5);
    bufp->fullCData(oldp+17,(vlSelf->bench__DOT__uut__DOT__MEM[16]),5);
    bufp->fullCData(oldp+18,(vlSelf->bench__DOT__uut__DOT__MEM[17]),5);
    bufp->fullCData(oldp+19,(vlSelf->bench__DOT__uut__DOT__MEM[18]),5);
    bufp->fullCData(oldp+20,(vlSelf->bench__DOT__uut__DOT__MEM[19]),5);
    bufp->fullCData(oldp+21,(vlSelf->bench__DOT__uut__DOT__MEM[20]),5);
    bufp->fullBit(oldp+22,(vlSelf->bench__DOT__CLK));
    bufp->fullCData(oldp+23,(vlSelf->bench__DOT__uut__DOT__leds),5);
    bufp->fullCData(oldp+24,(vlSelf->bench__DOT__prev_LEDS),5);
    bufp->fullBit(oldp+25,(vlSelf->bench__DOT__uut__DOT__clk));
    bufp->fullCData(oldp+26,(vlSelf->bench__DOT__uut__DOT__PC),5);
    bufp->fullIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__CW__DOT__slow_CLK),22);
}
