// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep12__Syms.h"


void Vstep12___024root__trace_chg_0_sub_0(Vstep12___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep12___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_chg_0\n"); );
    // Init
    Vstep12___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep12___024root*>(voidSelf);
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep12___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep12___024root__trace_chg_0_sub_0(Vstep12___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_),32);
        bufp->chgIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_),32);
        bufp->chgIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_),32);
        bufp->chgIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+5,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[5]),32);
        bufp->chgIData(oldp+11,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[6]),32);
        bufp->chgIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[7]),32);
        bufp->chgIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[8]),32);
        bufp->chgIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[9]),32);
        bufp->chgIData(oldp+15,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[10]),32);
        bufp->chgIData(oldp+16,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[11]),32);
        bufp->chgIData(oldp+17,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[12]),32);
        bufp->chgIData(oldp+18,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[13]),32);
        bufp->chgIData(oldp+19,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[14]),32);
        bufp->chgIData(oldp+20,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[15]),32);
        bufp->chgIData(oldp+21,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[16]),32);
        bufp->chgIData(oldp+22,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[17]),32);
        bufp->chgIData(oldp+23,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[18]),32);
        bufp->chgIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[19]),32);
        bufp->chgIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[20]),32);
        bufp->chgIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[21]),32);
        bufp->chgIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[22]),32);
        bufp->chgIData(oldp+28,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[23]),32);
        bufp->chgIData(oldp+29,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[24]),32);
        bufp->chgIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[25]),32);
        bufp->chgIData(oldp+31,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[26]),32);
        bufp->chgIData(oldp+32,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[27]),32);
        bufp->chgIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[28]),32);
        bufp->chgIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[29]),32);
        bufp->chgIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[30]),32);
        bufp->chgIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+37,((0x1fU & vlSelf->bench__DOT__uut__DOT__x10)),5);
        bufp->chgBit(oldp+38,((0xffffU == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt))));
        bufp->chgIData(oldp+39,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC),32);
        bufp->chgIData(oldp+40,(vlSelf->bench__DOT__uut__DOT__mem_rdata),32);
        bufp->chgBit(oldp+41,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))));
        bufp->chgIData(oldp+42,(vlSelf->bench__DOT__uut__DOT__x10),32);
        bufp->chgIData(oldp+43,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr),32);
        bufp->chgBit(oldp+44,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+45,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+46,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+47,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+48,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+49,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+50,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+51,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+52,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+53,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgIData(oldp+54,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)),32);
        bufp->chgIData(oldp+55,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+56,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+57,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
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
        bufp->chgIData(oldp+58,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+60,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+61,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+62,((7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+63,((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+64,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1),32);
        bufp->chgIData(oldp+65,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2),32);
        bufp->chgIData(oldp+66,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData),32);
        bufp->chgBit(oldp+67,(((~ ((0x63U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
                               & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
        bufp->chgIData(oldp+68,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2),32);
        bufp->chgCData(oldp+69,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                           ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                           : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x14U)))),5);
        bufp->chgIData(oldp+70,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus),32);
        bufp->chgQData(oldp+71,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus),33);
        bufp->chgBit(oldp+73,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT));
        bufp->chgBit(oldp+74,((1U & (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+75,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus))));
        bufp->chgIData(oldp+76,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in),32);
        bufp->chgIData(oldp+77,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter),32);
        bufp->chgIData(oldp+78,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift),32);
        bufp->chgIData(oldp+79,(((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
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
        bufp->chgBit(oldp+80,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch));
        bufp->chgIData(oldp+81,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm),32);
        bufp->chgIData(oldp+82,(((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)),32);
        bufp->chgIData(oldp+83,(((((0x63U == (0x7fU 
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
        bufp->chgCData(oldp+84,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state),2);
        bufp->chgSData(oldp+85,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt),16);
    }
    bufp->chgBit(oldp+86,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+87,(vlSelf->bench__DOT__prev_LEDS),5);
}

void Vstep12___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root__trace_cleanup\n"); );
    // Init
    Vstep12___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep12___024root*>(voidSelf);
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
