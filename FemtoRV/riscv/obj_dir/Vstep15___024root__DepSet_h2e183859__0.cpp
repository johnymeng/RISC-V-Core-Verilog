// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep15.h for the primary calling header

#include "Vstep15__pch.h"
#include "Vstep15___024root.h"

VL_ATTR_COLD void Vstep15___024root___eval_initial__TOP(Vstep15___024root* vlSelf);
VlCoroutine Vstep15___024root___eval_initial__TOP__Vtiming__0(Vstep15___024root* vlSelf);

void Vstep15___024root___eval_initial(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_initial\n"); );
    // Body
    Vstep15___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstep15___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 
        = vlSelf->bench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vstep15___024root___eval_initial__TOP__Vtiming__0(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->bench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "bench_iverilog.v", 
                                           20);
        vlSelf->bench__DOT__CLK = (1U & (~ (IData)(vlSelf->bench__DOT__CLK)));
        vlSelf->bench__DOT__prev_LEDS = (0x1fU & vlSelf->bench__DOT__uut__DOT__x10);
    }
}

void Vstep15___024root___eval_act(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_act\n"); );
}

void Vstep15___024root___nba_sequent__TOP__0(Vstep15___024root* vlSelf);

void Vstep15___024root___eval_nba(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstep15___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vstep15__ConstPool__TABLE_hf5830c44_0;

VL_INLINE_OPT void Vstep15___024root___nba_sequent__TOP__0(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0;
    __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*4:0*/ __VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0;
    __VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*2:0*/ __Vdly__bench__DOT__uut__DOT__CPU__DOT__state;
    __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 0;
    IData/*31:0*/ __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC;
    __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC = 0;
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
        if (VL_UNLIKELY(((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn) 
                         & (0U != (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId))))) {
            VL_WRITEF_NX("r%0# <= %b\n",0,5,vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId,
                         32,vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData);
            __VdlyVal__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData;
            __VdlyDim0__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId;
            __VdlySet__bench__DOT__uut__DOT__CPU__DOT__RegisterBank__v0 = 1U;
            if ((0xaU == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId))) {
                vlSelf->bench__DOT__uut__DOT__x10 = vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData;
            }
        }
        if ((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 1U;
        } else if (VL_UNLIKELY((1U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))) {
            VL_WRITEF_NX("mem_rdata: %b\n",0,32,vlSelf->bench__DOT__uut__DOT__mem_rdata);
            vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                = vlSelf->bench__DOT__uut__DOT__mem_rdata;
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 2U;
        } else if (VL_UNLIKELY((2U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))) {
            VL_WRITEF_NX("rs1: %10# | rd2: %10#\n",0,
                         32,vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1,
                         32,vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2);
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 3U;
            vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank
                [vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1Id];
            vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 
                = vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank
                [vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2Id];
        } else if (VL_UNLIKELY((3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))) {
            VL_WRITEF_NX("state: %1#\n",0,3,vlSelf->bench__DOT__uut__DOT__CPU__DOT__state);
            if ((1U & (~ (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM)))) {
                __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC 
                    = vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC;
            }
            if (VL_UNLIKELY(vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM)) {
                VL_FINISH_MT("step15.v", 296, "");
            }
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state 
                = ((3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0))
                    ? 4U : 0U);
        } else if ((4U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 5U;
        } else if ((5U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) {
            __Vdly__bench__DOT__uut__DOT__CPU__DOT__state = 0U;
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
    if (((0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
         | (4U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))) {
        vlSelf->bench__DOT__uut__DOT__mem_rdata = vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM
            [(0xffU & ((((1U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                         | (0U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))
                         ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC
                         : vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr) 
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0 
        = (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in 
        = ((1U == (7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                         >> 0xcU))) ? ([&]() {
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                    = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1;
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__Vfuncout 
                    = ((vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                       << 0x1dU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                          << 0x1bU)) 
                                      | ((0x10000000U 
                                          & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                << 0x17U)) 
                                            | ((0x4000000U 
                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                         << 0x11U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                            << 0xfU)) 
                                                        | ((0x400000U 
                                                            & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                               << 0xdU)) 
                                                           | ((0x200000U 
                                                               & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                  << 0xbU)) 
                                                              | ((0x100000U 
                                                                  & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                     << 9U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                        << 7U)) 
                                                                    | ((0x40000U 
                                                                        & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                           << 5U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                              << 3U)) 
                                                                          | ((0x10000U 
                                                                              & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                << 1U)) 
                                                                             | ((0x8000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
            }(), vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__Vfuncout)
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm = 
        (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                      >> 0x1fU))) << 0xbU) | (0x7ffU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0x14U)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = __Vdly__bench__DOT__uut__DOT__CPU__DOT__state;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = __Vdly__bench__DOT__uut__DOT__CPU__DOT__PC;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr 
        = (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
           + vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 
        = (((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            | (0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn 
        = (((0x63U != (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            & ((~ ((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                   | (3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
               & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))) 
           | (5U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)));
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword 
        = (0xffffU & ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                       ? (vlSelf->bench__DOT__uut__DOT__mem_rdata 
                          >> 0x10U) : vlSelf->bench__DOT__uut__DOT__mem_rdata));
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte 
        = (0xffU & ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                     ? ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword) 
                        >> 8U) : (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword)));
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
        = vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__Vfuncout 
        = ((__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift 
        = __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__57__Vfuncout;
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign 
        = (1U & ((~ (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                     >> 0xeU)) & ((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                >> 0xcU)))
                                   ? ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte) 
                                      >> 7U) : ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword) 
                                                >> 0xfU))));
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
        = Vstep15__ConstPool__TABLE_hf5830c44_0[__Vtableidx1];
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData 
        = (((0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            | (0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)
            : ((0x37U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (0xfffff000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                : ((0x17U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                    ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
                    : ((3U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                        ? ((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                         >> 0xcU)))
                            ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                << 8U) | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte))
                            : ((1U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                             >> 0xcU)))
                                ? (((- (IData)((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign))) 
                                    << 0x10U) | (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword))
                                : vlSelf->bench__DOT__uut__DOT__mem_rdata))
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
                                    ? (1U & (IData)(
                                                    (vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus 
                                                     >> 0x20U)))
                                    : (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT))
                                : ((0x1000U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)
                                    ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift
                                    : ((IData)((0x40000020U 
                                                == 
                                                (0x40000020U 
                                                 & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
                                        ? (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus)
                                        : vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus))))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC 
        = ((((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
             & (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch)) 
            | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
            : ((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (0xfffffffeU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)
                : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)));
}

void Vstep15___024root___timing_resume(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstep15___024root___eval_triggers__act(Vstep15___024root* vlSelf);

bool Vstep15___024root___eval_phase__act(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstep15___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstep15___024root___timing_resume(vlSelf);
        Vstep15___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstep15___024root___eval_phase__nba(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstep15___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep15___024root___dump_triggers__nba(Vstep15___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep15___024root___dump_triggers__act(Vstep15___024root* vlSelf);
#endif  // VL_DEBUG

void Vstep15___024root___eval(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstep15___024root___dump_triggers__nba(vlSelf);
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
                Vstep15___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("bench_iverilog.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstep15___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstep15___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstep15___024root___eval_debug_assertions(Vstep15___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep15__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep15___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
