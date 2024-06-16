// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep9.h for the primary calling header

#include "Vstep9__pch.h"
#include "Vstep9___024root.h"

VL_ATTR_COLD void Vstep9___024root___eval_initial__TOP(Vstep9___024root* vlSelf);
VlCoroutine Vstep9___024root___eval_initial__TOP__Vtiming__0(Vstep9___024root* vlSelf);

void Vstep9___024root___eval_initial(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_initial\n"); );
    // Body
    Vstep9___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep9___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0 
        = vlSelf->bench__DOT__uut__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep9___024root___eval_initial__TOP__Vtiming__0(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->bench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "bench_iverilog.v", 
                                           20);
        vlSelf->bench__DOT__CLK = (1U & (~ (IData)(vlSelf->bench__DOT__CLK)));
        vlSelf->bench__DOT__prev_LEDS = vlSelf->bench__DOT__uut__DOT__leds;
    }
}

void Vstep9___024root___eval_act(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_act\n"); );
}

void Vstep9___024root___nba_sequent__TOP__0(Vstep9___024root* vlSelf);
void Vstep9___024root___nba_sequent__TOP__1(Vstep9___024root* vlSelf);

void Vstep9___024root___eval_nba(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep9___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep9___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vstep9___024root___nba_sequent__TOP__0(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
        = (0xfffffU & ((IData)(1U) + vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK));
    vlSelf->bench__DOT__uut__DOT__clk = (1U & (vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK 
                                               >> 0x13U));
}

VL_INLINE_OPT void Vstep9___024root___nba_sequent__TOP__1(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0;
    __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0 = 0;
    CData/*4:0*/ __VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0;
    __VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0 = 0;
    CData/*1:0*/ __Vdly__bench__DOT__uut__DOT__state;
    __Vdly__bench__DOT__uut__DOT__state = 0;
    CData/*0:0*/ __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0;
    __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0 = 0;
    // Body
    __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0 = 0U;
    __Vdly__bench__DOT__uut__DOT__state = vlSelf->bench__DOT__uut__DOT__state;
    if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
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
                                         >> 7U)),5,
                             (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xfU)),5,
                             (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0x14U)),3,
                             (7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                    >> 0xcU)));
            } else if (VL_UNLIKELY((0x13U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("ALUimm rd=%2# rs1=%2# imm=%0# funct3=%b\n",0,
                             5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                         >> 7U)),5,
                             (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                       >> 0xfU)),32,
                             vlSelf->bench__DOT__uut__DOT__Iimm,
                             3,(7U & (vlSelf->bench__DOT__uut__DOT__instr 
                                      >> 0xcU)));
            } else if (VL_UNLIKELY((0x63U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("BRANCH rs1=%0# rs2=%0# | PC: %0#\n",0,
                             5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                         >> 0xfU)),
                             5,(0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                         >> 0x14U)),
                             32,vlSelf->bench__DOT__uut__DOT__PC);
            } else if (VL_UNLIKELY((0x6fU == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("JAL\n",0);
            } else if (VL_UNLIKELY((0x67U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
                VL_WRITEF_NX("JALR\n",0);
            } else if (VL_UNLIKELY((0x17U == (0x7fU 
                                              & vlSelf->bench__DOT__uut__DOT__instr)))) {
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
        if (VL_UNLIKELY((0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)))) {
            VL_FINISH_MT("step9.v", 214, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->bench__DOT__uut__DOT__writeBackEn) 
                     & (0U != (IData)(vlSelf->bench__DOT__uut__DOT__rdId))))) {
        VL_WRITEF_NX("x%0# <= %b\n",0,5,vlSelf->bench__DOT__uut__DOT__rdId,
                     32,vlSelf->bench__DOT__uut__DOT__writeBackData);
        __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0 
            = vlSelf->bench__DOT__uut__DOT__writeBackData;
        __VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0 
            = vlSelf->bench__DOT__uut__DOT__rdId;
        __VdlySet__bench__DOT__uut__DOT__RegisterBank__v0 = 1U;
        if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__rdId))) {
            vlSelf->bench__DOT__uut__DOT__leds = (0x1fU 
                                                  & vlSelf->bench__DOT__uut__DOT__writeBackData);
        }
    }
    if ((0U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
        vlSelf->bench__DOT__uut__DOT__instr = vlSelf->bench__DOT__uut__DOT__MEM
            [(0xffU & (vlSelf->bench__DOT__uut__DOT__PC 
                       >> 2U))];
        __Vdly__bench__DOT__uut__DOT__state = 1U;
    } else if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
        vlSelf->bench__DOT__uut__DOT__rs1 = vlSelf->bench__DOT__uut__DOT__RegisterBank
            [vlSelf->bench__DOT__uut__DOT__rs1Id];
        __Vdly__bench__DOT__uut__DOT__state = 2U;
        vlSelf->bench__DOT__uut__DOT__rs2 = vlSelf->bench__DOT__uut__DOT__RegisterBank
            [vlSelf->bench__DOT__uut__DOT__rs2Id];
    } else if ((2U == (IData)(vlSelf->bench__DOT__uut__DOT__state))) {
        if (VL_UNLIKELY(vlSelf->bench__DOT__uut__DOT__isSYSTEM)) {
            VL_FINISH_MT("step9.v", 185, "");
        }
        if ((1U & (~ (IData)(vlSelf->bench__DOT__uut__DOT__isSYSTEM)))) {
            vlSelf->bench__DOT__uut__DOT__PC = vlSelf->bench__DOT__uut__DOT__nextPC;
        }
        __Vdly__bench__DOT__uut__DOT__state = 0U;
    }
    if (__VdlySet__bench__DOT__uut__DOT__RegisterBank__v0) {
        vlSelf->bench__DOT__uut__DOT__RegisterBank[__VdlyDim0__bench__DOT__uut__DOT__RegisterBank__v0] 
            = __VdlyVal__bench__DOT__uut__DOT__RegisterBank__v0;
    }
    vlSelf->bench__DOT__uut__DOT__state = __Vdly__bench__DOT__uut__DOT__state;
    vlSelf->bench__DOT__uut__DOT__rdId = (0x1fU & (vlSelf->bench__DOT__uut__DOT__instr 
                                                   >> 7U));
    vlSelf->bench__DOT__uut__DOT__rs1Id = (0x1fU & 
                                           (vlSelf->bench__DOT__uut__DOT__instr 
                                            >> 0xfU));
    vlSelf->bench__DOT__uut__DOT__rs2Id = (0x1fU & 
                                           (vlSelf->bench__DOT__uut__DOT__instr 
                                            >> 0x14U));
    vlSelf->bench__DOT__uut__DOT__isSYSTEM = (0x73U 
                                              == (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__instr));
    vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_4 
        = ((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)) 
           | (0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr)));
    vlSelf->bench__DOT__uut__DOT__Iimm = (((- (IData)(
                                                      (vlSelf->bench__DOT__uut__DOT__instr 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | (0x7ffU 
                                             & (vlSelf->bench__DOT__uut__DOT__instr 
                                                >> 0x14U)));
    if ((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__instr))) {
        vlSelf->bench__DOT__uut__DOT__shamt = (0x1fU 
                                               & vlSelf->bench__DOT__uut__DOT__rs2);
        vlSelf->bench__DOT__uut__DOT__aluIn2 = vlSelf->bench__DOT__uut__DOT__rs2;
    } else {
        vlSelf->bench__DOT__uut__DOT__shamt = (0x1fU 
                                               & (vlSelf->bench__DOT__uut__DOT__instr 
                                                  >> 0x14U));
        vlSelf->bench__DOT__uut__DOT__aluIn2 = vlSelf->bench__DOT__uut__DOT__Iimm;
    }
    vlSelf->bench__DOT__uut__DOT__writeBackEn = ((2U 
                                                  == (IData)(vlSelf->bench__DOT__uut__DOT__state)) 
                                                 & ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->bench__DOT__uut__DOT__instr)) 
                                                    | ((0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->bench__DOT__uut__DOT__instr)) 
                                                       | (IData)(vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_4))));
    vlSelf->bench__DOT__uut__DOT__nextPC = (((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)) 
                                             & ((0x4000U 
                                                 & vlSelf->bench__DOT__uut__DOT__instr)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->bench__DOT__uut__DOT__instr)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->bench__DOT__uut__DOT__instr)
                                                   ? 
                                                  (vlSelf->bench__DOT__uut__DOT__rs1 
                                                   >= vlSelf->bench__DOT__uut__DOT__rs2)
                                                   : 
                                                  (vlSelf->bench__DOT__uut__DOT__rs1 
                                                   < vlSelf->bench__DOT__uut__DOT__rs2))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->bench__DOT__uut__DOT__instr)
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->bench__DOT__uut__DOT__rs1, vlSelf->bench__DOT__uut__DOT__rs2)
                                                   : 
                                                  VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__rs1, vlSelf->bench__DOT__uut__DOT__rs2)))
                                                 : 
                                                ((1U 
                                                  & (~ 
                                                     (vlSelf->bench__DOT__uut__DOT__instr 
                                                      >> 0xdU))) 
                                                 && ((0x1000U 
                                                      & vlSelf->bench__DOT__uut__DOT__instr)
                                                      ? 
                                                     (vlSelf->bench__DOT__uut__DOT__rs1 
                                                      != vlSelf->bench__DOT__uut__DOT__rs2)
                                                      : 
                                                     (vlSelf->bench__DOT__uut__DOT__rs1 
                                                      == vlSelf->bench__DOT__uut__DOT__rs2)))))
                                             ? (vlSelf->bench__DOT__uut__DOT__PC 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->bench__DOT__uut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->bench__DOT__uut__DOT__instr 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->bench__DOT__uut__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->bench__DOT__uut__DOT__instr 
                                                               >> 7U))))))
                                             : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->bench__DOT__uut__DOT__instr))
                                                 ? 
                                                (vlSelf->bench__DOT__uut__DOT__PC 
                                                 + 
                                                 (((- (IData)(
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
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->bench__DOT__uut__DOT__instr))
                                                  ? 
                                                 (vlSelf->bench__DOT__uut__DOT__rs1 
                                                  + vlSelf->bench__DOT__uut__DOT__Iimm)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->bench__DOT__uut__DOT__PC))));
    vlSelf->bench__DOT__uut__DOT__writeBackData = ((IData)(vlSelf->bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_4)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->bench__DOT__uut__DOT__PC)
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->bench__DOT__uut__DOT__instr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->bench__DOT__uut__DOT__instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->bench__DOT__uut__DOT__instr)
                                                       ? 
                                                      (vlSelf->bench__DOT__uut__DOT__rs1 
                                                       & vlSelf->bench__DOT__uut__DOT__aluIn2)
                                                       : 
                                                      (vlSelf->bench__DOT__uut__DOT__rs1 
                                                       | vlSelf->bench__DOT__uut__DOT__aluIn2))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->bench__DOT__uut__DOT__instr)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->bench__DOT__uut__DOT__instr)
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->bench__DOT__uut__DOT__rs1, (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                                        : 
                                                       (vlSelf->bench__DOT__uut__DOT__rs1 
                                                        >> (IData)(vlSelf->bench__DOT__uut__DOT__shamt)))
                                                       : 
                                                      (vlSelf->bench__DOT__uut__DOT__rs1 
                                                       ^ vlSelf->bench__DOT__uut__DOT__aluIn2)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->bench__DOT__uut__DOT__instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->bench__DOT__uut__DOT__instr)
                                                       ? 
                                                      (vlSelf->bench__DOT__uut__DOT__rs1 
                                                       < vlSelf->bench__DOT__uut__DOT__aluIn2)
                                                       : 
                                                      VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__rs1, vlSelf->bench__DOT__uut__DOT__aluIn2))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->bench__DOT__uut__DOT__instr)
                                                       ? 
                                                      (vlSelf->bench__DOT__uut__DOT__rs1 
                                                       << (IData)(vlSelf->bench__DOT__uut__DOT__shamt))
                                                       : 
                                                      ((IData)(
                                                               (0x40000020U 
                                                                == 
                                                                (0x40000020U 
                                                                 & vlSelf->bench__DOT__uut__DOT__instr)))
                                                        ? 
                                                       (vlSelf->bench__DOT__uut__DOT__rs1 
                                                        - vlSelf->bench__DOT__uut__DOT__aluIn2)
                                                        : 
                                                       (vlSelf->bench__DOT__uut__DOT__rs1 
                                                        + vlSelf->bench__DOT__uut__DOT__aluIn2))))));
}

void Vstep9___024root___timing_resume(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep9___024root___eval_triggers__act(Vstep9___024root* vlSelf);

bool Vstep9___024root___eval_phase__act(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep9___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep9___024root___timing_resume(vlSelf);
        Vstep9___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep9___024root___eval_phase__nba(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep9___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep9___024root___dump_triggers__nba(Vstep9___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep9___024root___dump_triggers__act(Vstep9___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep9___024root___eval(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep9___024root___dump_triggers__nba(vlSelf);
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
                Vstep9___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep9___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep9___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep9___024root___eval_debug_assertions(Vstep9___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep9__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep9___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
