// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep16__Syms.h"


void Vstep16___024root__trace_chg_0_sub_0(Vstep16___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep16___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root__trace_chg_0\n"); );
    // Init
    Vstep16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep16___024root*>(voidSelf);
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep16___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep16___024root__trace_chg_0_sub_0(Vstep16___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_),32);
        bufp->chgIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_),32);
        bufp->chgIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_),32);
        bufp->chgIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_),32);
        bufp->chgIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+5,((0x1fU & vlSelf->bench__DOT__uut__DOT__x10)),5);
        bufp->chgBit(oldp+6,((0xffffU == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt))));
        bufp->chgIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__mem_addr),32);
        bufp->chgIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__mem_rdata),32);
        bufp->chgBit(oldp+9,(((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                              | (4U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
        bufp->chgIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__mem_wdata),32);
        bufp->chgCData(oldp+11,(vlSelf->bench__DOT__uut__DOT__mem_wmask),4);
        bufp->chgIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__x10),32);
        bufp->chgIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC),32);
        bufp->chgIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr),32);
        bufp->chgBit(oldp+15,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+16,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+17,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+18,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+19,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+20,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+21,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+22,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+23,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+24,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgIData(oldp+25,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)),32);
        bufp->chgIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm),32);
        bufp->chgIData(oldp+27,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+28,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                       >> 7U)))))),32);
        bufp->chgIData(oldp+29,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+30,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+31,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+33,((7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+34,((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[31]),32);
        bufp->chgIData(oldp+67,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1),32);
        bufp->chgIData(oldp+68,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2),32);
        bufp->chgIData(oldp+69,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData),32);
        bufp->chgBit(oldp+70,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn));
        bufp->chgIData(oldp+71,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2),32);
        bufp->chgCData(oldp+72,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                           ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                           : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x14U)))),5);
        bufp->chgIData(oldp+73,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus),32);
        bufp->chgQData(oldp+74,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus),33);
        bufp->chgBit(oldp+76,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT));
        bufp->chgBit(oldp+77,((1U & (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+78,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus))));
        bufp->chgIData(oldp+79,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in),32);
        bufp->chgIData(oldp+80,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter),32);
        bufp->chgIData(oldp+81,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift),32);
        bufp->chgIData(oldp+82,(((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                  ? ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                      ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                          ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)
                                          : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                             | vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2))
                                      : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                          ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter
                                          : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                             ^ vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)))
                                  : ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                      ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                          ? (1U & (IData)(
                                                          (vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                           >> 0x20U)))
                                          : (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT))
                                      : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                          ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift
                                          : ((IData)(
                                                     (0x40000020U 
                                                      == 
                                                      (0x40000020U 
                                                       & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                                              ? (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus)
                                              : vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus))))),32);
        bufp->chgBit(oldp+83,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch));
        bufp->chgIData(oldp+84,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm),32);
        bufp->chgIData(oldp+85,(((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)),32);
        bufp->chgIData(oldp+86,(((((0x63U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                   & (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                                  ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
                                  : ((0x67U == (0x7fU 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                      ? (0xfffffffeU 
                                         & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)
                                      : ((IData)(4U) 
                                         + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)))),32);
        bufp->chgIData(oldp+87,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr),32);
        bufp->chgBit(oldp+88,((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+89,((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                            >> 0xcU)))));
        bufp->chgSData(oldp+90,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword),16);
        bufp->chgCData(oldp+91,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte),8);
        bufp->chgBit(oldp+92,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign));
        bufp->chgIData(oldp+93,(((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                  ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                      << 8U) | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte))
                                  : ((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                   >> 0xcU)))
                                      ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                          << 0x10U) 
                                         | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword))
                                      : vlSelf->bench__DOT__uut__DOT__mem_rdata))),32);
        bufp->chgCData(oldp+94,(((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                  ? ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                      ? ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                          ? 8U : 4U)
                                      : ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                          ? 2U : 1U))
                                  : ((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                   >> 0xcU)))
                                      ? ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                          ? 0xcU : 3U)
                                      : 0xfU))),4);
        bufp->chgCData(oldp+95,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state),3);
        bufp->chgSData(oldp+96,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt),16);
        bufp->chgIData(oldp+97,((vlSelf->bench__DOT__uut__DOT__mem_addr 
                                 >> 2U)),30);
    }
    bufp->chgBit(oldp+98,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+99,(vlSelf->bench__DOT__prev_LEDS),5);
}

void Vstep16___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root__trace_cleanup\n"); );
    // Init
    Vstep16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep16___024root*>(voidSelf);
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
