// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep13.h for the primary calling header

#include "Vstep13__pch.h"
#include "Vstep13___024root.h"

VL_ATTR_COLD void Vstep13___024root___eval_initial__TOP(Vstep13___024root* vlSelf);
VlCoroutine Vstep13___024root___eval_initial__TOP__Vtiming__0(Vstep13___024root* vlSelf);

void Vstep13___024root___eval_initial(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_initial\n"); );
    // Body
    Vstep13___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep13___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep13___024root___eval_initial__TOP__Vtiming__0(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->bench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "bench_iverilog.v", 
                                           20);
        vlSelf->bench__DOT__CLK = (1U & (~ (IData)(vlSelf->bench__DOT__CLK)));
        if (VL_UNLIKELY(((0x1fU & vlSelf->bench__DOT__uut__DOT__x10) 
                         != (IData)(vlSelf->bench__DOT__prev_LEDS)))) {
            VL_WRITEF_NX("LEDS = %b\n",0,5,(0x1fU & vlSelf->bench__DOT__uut__DOT__x10));
        }
        vlSelf->bench__DOT__prev_LEDS = (0x1fU & vlSelf->bench__DOT__uut__DOT__x10);
    }
}

void Vstep13___024root___eval_act(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_act\n"); );
}

void Vstep13___024root___nba_sequent__TOP__0(Vstep13___024root* vlSelf);

void Vstep13___024root___eval_nba(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep13___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vstep13___024root___nba_sequent__TOP__0(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__bench__DOT__uut__DOT__CPU__DOT__state;
    __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 0;
    IData/*31:0*/ __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC;
    __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC = 0;
    IData/*31:0*/ __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0;
    __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*4:0*/ __VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0;
    __VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 0;
    SData/*15:0*/ __Vdly__bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    __Vdly__bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0;
    CData/*0:0*/ __VdlySet__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0;
    __VdlySet__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 0;
    // Body
    __Vdly__bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    __VdlySet__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 0U;
    __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = vlSelf->bench__DOT__uut__DOT__CPU__DOT__state;
    __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC = vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC;
    __Vdly__bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = (0xffffU & ((IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt) 
                      + (1U & (~ (IData)(vlSelf->bench__DOT__uut__DOT__resetn)))));
    if ((0xffffU == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                = vlSelf->bench__DOT__uut__DOT__mem_rdata;
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank
                [vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1Id];
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 3U;
            vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank
                [vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2Id];
        } else if ((3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            if (VL_UNLIKELY(vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM)) {
                VL_FINISH_MT("step13.v", 216, "");
            }
            if ((1U & (~ (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM)))) {
                __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC 
                    = vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC;
            }
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 0U;
        }
        if (((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn) 
             & (0U != (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId)))) {
            __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData;
            __VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId;
            __VdlySet__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 1U;
            if ((0xaU == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId))) {
                vlSelf->bench__DOT__uut__DOT__x10 = vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData;
            }
        }
    } else {
        __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC = 0U;
        __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 0U;
    }
    if (__VdlySet__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0) {
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[__VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0] 
            = __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0;
    }
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = __Vdly__bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    vlSelf->bench__DOT__uut__DOT__resetn = (0xffffU 
                                            == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt));
    if ((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
        vlSelf->bench__DOT__uut__DOT__mem_rdata = vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM
            [(0xffU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC 
                       >> 2U))];
    }
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId = 
        (0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                  >> 7U));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1Id = 
        (0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                  >> 0xfU));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2Id = 
        (0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                  >> 0x14U));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM 
        = (0x73U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_4 
        = ((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
           | (0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm = 
        (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                      >> 0x1fU))) << 0xbU) | (0x7ffU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0x14U)));
    if ((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))) {
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__shamt 
            = (0x1fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2);
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 
            = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2;
    } else {
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__shamt 
            = (0x1fU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                        >> 0x14U));
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 
            = vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm;
    }
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = __Vdly__bench__DOT__uut__DOT__CPU__DOT__state;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn 
        = ((3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
           & ((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
              | ((0x13U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                 | ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_4) 
                    | ((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                       | (0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC 
        = (((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            & ((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                ? ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                    ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                        ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                           >= vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)
                        : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                           < vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2))
                    : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                        ? VL_GTES_III(32, vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1, vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)
                        : VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1, vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)))
                : ((1U & (~ (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                             >> 0xdU))) && ((0x1000U 
                                             & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                             ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                                != vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)
                                             : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                                == vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2)))))
            ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC 
               + (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                               >> 0x1fU))) << 0xcU) 
                  | ((0x800U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                << 4U)) | ((0x7e0U 
                                            & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 7U))))))
            : ((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC 
                   + (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                   >> 0x1fU))) << 0x14U) 
                      | ((0xff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                         | ((0x800U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                     >> 0x14U))))))
                : ((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                    ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                       + vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm)
                    : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData 
        = ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_4)
            ? ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)
            : ((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                : ((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                    ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC 
                       + (0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                    : ((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                        ? ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                            ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                   & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)
                                : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                   | vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2))
                            : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                ? ((0x40000000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                    ? VL_SHIFTRS_III(32,32,5, vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1, (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shamt))
                                    : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                       >> (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shamt)))
                                : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                   ^ vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)))
                        : ((0x2000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                            ? ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                   < vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)
                                : VL_LTS_III(32, vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1, vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2))
                            : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                   << (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shamt))
                                : ((IData)((0x40000020U 
                                            == (0x40000020U 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                                    ? (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                       - vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)
                                    : (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                       + vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2))))))));
}

void Vstep13___024root___timing_resume(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep13___024root___eval_triggers__act(Vstep13___024root* vlSelf);

bool Vstep13___024root___eval_phase__act(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep13___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep13___024root___timing_resume(vlSelf);
        Vstep13___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep13___024root___eval_phase__nba(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep13___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep13___024root___dump_triggers__nba(Vstep13___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep13___024root___dump_triggers__act(Vstep13___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep13___024root___eval(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep13___024root___dump_triggers__nba(vlSelf);
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
                Vstep13___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep13___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep13___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep13___024root___eval_debug_assertions(Vstep13___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep13__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep13___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
