// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vstep4__Syms.h"


void Vstep4___024root__trace_chg_0_sub_0(Vstep4___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vstep4___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root__trace_chg_0\n"); );
    // Init
    Vstep4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep4___024root*>(voidSelf);
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vstep4___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vstep4___024root__trace_chg_0_sub_0(Vstep4___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))
                                 ? 0x1fU : ((0x10U 
                                             & (vlSelf->bench__DOT__uut__DOT__PC 
                                                << 4U)) 
                                            | (((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)) 
                                                << 3U) 
                                               | (((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->bench__DOT__uut__DOT__instr)) 
                                                   << 2U) 
                                                  | (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->bench__DOT__uut__DOT__instr)) 
                                                      << 1U) 
                                                     | (3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->bench__DOT__uut__DOT__instr)))))))),5);
        bufp->chgIData(oldp+1,(vlSelf->bench__DOT__uut__DOT__PC),32);
        bufp->chgIData(oldp+2,(vlSelf->bench__DOT__uut__DOT__instr),32);
        bufp->chgBit(oldp+3,((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+4,((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+5,((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+6,((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+7,((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+8,((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+9,((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+10,((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+11,((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgBit(oldp+12,((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))));
        bufp->chgIData(oldp+13,((0xfffff000U & vlSelf->bench__DOT__uut__DOT__instr)),32);
        bufp->chgIData(oldp+14,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | (0x7ffU 
                                              & (vlSelf->bench__DOT__uut__DOT__instr 
                                                 >> 0x14U)))),32);
        bufp->chgIData(oldp+15,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->bench__DOT__uut__DOT__instr 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+16,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
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
        bufp->chgIData(oldp+17,((((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->bench__DOT__uut__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->bench__DOT__uut__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->bench__DOT__uut__DOT__instr 
                                                        >> 0x14U)))))),32);
        bufp->chgCData(oldp+18,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+20,((0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+21,((7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+22,((vlSelf->bench__DOT__uut__DOT__instr 
                                 >> 0x19U)),7);
    }
    bufp->chgBit(oldp+23,(vlSelf->bench__DOT__CLK));
    bufp->chgCData(oldp+24,(vlSelf->bench__DOT__prev_LEDS),5);
    bufp->chgBit(oldp+25,(vlSelf->bench__DOT__uut__DOT__clk));
    bufp->chgIData(oldp+26,(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK),22);
}

void Vstep4___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root__trace_cleanup\n"); );
    // Init
    Vstep4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep4___024root*>(voidSelf);
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
