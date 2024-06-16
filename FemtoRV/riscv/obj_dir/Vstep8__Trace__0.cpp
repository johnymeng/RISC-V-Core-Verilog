// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep8__Syms.h"


void Vstep8___024root__trace_chg_0_sub_0(Vstep8___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep8___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_chg_0\n"); );
    // Init
    Vstep8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep8___024root*>(voidSelf);
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep8___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep8___024root__trace_chg_0_sub_0(Vstep8___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->bench__DOT__uut__DOT__L0_),32);
        bufp->chgIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__memPC),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__RegisterBank[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RegisterBank[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->bench__DOT__uut__DOT__RegisterBank[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->bench__DOT__uut__DOT__RegisterBank[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__RegisterBank[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__RegisterBank[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->bench__DOT__uut__DOT__RegisterBank[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__RegisterBank[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->bench__DOT__uut__DOT__RegisterBank[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__RegisterBank[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__RegisterBank[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__RegisterBank[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->bench__DOT__uut__DOT__RegisterBank[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->bench__DOT__uut__DOT__RegisterBank[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->bench__DOT__uut__DOT__RegisterBank[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->bench__DOT__uut__DOT__RegisterBank[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->bench__DOT__uut__DOT__RegisterBank[16]),32);
        bufp->chgIData(oldp+20,(vlSelf->bench__DOT__uut__DOT__RegisterBank[17]),32);
        bufp->chgIData(oldp+21,(vlSelf->bench__DOT__uut__DOT__RegisterBank[18]),32);
        bufp->chgIData(oldp+22,(vlSelf->bench__DOT__uut__DOT__RegisterBank[19]),32);
        bufp->chgIData(oldp+23,(vlSelf->bench__DOT__uut__DOT__RegisterBank[20]),32);
        bufp->chgIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__RegisterBank[21]),32);
        bufp->chgIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__RegisterBank[22]),32);
        bufp->chgIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__RegisterBank[23]),32);
        bufp->chgIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__RegisterBank[24]),32);
        bufp->chgIData(oldp+28,(vlSelf->bench__DOT__uut__DOT__RegisterBank[25]),32);
        bufp->chgIData(oldp+29,(vlSelf->bench__DOT__uut__DOT__RegisterBank[26]),32);
        bufp->chgIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__RegisterBank[27]),32);
        bufp->chgIData(oldp+31,(vlSelf->bench__DOT__uut__DOT__RegisterBank[28]),32);
        bufp->chgIData(oldp+32,(vlSelf->bench__DOT__uut__DOT__RegisterBank[29]),32);
        bufp->chgIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__RegisterBank[30]),32);
        bufp->chgIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__RegisterBank[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+35,(vlSelf->bench__DOT__uut__DOT__leds),5);
        bufp->chgIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__PC),32);
        bufp->chgIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__instr),32);
        bufp->chgBit(oldp+38,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+39,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+40,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+41,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+42,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+43,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+44,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+45,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+46,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+47,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgIData(oldp+48,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__instr)),32);
        bufp->chgIData(oldp+49,(vlSelf->bench__DOT__uut__DOT__Iimm),32);
        bufp->chgIData(oldp+50,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->bench__DOT__uut__DOT__instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+51,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
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
        bufp->chgIData(oldp+52,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->bench__DOT__uut__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->bench__DOT__uut__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->bench__DOT__uut__DOT__instr 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+56,((7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+57,((vlSelf->bench__DOT__uut__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+58,(vlSelf->bench__DOT__uut__DOT__rs1),32);
        bufp->chgIData(oldp+59,(vlSelf->bench__DOT__uut__DOT__rs2),32);
        bufp->chgIData(oldp+60,(vlSelf->bench__DOT__uut__DOT__writeBackData),32);
        bufp->chgBit(oldp+61,(((2U == (IData)(vlSelf->bench__DOT__uut__DOT__state)) 
                               & ((0x33U == (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__instr)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->bench__DOT__uut__DOT__instr)) 
                                     | (IData)(vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_4))))));
        bufp->chgIData(oldp+62,(vlSelf->bench__DOT__uut__DOT__aluIn2),32);
        bufp->chgIData(oldp+63,(((0x4000U & vlSelf->bench__DOT__uut__DOT__instr)
                                  ? ((0x2000U & vlSelf->bench__DOT__uut__DOT__instr)
                                      ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                          ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                             & vlSelf->bench__DOT__uut__DOT__aluIn2)
                                          : (vlSelf->bench__DOT__uut__DOT__rs1 
                                             | vlSelf->bench__DOT__uut__DOT__aluIn2))
                                      : ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                          ? ((0x40000000U 
                                              & vlSelf->bench__DOT__uut__DOT__instr)
                                              ? VL_SHIFTRS_III(32,32,5, vlSelf->bench__DOT__uut__DOT__rs1, (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                              : (vlSelf->bench__DOT__uut__DOT__rs1 
                                                 >> (IData)(vlSelf->bench__DOT__uut__DOT__shamt)))
                                          : (vlSelf->bench__DOT__uut__DOT__rs1 
                                             ^ vlSelf->bench__DOT__uut__DOT__aluIn2)))
                                  : ((0x2000U & vlSelf->bench__DOT__uut__DOT__instr)
                                      ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                          ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                             < vlSelf->bench__DOT__uut__DOT__aluIn2)
                                          : VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__rs1, vlSelf->bench__DOT__uut__DOT__aluIn2))
                                      : ((0x1000U & vlSelf->bench__DOT__uut__DOT__instr)
                                          ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                             << (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                          : ((IData)(
                                                     (0x40000020U 
                                                      == 
                                                      (0x40000020U 
                                                       & vlSelf->bench__DOT__uut__DOT__instr)))
                                              ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                                 - vlSelf->bench__DOT__uut__DOT__aluIn2)
                                              : (vlSelf->bench__DOT__uut__DOT__rs1 
                                                 + vlSelf->bench__DOT__uut__DOT__aluIn2)))))),32);
        bufp->chgCData(oldp+64,(vlSelf->bench__DOT__uut__DOT__shamt),5);
        bufp->chgCData(oldp+65,(vlSelf->bench__DOT__uut__DOT__state),2);
        bufp->chgIData(oldp+66,(((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))
                                  ? (vlSelf->bench__DOT__uut__DOT__PC 
                                     + (((- (IData)(
                                                    (vlSelf->bench__DOT__uut__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | ((0xff000U 
                                            & vlSelf->bench__DOT__uut__DOT__instr) 
                                           | ((0x800U 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->bench__DOT__uut__DOT__instr 
                                                    >> 0x14U))))))
                                  : ((0x67U == (0x7fU 
                                                & vlSelf->bench__DOT__uut__DOT__instr))
                                      ? (vlSelf->bench__DOT__uut__DOT__rs1 
                                         + vlSelf->bench__DOT__uut__DOT__Iimm)
                                      : ((IData)(4U) 
                                         + vlSelf->bench__DOT__uut__DOT__PC)))),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+68,(vlSelf->bench__DOT__prev_LEDS),5);
    bufp->chgBit(oldp+69,(vlSelf->bench__DOT__uut__DOT__clk));
    bufp->chgIData(oldp+70,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK),20);
}

void Vstep8___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep8___024root__trace_cleanup\n"); );
    // Init
    Vstep8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep8___024root*>(voidSelf);
    Vstep8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
