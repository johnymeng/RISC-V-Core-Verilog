// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep16.h for the primary calling header

#include "Vstep16__pch.h"
#include "Vstep16___024root.h"

VL_ATTR_COLD void Vstep16___024root___eval_static__TOP(Vstep16___024root* vlSelf);

VL_ATTR_COLD void Vstep16___024root___eval_static(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_static\n"); );
    // Body
    Vstep16___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vstep16___024root___eval_static__TOP(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = 0xcU;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = 0x28U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = 0x40U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_ = 0x48U;
    vlSelf->bench__DOT__uut__DOT__x10 = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = 0U;
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0U;
}

VL_ATTR_COLD void Vstep16___024root___eval_initial__TOP(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_initial__TOP\n"); );
    // Init
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__27__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__27__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__32__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__32__offset = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__34__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__34__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__35__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__35__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__36__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__36__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__37__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__37__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__40__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__40__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__52__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__52__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__55__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__55__offset = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__57__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__57__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__58__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__58__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__59__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__59__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__60__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__60__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__63__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__63__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__67__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__67__L = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__79__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__79__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__82__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__82__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__84__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__84__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm = 0;
    // Body
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[0U] = 0x533U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 4U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__imm = 0x10U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__rd = 9U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__9__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__12__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__13__rd) 
                                  << 7U)));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x433U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__27__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__27__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x19040583U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x32b40023U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__32__offset 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__33__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__34__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__32__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__35__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__34__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x317U | (0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__35__imm));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__36__imm 
        = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__32__offset);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__37__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__36__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x300e7U | (__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__37__imm 
                       << 0x14U));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x140413U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__40__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__41__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__40__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x941063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm 
                                        << 0x13U)) 
                        | ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm 
                                           << 0x14U)) 
                           | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm 
                                         << 7U)) | 
                              (0x80U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__42__imm 
                                        >> 4U))))));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x433U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__52__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__52__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x32040503U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__55__offset 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__56__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__57__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__55__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__58__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__57__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x317U | (0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__58__imm));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__59__imm 
        = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__55__offset);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__60__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__59__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x300e7U | (__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__60__imm 
                       << 0x14U));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x140413U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__63__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__64__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__63__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x941063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm 
                                        << 0x13U)) 
                        | ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm 
                                           << 0x14U)) 
                           | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm 
                                         << 7U)) | 
                              (0x80U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__65__imm 
                                        >> 4U))))));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x100073U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__67__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__67__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__imm = 1U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__rd = 5U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__68__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__71__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__72__rd) 
                                  << 7U)));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x1129293U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__79__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__79__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0xfff28293U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__82__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__84__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__82__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__84__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
        = (0x29063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm 
                                       << 0x13U)) | 
                       ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm 
                                        << 0x14U)) 
                        | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm 
                                      << 7U)) | (0x80U 
                                                 & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__85__imm 
                                                    >> 4U))))));
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0xffU 
                                                 & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                    >> 2U))] = 0x8067U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[0x64U] = 0x4030201U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[0x65U] = 0x8070605U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[0x66U] = 0xc0b0a09U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[0x67U] = 0xff0f0e0dU;
}

VL_ATTR_COLD void Vstep16___024root___eval_final(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep16___024root___dump_triggers__stl(Vstep16___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstep16___024root___eval_phase__stl(Vstep16___024root* vlSelf);

VL_ATTR_COLD void Vstep16___024root___eval_settle(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_settle\n"); );
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
            Vstep16___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstep16___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep16___024root___dump_triggers__stl(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep16___024root___stl_sequent__TOP__0(Vstep16___024root* vlSelf);

VL_ATTR_COLD void Vstep16___024root___eval_stl(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstep16___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vstep16__ConstPool__TABLE_hf5830c44_0;

VL_ATTR_COLD void Vstep16___024root___stl_sequent__TOP__0(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->bench__DOT__uut__DOT__resetn = (0xffffU 
                                            == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt));
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter_in 
        = ((1U == (7U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                         >> 0xcU))) ? ([&]() {
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                    = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1;
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__Vfuncout 
                    = ((vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                       << 0x1dU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                          << 0x1bU)) 
                                      | ((0x10000000U 
                                          & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                << 0x17U)) 
                                            | ((0x4000000U 
                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                         << 0x11U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                            << 0xfU)) 
                                                        | ((0x400000U 
                                                            & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                               << 0xdU)) 
                                                           | ((0x200000U 
                                                               & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                  << 0xbU)) 
                                                              | ((0x100000U 
                                                                  & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                     << 9U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                        << 7U)) 
                                                                    | ((0x40000U 
                                                                        & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                           << 5U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                              << 3U)) 
                                                                          | ((0x10000U 
                                                                              & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                << 1U)) 
                                                                             | ((0x8000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
            }(), vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__Vfuncout)
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm = 
        (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                      >> 0x1fU))) << 0xbU) | (0x7ffU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0x14U)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr 
        = (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 
           + ((0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
               ? (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                               >> 0x1fU))) << 0xbU) 
                  | ((0x7e0U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                >> 0x14U)) | (0x1fU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 7U))))
               : vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 
        = (((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            | (0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm);
    vlSelf->bench__DOT__uut__DOT__mem_wdata = ((((1U 
                                                  & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                  ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                                  : 
                                                 ((2U 
                                                   & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                   ? 
                                                  (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 
                                                   >> 8U)
                                                   : 
                                                  (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 
                                                   >> 0x18U))) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((2U 
                                                        & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                        ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                                        : 
                                                       (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 
                                                        >> 0x10U)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((1U 
                                                           & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                           ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
                                                           : 
                                                          (vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 
                                                           >> 8U)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2))));
    vlSelf->bench__DOT__uut__DOT__mem_addr = (((1U 
                                                == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                                               | (0U 
                                                  == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))
                                               ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC
                                               : vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr);
    vlSelf->bench__DOT__uut__DOT__mem_wmask = ((- (IData)(
                                                          (6U 
                                                           == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))) 
                                               & ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                     ? 2U
                                                     : 1U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                                                     ? 0xcU
                                                     : 3U)
                                                    : 0xfU)));
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
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
        = vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__Vfuncout 
        = ((__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift 
        = __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__91__Vfuncout;
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
        = Vstep16__ConstPool__TABLE_hf5830c44_0[__Vtableidx1];
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

VL_ATTR_COLD void Vstep16___024root___eval_triggers__stl(Vstep16___024root* vlSelf);

VL_ATTR_COLD bool Vstep16___024root___eval_phase__stl(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstep16___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstep16___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep16___024root___dump_triggers__act(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vstep16___024root___dump_triggers__nba(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vstep16___024root___ctor_var_reset(Vstep16___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep16___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->bench__DOT__uut__DOT__x10 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1Id = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2Id = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__CPU__DOT__RegisterBank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn = VL_RAND_RESET_I(1);
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword = VL_RAND_RESET_I(16);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte = VL_RAND_RESET_I(8);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0 = VL_RAND_RESET_I(7);
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__90__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
