// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep17__Syms.h"


void Vstep17___024root__trace_chg_0_sub_0(Vstep17___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep17___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_chg_0\n"); );
    // Init
    Vstep17___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep17___024root*>(voidSelf);
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep17___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep17___024root__trace_chg_0_sub_0(Vstep17___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_),32);
        bufp->chgIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_),32);
        bufp->chgIData(oldp+3,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_),32);
        bufp->chgIData(oldp+4,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_),32);
        bufp->chgIData(oldp+5,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_),32);
        bufp->chgIData(oldp+6,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_),32);
        bufp->chgIData(oldp+7,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_),32);
        bufp->chgIData(oldp+8,(vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+9,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0]),32);
        bufp->chgIData(oldp+10,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[1]),32);
        bufp->chgIData(oldp+11,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[2]),32);
        bufp->chgIData(oldp+12,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[3]),32);
        bufp->chgIData(oldp+13,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[4]),32);
        bufp->chgIData(oldp+14,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[5]),32);
        bufp->chgIData(oldp+15,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[6]),32);
        bufp->chgIData(oldp+16,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[7]),32);
        bufp->chgIData(oldp+17,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[8]),32);
        bufp->chgIData(oldp+18,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[9]),32);
        bufp->chgIData(oldp+19,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[10]),32);
        bufp->chgIData(oldp+20,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[11]),32);
        bufp->chgIData(oldp+21,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[12]),32);
        bufp->chgIData(oldp+22,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[13]),32);
        bufp->chgIData(oldp+23,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[14]),32);
        bufp->chgIData(oldp+24,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[15]),32);
        bufp->chgIData(oldp+25,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[16]),32);
        bufp->chgIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[17]),32);
        bufp->chgIData(oldp+27,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[18]),32);
        bufp->chgIData(oldp+28,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[19]),32);
        bufp->chgIData(oldp+29,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[20]),32);
        bufp->chgIData(oldp+30,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[21]),32);
        bufp->chgIData(oldp+31,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[22]),32);
        bufp->chgIData(oldp+32,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[23]),32);
        bufp->chgIData(oldp+33,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[24]),32);
        bufp->chgIData(oldp+34,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[25]),32);
        bufp->chgIData(oldp+35,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[26]),32);
        bufp->chgIData(oldp+36,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[27]),32);
        bufp->chgIData(oldp+37,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[28]),32);
        bufp->chgIData(oldp+38,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[29]),32);
        bufp->chgIData(oldp+39,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[30]),32);
        bufp->chgIData(oldp+40,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+41,(vlSelf->bench__DOT__LEDS),5);
        bufp->chgBit(oldp+42,((1U & ((~ (IData)((0U 
                                                 != (IData)(vlSelf->bench__DOT__uut__DOT__UART__DOT__data)))) 
                                     | (IData)(vlSelf->bench__DOT__uut__DOT__UART__DOT__data)))));
        bufp->chgBit(oldp+43,((0xffffU == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt))));
        bufp->chgIData(oldp+44,(vlSelf->bench__DOT__uut__DOT__mem_addr),32);
        bufp->chgIData(oldp+45,(vlSelf->bench__DOT__uut__DOT__mem_rdata),32);
        bufp->chgBit(oldp+46,(((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                               | (4U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
        bufp->chgIData(oldp+47,(vlSelf->bench__DOT__uut__DOT__mem_wdata),32);
        bufp->chgCData(oldp+48,(vlSelf->bench__DOT__uut__DOT__mem_wmask),4);
        bufp->chgIData(oldp+49,(vlSelf->bench__DOT__uut__DOT__RAM_rdata),32);
        bufp->chgIData(oldp+50,((vlSelf->bench__DOT__uut__DOT__mem_addr 
                                 >> 2U)),30);
        bufp->chgBit(oldp+51,((1U & (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                     >> 0x16U))));
        bufp->chgBit(oldp+52,((1U & (~ (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+53,((0U != (IData)(vlSelf->bench__DOT__uut__DOT__mem_wmask))));
        bufp->chgBit(oldp+54,(vlSelf->bench__DOT__uut__DOT__uart_valid));
        bufp->chgBit(oldp+55,(vlSelf->bench__DOT__uut__DOT__uart_ready));
        bufp->chgIData(oldp+56,(((0x10U & vlSelf->bench__DOT__uut__DOT__mem_addr)
                                  ? (0x200U & ((~ (IData)(vlSelf->bench__DOT__uut__DOT__uart_ready)) 
                                               << 9U))
                                  : 0U)),32);
        bufp->chgIData(oldp+57,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC),32);
        bufp->chgIData(oldp+58,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr),32);
        bufp->chgBit(oldp+59,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+60,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+61,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+62,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+63,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+64,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+65,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+66,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+67,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgBit(oldp+68,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))));
        bufp->chgIData(oldp+69,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)),32);
        bufp->chgIData(oldp+70,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm),32);
        bufp->chgIData(oldp+71,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+72,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
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
        bufp->chgIData(oldp+73,((((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+74,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+77,((7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+78,((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+79,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1),32);
        bufp->chgIData(oldp+80,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2),32);
        bufp->chgIData(oldp+81,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData),32);
        bufp->chgBit(oldp+82,((((~ ((0x63U == (0x7fU 
                                               & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
                                & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) 
                               | (5U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))));
        bufp->chgIData(oldp+83,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2),32);
        bufp->chgCData(oldp+84,((0x1fU & ((0x33U == 
                                           (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                                           ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                           : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                              >> 0x14U)))),5);
        bufp->chgIData(oldp+85,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus),32);
        bufp->chgQData(oldp+86,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus),33);
        bufp->chgBit(oldp+88,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+90,((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus))));
        bufp->chgIData(oldp+91,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in),32);
        bufp->chgIData(oldp+92,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter),32);
        bufp->chgIData(oldp+93,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift),32);
        bufp->chgIData(oldp+94,(((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
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
        bufp->chgBit(oldp+95,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch));
        bufp->chgIData(oldp+96,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm),32);
        bufp->chgIData(oldp+97,(((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)),32);
        bufp->chgIData(oldp+98,(((((0x63U == (0x7fU 
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
        bufp->chgIData(oldp+99,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr),32);
        bufp->chgBit(oldp+100,((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+101,((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                             >> 0xcU)))));
        bufp->chgSData(oldp+102,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword),16);
        bufp->chgCData(oldp+103,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte),8);
        bufp->chgBit(oldp+104,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign));
        bufp->chgIData(oldp+105,(((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                >> 0xcU)))
                                   ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                       << 8U) | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte))
                                   : ((1U == (3U & 
                                              (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                           << 0x10U) 
                                          | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword))
                                       : vlSelf->bench__DOT__uut__DOT__mem_rdata))),32);
        bufp->chgCData(oldp+106,(((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                >> 0xcU)))
                                   ? ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                       ? ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                           ? 8U : 4U)
                                       : ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                           ? 2U : 1U))
                                   : ((1U == (3U & 
                                              (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                           ? 0xcU : 3U)
                                       : 0xfU))),4);
        bufp->chgCData(oldp+107,(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state),3);
        bufp->chgSData(oldp+108,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt),16);
        bufp->chgBit(oldp+109,(((~ (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                    >> 0x16U)) & ((0U 
                                                   == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                                                  | (4U 
                                                     == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))))));
        bufp->chgCData(oldp+110,(vlSelf->bench__DOT__uut__DOT____Vcellinp__RAM__mem_wmask),4);
        bufp->chgBit(oldp+111,((1U & (~ (IData)((0xffffU 
                                                 == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt)))))));
        bufp->chgCData(oldp+112,((0xffU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)),8);
        bufp->chgSData(oldp+113,(vlSelf->bench__DOT__uut__DOT__UART__DOT__cnt),12);
        bufp->chgSData(oldp+114,(vlSelf->bench__DOT__uut__DOT__UART__DOT__data),10);
    }
    bufp->chgBit(oldp+115,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+116,(vlSelf->bench__DOT__prev_LEDS),5);
}

void Vstep17___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root__trace_cleanup\n"); );
    // Init
    Vstep17___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep17___024root*>(voidSelf);
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
