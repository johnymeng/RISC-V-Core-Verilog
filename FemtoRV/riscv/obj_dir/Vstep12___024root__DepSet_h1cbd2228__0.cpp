// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep12.h for the primary calling header

#include "Vstep12__pch.h"
#include "Vstep12___024root.h"

VL_ATTR_COLD void Vstep12___024root___eval_initial__TOP(Vstep12___024root* vlSelf);
VlCoroutine Vstep12___024root___eval_initial__TOP__Vtiming__0(Vstep12___024root* vlSelf);

void Vstep12___024root___eval_initial(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_initial\n"); );
    // Body
    Vstep12___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep12___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep12___024root___eval_initial__TOP__Vtiming__0(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_initial__TOP__Vtiming__0\n"); );
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

void Vstep12___024root___eval_act(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_act\n"); );
}

void Vstep12___024root___nba_sequent__TOP__0(Vstep12___024root* vlSelf);

void Vstep12___024root___eval_nba(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep12___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vstep12__ConstPool__TABLE_hf5830c44_0;

VL_INLINE_OPT void Vstep12___024root___nba_sequent__TOP__0(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
                VL_FINISH_MT("step12.v", 248, "");
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in 
        = ((1U == (7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                         >> 0xcU))) ? ([&]() {
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                    = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1;
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__Vfuncout 
                    = ((vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                       << 0x1dU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                          << 0x1bU)) 
                                      | ((0x10000000U 
                                          & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                << 0x17U)) 
                                            | ((0x4000000U 
                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                         << 0x11U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                            << 0xfU)) 
                                                        | ((0x400000U 
                                                            & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                               << 0xdU)) 
                                                           | ((0x200000U 
                                                               & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                  << 0xbU)) 
                                                              | ((0x100000U 
                                                                  & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                     << 9U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                        << 7U)) 
                                                                    | ((0x40000U 
                                                                        & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                           << 5U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                              << 3U)) 
                                                                          | ((0x10000U 
                                                                              & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                << 1U)) 
                                                                             | ((0x8000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
            }(), vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__Vfuncout)
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 
        = (((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            | (0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
            : (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                            >> 0x1fU))) << 0xbU) | 
               (0x7ffU & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                          >> 0x14U))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = __Vdly__bench__DOT__uut__DOT__CPU__DOT__state;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus 
        = (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
           + vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter 
        = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                                       >> 0x1eU) 
                                                                      & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                                                         >> 0x1fU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in))), 
                                                   (0x1fU 
                                                    & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
        = (0x1ffffffffULL & (1ULL + ((0x100000000ULL 
                                      | (QData)((IData)(
                                                        (~ vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2)))) 
                                     + (QData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1)))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn 
        = ((~ ((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
               | (0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
           & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm 
        = (vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC 
           + ((8U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
               ? (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                               >> 0x1fU))) << 0x14U) 
                  | ((0xff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr) 
                     | ((0x800U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                   >> 9U)) | (0x7feU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0x14U)))))
               : ((0x10U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                   ? (0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                   : (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                   >> 0x1fU))) << 0xcU) 
                      | ((0x800U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                    << 4U)) | ((0x7e0U 
                                                & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                     >> 7U))))))));
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
        = vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__Vfuncout 
        = ((__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift 
        = __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__Vfuncout;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT = (1U 
                                                  & (((vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                                       ^ vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2) 
                                                      >> 0x1fU)
                                                      ? 
                                                     (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                                                      >> 0x1fU)
                                                      : (IData)(
                                                                (vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                                 >> 0x20U))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData 
        = (((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            | (0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)
            : ((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                : ((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                    ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
                    : ((0x4000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
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
                                ? (1U & (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                 >> 0x20U)))
                                : (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT))
                            : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift
                                : ((IData)((0x40000020U 
                                            == (0x40000020U 
                                                & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                                    ? (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus)
                                    : vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)))))));
    __Vtableidx1 = (((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus)) 
                     << 8U) | (((0U != (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus)) 
                                << 7U) | (((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((~ (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT)) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((IData)(
                                                          (vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ (IData)(
                                                                (vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                                 >> 0x20U))) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                       >> 0xcU))))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch 
        = Vstep12__ConstPool__TABLE_hf5830c44_0[__Vtableidx1];
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC 
        = ((((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
             & (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch)) 
            | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
            : ((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (0xfffffffeU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)
                : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)));
}

void Vstep12___024root___timing_resume(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep12___024root___eval_triggers__act(Vstep12___024root* vlSelf);

bool Vstep12___024root___eval_phase__act(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep12___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep12___024root___timing_resume(vlSelf);
        Vstep12___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep12___024root___eval_phase__nba(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep12___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep12___024root___dump_triggers__nba(Vstep12___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep12___024root___dump_triggers__act(Vstep12___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep12___024root___eval(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep12___024root___dump_triggers__nba(vlSelf);
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
                Vstep12___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep12___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep12___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep12___024root___eval_debug_assertions(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
