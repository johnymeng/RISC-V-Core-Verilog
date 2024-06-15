// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep4.h for the primary calling header

#include "Vstep4__pch.h"
#include "Vstep4___024root.h"

VL_ATTR_COLD void Vstep4___024root___eval_initial__TOP(Vstep4___024root* vlSelf);
VlCoroutine Vstep4___024root___eval_initial__TOP__Vtiming__0(Vstep4___024root* vlSelf);

void Vstep4___024root___eval_initial(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_initial\n"); );
    // Body
    Vstep4___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep4___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 
        = vlSelf->bench__DOT__uut__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep4___024root___eval_initial__TOP__Vtiming__0(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->bench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "bench_iverilog.v", 
                                           20);
        vlSelf->bench__DOT__CLK = (1U & (~ (IData)(vlSelf->bench__DOT__CLK)));
        if (VL_UNLIKELY((((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))
                           ? 0x1fU : ((0x10U & (vlSelf->bench__DOT__uut__DOT__PC 
                                                << 4U)) 
                                      | (((0x33U == 
                                           (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)) 
                                          << 3U) | 
                                         (((0x13U == 
                                            (0x7fU 
                                             & vlSelf->bench__DOT__uut__DOT__instr)) 
                                           << 2U) | 
                                          (((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->bench__DOT__uut__DOT__instr)) 
                                            << 1U) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelf->bench__DOT__uut__DOT__instr))))))) 
                         != (IData)(vlSelf->bench__DOT__prev_LEDS)))) {
            VL_WRITEF_NX("LEDS = %b\n",0,5,((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->bench__DOT__uut__DOT__instr))
                                             ? 0x1fU
                                             : ((0x10U 
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
                                                             & vlSelf->bench__DOT__uut__DOT__instr))))))));
        }
        vlSelf->bench__DOT__prev_LEDS = ((0x73U == 
                                          (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))
                                          ? 0x1fU : 
                                         ((0x10U & 
                                           (vlSelf->bench__DOT__uut__DOT__PC 
                                            << 4U)) 
                                          | (((0x33U 
                                               == (0x7fU 
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
                                                       & vlSelf->bench__DOT__uut__DOT__instr)))))));
    }
}

void Vstep4___024root___eval_act(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_act\n"); );
}

void Vstep4___024root___nba_sequent__TOP__0(Vstep4___024root* vlSelf);
void Vstep4___024root___nba_sequent__TOP__1(Vstep4___024root* vlSelf);

void Vstep4___024root___eval_nba(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep4___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep4___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vstep4___024root___nba_sequent__TOP__0(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
        = (0x3fffffU & ((IData)(1U) + vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK));
    vlSelf->bench__DOT__uut__DOT__clk = (1U & (vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
                                               >> 0x15U));
}

VL_INLINE_OPT void Vstep4___024root___nba_sequent__TOP__1(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
        VL_FINISH_MT("step4.v", 99, "");
    }
    VL_WRITEF_NX("PC=%0#\n",0,32,vlSelf->bench__DOT__uut__DOT__PC);
    if (((((((((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)) 
               | (0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
              | (0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
             | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
            | (0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
           | (0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
          | (0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) 
         | (3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
        if (VL_UNLIKELY((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("ALUreg rd=%2# rs1=%2# rs2=%2# funct3=%b\n",0,
                         5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                     >> 7U)),5,(0x1fU 
                                                & (vlSelf->bench__DOT__uut__DOT__instr 
                                                   >> 0xfU)),
                         5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                     >> 0x14U)),3,(7U 
                                                   & (vlSelf->bench__DOT__uut__DOT__instr 
                                                      >> 0xcU)));
        } else if (VL_UNLIKELY((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("ALUimm rd=%2# rs1=%2# imm=%0# funct3=%b\n",0,
                         5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                     >> 7U)),5,(0x1fU 
                                                & (vlSelf->bench__DOT__uut__DOT__instr 
                                                   >> 0xfU)),
                         32,(((- (IData)((vlSelf->bench__DOT__uut__DOT__instr 
                                          >> 0x1fU))) 
                              << 0xbU) | (0x7ffU & 
                                          (vlSelf->bench__DOT__uut__DOT__instr 
                                           >> 0x14U))),
                         3,(7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                  >> 0xcU)));
        } else if (VL_UNLIKELY((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("BRANCH\n",0);
        } else if (VL_UNLIKELY((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("JAL\n",0);
        } else if (VL_UNLIKELY((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("JALR\n",0);
        } else if (VL_UNLIKELY((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_WRITEF_NX("AUIPC\n",0);
        } else if ((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) {
            VL_WRITEF_NX("LUI\n",0);
        } else {
            VL_WRITEF_NX("LOAD\n",0);
        }
    } else if (VL_UNLIKELY((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
        VL_WRITEF_NX("STORE\n",0);
    } else if (VL_UNLIKELY((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
        VL_WRITEF_NX("SYSTEM\n",0);
    }
    if ((0x73U != (IData)(vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_0))) {
        vlSelf->bench__DOT__uut__DOT__instr = vlSelf->bench__DOT__uut__DOT__MEM
            [(0xffU & vlSelf->bench__DOT__uut__DOT__PC)];
        vlSelf->bench__DOT__uut__DOT__PC = ((IData)(1U) 
                                            + vlSelf->bench__DOT__uut__DOT__PC);
    }
    vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_0 
        = (0x7fU & vlSelf->bench__DOT__uut__DOT__instr);
}

void Vstep4___024root___timing_resume(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep4___024root___eval_triggers__act(Vstep4___024root* vlSelf);

bool Vstep4___024root___eval_phase__act(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep4___024root___timing_resume(vlSelf);
        Vstep4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep4___024root___eval_phase__nba(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep4___024root___dump_triggers__nba(Vstep4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep4___024root___dump_triggers__act(Vstep4___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep4___024root___eval(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstep4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep4___024root___eval_debug_assertions(Vstep4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep4___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
