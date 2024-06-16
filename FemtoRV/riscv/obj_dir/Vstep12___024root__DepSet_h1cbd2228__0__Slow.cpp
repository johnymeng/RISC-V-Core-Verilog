// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep12.h for the primary calling header

#include "Vstep12__pch.h"
#include "Vstep12___024root.h"

VL_ATTR_COLD void Vstep12___024root___eval_static__TOP(Vstep12___024root* vlSelf);

VL_ATTR_COLD void Vstep12___024root___eval_static(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_static\n"); );
    // Body
    Vstep12___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vstep12___024root___eval_static__TOP(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = 4U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = 0x14U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = 0x1cU;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = 0U;
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0U;
}

VL_ATTR_COLD void Vstep12___024root___eval_initial__TOP(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__2__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__2__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__5__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__5__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__8__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__8__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__12__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__12__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__17__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__17__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__20__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__20__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm = 0;
    // Body
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[0U] = 0x533U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__2__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__2__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[1U] = 0x150513U;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__L 
           - (IData)(8U));
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__5__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__6__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__5__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[2U] 
        = (0xefU | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm 
                                    << 0xbU)) | ((0x7fe00000U 
                                                  & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm 
                                                     << 0x14U)) 
                                                 | ((0x100000U 
                                                     & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm 
                                                        << 9U)) 
                                                    | (0xff000U 
                                                       & __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__7__imm)))));
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__L 
           - (IData)(0xcU));
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__8__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__9__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__8__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[3U] 
        = (0x6fU | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm 
                                    << 0xbU)) | ((0x7fe00000U 
                                                  & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm 
                                                     << 0x14U)) 
                                                 | ((0x100000U 
                                                     & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm 
                                                        << 9U)) 
                                                    | (0xff000U 
                                                       & __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__10__imm)))));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[4U] = 0x100073U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__12__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__12__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[5U] = 0x100593U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[6U] = 0x1359593U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__17__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__17__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[7U] = 0xfff58593U;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__L 
           - (IData)(0x20U));
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__20__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__21__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__20__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[8U] 
        = (0x59063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm 
                                       << 0x13U)) | 
                       ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm 
                                        << 0x14U)) 
                        | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm 
                                      << 7U)) | (0x80U 
                                                 & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__22__imm 
                                                    >> 4U))))));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[9U] = 0x8067U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 0x28U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[1U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[2U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[3U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[4U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[5U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[6U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[7U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[8U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[9U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0xaU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0xbU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0xcU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0xdU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0xeU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0xfU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x10U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x11U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x12U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x13U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x14U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x15U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x16U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x17U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x18U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x19U] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x1aU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x1bU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x1cU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x1dU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x1eU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[0x1fU] = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vstep12___024root___eval_final(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep12___024root___dump_triggers__stl(Vstep12___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstep12___024root___eval_phase__stl(Vstep12___024root* vlSelf);

VL_ATTR_COLD void Vstep12___024root___eval_settle(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vstep12___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstep12___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep12___024root___dump_triggers__stl(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep12___024root___stl_sequent__TOP__0(Vstep12___024root* vlSelf);

VL_ATTR_COLD void Vstep12___024root___eval_stl(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstep12___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vstep12__ConstPool__TABLE_hf5830c44_0;

VL_ATTR_COLD void Vstep12___024root___stl_sequent__TOP__0(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__27__x = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->bench__DOT__uut__DOT__resetn = (0xffffU 
                                            == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt));
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

VL_ATTR_COLD void Vstep12___024root___eval_triggers__stl(Vstep12___024root* vlSelf);

VL_ATTR_COLD bool Vstep12___024root___eval_phase__stl(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstep12___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstep12___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep12___024root___dump_triggers__act(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge bench.CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep12___024root___dump_triggers__nba(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge bench.CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep12___024root___ctor_var_reset(Vstep12___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep12__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep12___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__x10 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1Id = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2Id = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rdId = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluMinus = VL_RAND_RESET_Q(33);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LT = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__26__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
