// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep5__Syms.h"


VL_ATTR_COLD void Vstep5___024root__trace_init_sub__TOP__0(Vstep5___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("bench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+31,0,"RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"prev_LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"LEDS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+31,0,"RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"resetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"isALUreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"isALUimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"isBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"isJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"isJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"isAUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"isLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"isLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"isStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"isSYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"Uimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"Iimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"Simm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"Bimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"Jimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rs1Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"rs2Id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"rdId",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("RegisterBank", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+24,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"writeBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"writeBackEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"FETCH_INSTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"FETCH_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"EXECUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("CW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"RESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"resetn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"SLOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"slow_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"slow_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep5___024root__trace_init_top(Vstep5___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_init_top\n"); );
    // Body
    Vstep5___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vstep5___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vstep5___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep5___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vstep5___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vstep5___024root__trace_register(Vstep5___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vstep5___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vstep5___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vstep5___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vstep5___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vstep5___024root__trace_const_0_sub_0(Vstep5___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep5___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_const_0\n"); );
    // Init
    Vstep5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep5___024root*>(voidSelf);
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep5___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep5___024root__trace_const_0_sub_0(Vstep5___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+31,(0U));
    bufp->fullBit(oldp+32,(1U));
    bufp->fullIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__RegisterBank[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__RegisterBank[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__RegisterBank[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__RegisterBank[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__RegisterBank[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->bench__DOT__uut__DOT__RegisterBank[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->bench__DOT__uut__DOT__RegisterBank[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->bench__DOT__uut__DOT__RegisterBank[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->bench__DOT__uut__DOT__RegisterBank[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->bench__DOT__uut__DOT__RegisterBank[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->bench__DOT__uut__DOT__RegisterBank[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->bench__DOT__uut__DOT__RegisterBank[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->bench__DOT__uut__DOT__RegisterBank[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->bench__DOT__uut__DOT__RegisterBank[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->bench__DOT__uut__DOT__RegisterBank[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->bench__DOT__uut__DOT__RegisterBank[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->bench__DOT__uut__DOT__RegisterBank[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->bench__DOT__uut__DOT__RegisterBank[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->bench__DOT__uut__DOT__RegisterBank[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->bench__DOT__uut__DOT__RegisterBank[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->bench__DOT__uut__DOT__RegisterBank[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->bench__DOT__uut__DOT__RegisterBank[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->bench__DOT__uut__DOT__RegisterBank[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->bench__DOT__uut__DOT__RegisterBank[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->bench__DOT__uut__DOT__RegisterBank[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->bench__DOT__uut__DOT__RegisterBank[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->bench__DOT__uut__DOT__RegisterBank[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->bench__DOT__uut__DOT__RegisterBank[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->bench__DOT__uut__DOT__RegisterBank[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->bench__DOT__uut__DOT__RegisterBank[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->bench__DOT__uut__DOT__RegisterBank[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->bench__DOT__uut__DOT__RegisterBank[31]),32);
    bufp->fullIData(oldp+65,(0U),32);
    bufp->fullIData(oldp+66,(1U),32);
    bufp->fullIData(oldp+67,(2U),32);
    bufp->fullIData(oldp+68,(0x15U),32);
}

VL_ATTR_COLD void Vstep5___024root__trace_full_0_sub_0(Vstep5___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vstep5___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_full_0\n"); );
    // Init
    Vstep5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep5___024root*>(voidSelf);
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vstep5___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vstep5___024root__trace_full_0_sub_0(Vstep5___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep5___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))
                              ? 0x1fU : (0x1fU & ((IData)(1U) 
                                                  << (IData)(vlSelf->bench__DOT__uut__DOT__state))))),5);
    bufp->fullIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__PC),32);
    bufp->fullIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__instr),32);
    bufp->fullBit(oldp+4,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+5,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+6,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+7,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+8,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+9,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+10,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+11,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+12,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullBit(oldp+13,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
    bufp->fullIData(oldp+14,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__instr)),32);
    bufp->fullIData(oldp+15,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | (0x7ffU & 
                                           (vlSelf->bench__DOT__uut__DOT__instr 
                                            >> 0x14U)))),32);
    bufp->fullIData(oldp+16,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xbU) | ((0x7e0U 
                                            & (vlSelf->bench__DOT__uut__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->bench__DOT__uut__DOT__instr 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+17,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->bench__DOT__uut__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->bench__DOT__uut__DOT__instr 
                                                    >> 7U)))))),32);
    bufp->fullIData(oldp+18,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->bench__DOT__uut__DOT__instr) 
                                            | ((0x800U 
                                                & (vlSelf->bench__DOT__uut__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->bench__DOT__uut__DOT__instr 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+22,((7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+23,((vlSelf->bench__DOT__uut__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__rs1),32);
    bufp->fullIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__rs2),32);
    bufp->fullCData(oldp+26,(vlSelf->bench__DOT__uut__DOT__state),2);
    bufp->fullBit(oldp+27,(vlSelf->bench__DOT__CLK));
    bufp->fullCData(oldp+28,(vlSelf->bench__DOT__prev_LEDS),5);
    bufp->fullBit(oldp+29,(vlSelf->bench__DOT__uut__DOT__clk));
    bufp->fullIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK),22);
}
