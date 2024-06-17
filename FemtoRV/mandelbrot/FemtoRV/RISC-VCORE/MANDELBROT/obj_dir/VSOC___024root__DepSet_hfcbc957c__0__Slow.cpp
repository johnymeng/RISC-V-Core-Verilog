// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "VSOC__pch.h"
#include "VSOC___024root.h"

VL_ATTR_COLD void VSOC___024root___eval_static__TOP(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_static(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_static\n"); );
    // Body
    VSOC___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VSOC___024root___eval_static__TOP(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->SOC__DOT__CPU__DOT__PC = 0U;
    vlSelf->SOC__DOT__CPU__DOT__state = 0U;
    vlSelf->SOC__DOT__RAM__DOT__ASMerror = 0U;
    vlSelf->SOC__DOT__RAM__DOT__mandelstart_ = 0xcU;
    vlSelf->SOC__DOT__RAM__DOT__blink_ = 0x10U;
    vlSelf->SOC__DOT__RAM__DOT__loop_y_ = 0x4cU;
    vlSelf->SOC__DOT__RAM__DOT__loop_x_ = 0x54U;
    vlSelf->SOC__DOT__RAM__DOT__loop_Z_ = 0x60U;
    vlSelf->SOC__DOT__RAM__DOT__exit_Z_ = 0xbcU;
    vlSelf->SOC__DOT__RAM__DOT__wait_ = 0x108U;
    vlSelf->SOC__DOT__RAM__DOT__wait_L0_ = 0x110U;
    vlSelf->SOC__DOT__RAM__DOT__putc_ = 0x11cU;
    vlSelf->SOC__DOT__RAM__DOT__putc_L0_ = 0x124U;
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_ = 0x134U;
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_L0_ = 0x13cU;
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_L1_ = 0x148U;
    vlSelf->SOC__DOT__RAM__DOT__colormap_ = 0x158U;
    vlSelf->SOC__DOT__UART__DOT__cnt = 0U;
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0U;
}

VL_ATTR_COLD void VSOC___024root___eval_initial__TOP(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_initial(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial\n"); );
    // Body
    VSOC___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__RESET__0 = vlSelf->RESET;
}

VL_ATTR_COLD void VSOC___024root___eval_initial__TOP(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ SOC__DOT__RAM__DOT__memPC;
    SOC__DOT__RAM__DOT__memPC = 0;
    IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0;
    IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__2;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__2 = 0;
    IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = 0;
    IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = 0;
    IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0;
    IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__9;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__9 = 0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0;
    SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0 = 0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0;
    SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0 = 0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0;
    SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0 = 0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0;
    SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0 = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__2__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__2__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__2__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__2__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__7__rd;
    __Vtask_SOC__DOT__RAM__DOT__LUI__7__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__7__imm;
    __Vtask_SOC__DOT__RAM__DOT__LUI__7__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__8__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__8__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__8__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__8__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rs1;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__9__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__9__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__10__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__10__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__10__rs1;
    __Vtask_SOC__DOT__RAM__DOT__IType__10__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__10__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__10__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__11__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__11__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__11__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__11__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__16__rd;
    __Vtask_SOC__DOT__RAM__DOT__LUI__16__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__16__imm;
    __Vtask_SOC__DOT__RAM__DOT__LUI__16__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__17__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__17__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__17__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__17__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rs1;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__18__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__18__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__19__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__19__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__19__rs1;
    __Vtask_SOC__DOT__RAM__DOT__IType__19__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__19__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__19__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__20__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__20__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__21__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__21__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__21__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__21__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__24__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__24__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__24__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__24__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__25__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__25__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__25__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__25__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__30__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__30__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__31__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__31__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__31__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__31__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__34__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__34__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__34__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__34__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__35__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__35__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__35__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__35__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__43__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__43__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__45__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__45__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__46__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__46__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__47__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__47__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__48__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__48__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__49__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__49__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__49__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__49__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__52__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__52__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__52__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__52__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__53__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__53__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__53__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__53__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__61__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__61__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__63__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__63__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__64__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__64__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__65__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__65__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__66__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__66__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNEZ__69__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__69__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__71__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__71__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__72__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__72__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__94__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__94__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__94__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__94__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__97__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__97__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__97__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__97__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__98__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__98__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__98__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__98__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__103__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__103__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__103__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__103__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__106__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__106__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__106__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__106__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__107__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__107__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__107__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__107__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__112__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__112__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__122__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__122__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__122__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__122__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__125__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__125__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__125__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__125__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__126__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__126__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__126__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__126__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__131__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__131__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__138__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__138__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__138__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__138__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__141__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__141__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__141__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__141__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__142__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__142__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__142__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__142__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__147__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__147__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__154__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__154__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__156__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__156__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__157__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__157__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__158__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__158__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__159__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__159__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__168__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__168__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__170__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__170__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__171__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__171__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__172__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__172__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__173__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__173__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__182__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__182__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__184__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__184__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__185__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__185__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__186__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__186__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__187__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__187__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__198__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__198__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__198__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__198__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__203__rd;
    __Vtask_SOC__DOT__RAM__DOT__LUI__203__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__203__imm;
    __Vtask_SOC__DOT__RAM__DOT__LUI__203__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__204__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__204__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__204__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__204__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rs1;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__205__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__205__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__206__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__206__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__206__rs1;
    __Vtask_SOC__DOT__RAM__DOT__IType__206__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__206__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__206__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BGT__207__imm;
    __Vtask_SOC__DOT__RAM__DOT__BGT__207__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BLT__209__imm;
    __Vtask_SOC__DOT__RAM__DOT__BLT__209__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__210__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__210__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNEZ__213__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__213__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__215__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__215__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__216__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__216__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__217__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__217__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__218__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__218__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__218__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__218__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADD__219__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADD__219__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__RType__220__rd;
    __Vtask_SOC__DOT__RAM__DOT__RType__220__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__221__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__221__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__221__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__221__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__222__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__222__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__222__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__222__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__223__rd;
    __Vtask_SOC__DOT__RAM__DOT__LUI__223__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LUI__223__imm;
    __Vtask_SOC__DOT__RAM__DOT__LUI__223__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__224__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__224__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__224__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__224__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rs1;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__225__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__225__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__226__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__226__rd = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__226__rs1;
    __Vtask_SOC__DOT__RAM__DOT__IType__226__rs1 = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__226__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__226__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__231__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__231__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__233__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__233__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__234__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__234__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__235__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__235__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__236__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__236__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__241__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__241__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__243__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__243__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__244__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__244__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__244__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__244__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__247__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__247__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__247__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__247__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__248__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__248__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__248__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__248__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__253__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__253__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__255__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__255__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__256__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__256__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__257__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__257__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__258__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__258__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__259__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__259__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__259__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__259__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__262__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__262__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__262__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__262__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__263__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__263__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__263__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__263__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__CALL__268__offset;
    __Vtask_SOC__DOT__RAM__DOT__CALL__268__offset = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__AUIPC__270__imm;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__270__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__UType__271__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__271__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JALR__272__imm;
    __Vtask_SOC__DOT__RAM__DOT__JALR__272__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__273__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__273__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__278__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__278__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__280__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__280__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__J__281__imm;
    __Vtask_SOC__DOT__RAM__DOT__J__281__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JAL__283__imm;
    __Vtask_SOC__DOT__RAM__DOT__JAL__283__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__JType__284__imm;
    __Vtask_SOC__DOT__RAM__DOT__JType__284__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__286__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__286__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__287__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__287__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__287__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__287__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__290__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__290__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__290__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__290__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__291__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__291__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__291__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__291__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__298__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__298__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNEZ__301__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__301__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__303__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__303__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__304__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__304__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__308__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__308__L = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__312__rd;
    __Vtask_SOC__DOT__RAM__DOT__LI__312__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__LI__312__imm;
    __Vtask_SOC__DOT__RAM__DOT__LI__312__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__315__rd;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__315__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__ADDI__315__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__315__imm = 0;
    CData/*4:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__316__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__316__rd = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__IType__316__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__316__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__321__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__321__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNEZ__327__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__327__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__329__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__329__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__330__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__330__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__334__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__334__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__347__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__347__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BEQZ__350__imm;
    __Vtask_SOC__DOT__RAM__DOT__BEQZ__350__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BEQ__352__imm;
    __Vtask_SOC__DOT__RAM__DOT__BEQ__352__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__353__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__353__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__356__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__356__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNEZ__361__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__361__imm = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__Vfuncout;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__L;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__L = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BNE__363__imm;
    __Vtask_SOC__DOT__RAM__DOT__BNE__363__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__BType__364__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__364__imm = 0;
    IData/*31:0*/ __Vtask_SOC__DOT__RAM__DOT__Label__368__L;
    __Vtask_SOC__DOT__RAM__DOT__Label__368__L = 0;
    // Body
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[1U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[2U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[3U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[4U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[5U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[6U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[7U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[8U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[9U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xaU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xbU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xcU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xdU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xeU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xfU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x10U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x11U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x12U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x13U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x14U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x15U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x16U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x17U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x18U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x19U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1aU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1bU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1cU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1dU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1eU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1fU] = 0U;
    SOC__DOT__RAM__DOT__memPC = 0U;
    __Vtask_SOC__DOT__RAM__DOT__LI__2__imm = 0x1800U;
    __Vtask_SOC__DOT__RAM__DOT__LI__2__rd = 2U;
    __Vtask_SOC__DOT__RAM__DOT__LUI__7__imm = (__Vtask_SOC__DOT__RAM__DOT__LI__2__imm 
                                               + VL_SHIFTL_III(32,32,32, 
                                                               (1U 
                                                                & (__Vtask_SOC__DOT__RAM__DOT__LI__2__imm 
                                                                   >> 0xbU)), 0xcU));
    __Vtask_SOC__DOT__RAM__DOT__LUI__7__rd = __Vtask_SOC__DOT__RAM__DOT__LI__2__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__8__imm = __Vtask_SOC__DOT__RAM__DOT__LUI__7__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__8__rd = __Vtask_SOC__DOT__RAM__DOT__LUI__7__rd;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x37U 
                                                   | ((0xfffff000U 
                                                       & __Vtask_SOC__DOT__RAM__DOT__UType__8__imm) 
                                                      | ((IData)(__Vtask_SOC__DOT__RAM__DOT__UType__8__rd) 
                                                         << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    if ((0U != (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__2__imm))) {
        __Vtask_SOC__DOT__RAM__DOT__ADDI__9__imm = 
            (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__2__imm);
        __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rs1 = __Vtask_SOC__DOT__RAM__DOT__LI__2__rd;
        __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rd = __Vtask_SOC__DOT__RAM__DOT__LI__2__rd;
        __Vtask_SOC__DOT__RAM__DOT__IType__10__imm 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__9__imm;
        __Vtask_SOC__DOT__RAM__DOT__IType__10__rs1 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rs1;
        __Vtask_SOC__DOT__RAM__DOT__IType__10__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__9__rd;
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
            = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__10__imm 
                         << 0x14U) | (((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__10__rs1) 
                                       << 0xfU) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__10__rd) 
                                                   << 7U))));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                             & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))] 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        }
        SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    }
    __Vtask_SOC__DOT__RAM__DOT__LI__11__imm = 0x400000U;
    __Vtask_SOC__DOT__RAM__DOT__LI__11__rd = 3U;
    __Vtask_SOC__DOT__RAM__DOT__LUI__16__imm = (__Vtask_SOC__DOT__RAM__DOT__LI__11__imm 
                                                + VL_SHIFTL_III(32,32,32, 
                                                                (1U 
                                                                 & (__Vtask_SOC__DOT__RAM__DOT__LI__11__imm 
                                                                    >> 0xbU)), 0xcU));
    __Vtask_SOC__DOT__RAM__DOT__LUI__16__rd = __Vtask_SOC__DOT__RAM__DOT__LI__11__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__17__imm = __Vtask_SOC__DOT__RAM__DOT__LUI__16__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__17__rd = __Vtask_SOC__DOT__RAM__DOT__LUI__16__rd;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x37U 
                                                   | ((0xfffff000U 
                                                       & __Vtask_SOC__DOT__RAM__DOT__UType__17__imm) 
                                                      | ((IData)(__Vtask_SOC__DOT__RAM__DOT__UType__17__rd) 
                                                         << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    if ((0U != (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__11__imm))) {
        __Vtask_SOC__DOT__RAM__DOT__ADDI__18__imm = 
            (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__11__imm);
        __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rs1 = __Vtask_SOC__DOT__RAM__DOT__LI__11__rd;
        __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rd = __Vtask_SOC__DOT__RAM__DOT__LI__11__rd;
        __Vtask_SOC__DOT__RAM__DOT__IType__19__imm 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__18__imm;
        __Vtask_SOC__DOT__RAM__DOT__IType__19__rs1 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rs1;
        __Vtask_SOC__DOT__RAM__DOT__IType__19__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__18__rd;
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
            = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__19__imm 
                         << 0x14U) | (((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__19__rs1) 
                                       << 0xfU) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__19__rd) 
                                                   << 7U))));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                             & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))] 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        }
        SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    }
    VL_WRITEF_NX("mandelstart val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__mandelstart_);
    __Vtask_SOC__DOT__RAM__DOT__Label__20__L = vlSelf->SOC__DOT__RAM__DOT__mandelstart_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__20__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__20__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__mandelstart_ = __Vtask_SOC__DOT__RAM__DOT__Label__20__L;
    __Vtask_SOC__DOT__RAM__DOT__LI__21__imm = 5U;
    __Vtask_SOC__DOT__RAM__DOT__LI__21__rd = 8U;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__24__imm = __Vtask_SOC__DOT__RAM__DOT__LI__21__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__24__rd = __Vtask_SOC__DOT__RAM__DOT__LI__21__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__25__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__24__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__25__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__24__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__25__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__25__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("blink val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__blink_);
    __Vtask_SOC__DOT__RAM__DOT__Label__30__L = vlSelf->SOC__DOT__RAM__DOT__blink_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__30__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__30__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__blink_ = __Vtask_SOC__DOT__RAM__DOT__Label__30__L;
    __Vtask_SOC__DOT__RAM__DOT__LI__31__imm = 5U;
    __Vtask_SOC__DOT__RAM__DOT__LI__31__rd = 0xaU;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__34__imm = __Vtask_SOC__DOT__RAM__DOT__LI__31__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__34__rd = __Vtask_SOC__DOT__RAM__DOT__LI__31__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__35__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__34__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__35__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__34__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__35__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__35__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0xa1a223U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("wait val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__wait_);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__L = vlSelf->SOC__DOT__RAM__DOT__wait_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__43__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__44__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__45__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__43__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__46__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__45__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__46__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__47__imm = (0xfffU 
                                                 & __Vtask_SOC__DOT__RAM__DOT__CALL__43__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__48__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__47__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__48__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__49__imm = 0xaU;
    __Vtask_SOC__DOT__RAM__DOT__LI__49__rd = 0xaU;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__52__imm = __Vtask_SOC__DOT__RAM__DOT__LI__49__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__52__rd = __Vtask_SOC__DOT__RAM__DOT__LI__49__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__53__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__52__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__53__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__52__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__53__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__53__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0xa1a223U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__L = vlSelf->SOC__DOT__RAM__DOT__wait_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__61__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__62__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__63__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__61__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__64__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__63__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__64__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__65__imm = (0xfffU 
                                                 & __Vtask_SOC__DOT__RAM__DOT__CALL__61__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__66__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__65__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__66__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0xfff40413U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__L = vlSelf->SOC__DOT__RAM__DOT__blink_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__69__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__70__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BNE__71__imm = __Vtask_SOC__DOT__RAM__DOT__BNEZ__69__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__72__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__71__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x41063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__72__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__72__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__72__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__72__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0xa1a223U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x4b3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__94__imm = 0xfffff800U;
    __Vtask_SOC__DOT__RAM__DOT__LI__94__rd = 0x13U;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__97__imm = __Vtask_SOC__DOT__RAM__DOT__LI__94__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__97__rd = __Vtask_SOC__DOT__RAM__DOT__LI__94__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__98__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__97__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__98__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__97__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__98__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__98__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__103__imm = 0x50U;
    __Vtask_SOC__DOT__RAM__DOT__LI__103__rd = 0x1bU;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__106__imm = __Vtask_SOC__DOT__RAM__DOT__LI__103__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__106__rd = __Vtask_SOC__DOT__RAM__DOT__LI__103__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__107__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__106__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__107__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__106__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__107__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__107__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("loop y val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__loop_y_);
    __Vtask_SOC__DOT__RAM__DOT__Label__112__L = vlSelf->SOC__DOT__RAM__DOT__loop_y_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__112__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__112__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__loop_y_ = __Vtask_SOC__DOT__RAM__DOT__Label__112__L;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x433U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__122__imm = 0xfffff800U;
    __Vtask_SOC__DOT__RAM__DOT__LI__122__rd = 0x12U;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__125__imm = __Vtask_SOC__DOT__RAM__DOT__LI__122__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__125__rd = __Vtask_SOC__DOT__RAM__DOT__LI__122__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__126__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__125__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__126__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__125__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__126__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__126__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("loop x val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__loop_x_);
    __Vtask_SOC__DOT__RAM__DOT__Label__131__L = vlSelf->SOC__DOT__RAM__DOT__loop_x_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__131__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__131__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__loop_x_ = __Vtask_SOC__DOT__RAM__DOT__Label__131__L;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x90a33U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x98ab3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__138__imm = 9U;
    __Vtask_SOC__DOT__RAM__DOT__LI__138__rd = 0x1aU;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__141__imm = __Vtask_SOC__DOT__RAM__DOT__LI__138__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__141__rd = __Vtask_SOC__DOT__RAM__DOT__LI__138__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__142__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__141__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__142__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__141__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__142__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__142__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("loop z val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__loop_Z_);
    __Vtask_SOC__DOT__RAM__DOT__Label__147__L = vlSelf->SOC__DOT__RAM__DOT__loop_Z_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__147__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__147__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__loop_Z_ = __Vtask_SOC__DOT__RAM__DOT__Label__147__L;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa0533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa05b3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("mulsi3 val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__mulsi3_);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__154__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__155__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__156__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__154__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__157__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__156__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__157__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__158__imm = (0xfffU 
                                                  & __Vtask_SOC__DOT__RAM__DOT__CALL__154__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__159__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__158__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__159__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa55b13U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa0533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa85b3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__168__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__169__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__170__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__168__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__171__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__170__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__171__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__172__imm = (0xfffU 
                                                  & __Vtask_SOC__DOT__RAM__DOT__CALL__168__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__173__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__172__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__173__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x40955b93U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa8533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa85b3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__182__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__183__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__184__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__182__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__185__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__184__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__185__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__186__imm = (0xfffU 
                                                  & __Vtask_SOC__DOT__RAM__DOT__CALL__182__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__187__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__186__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__187__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xa55c13U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x418b0a33U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x12a0a33U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x13b8ab3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x18b0b33U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__198__imm = 0x1000U;
    __Vtask_SOC__DOT__RAM__DOT__LI__198__rd = 0x17U;
    __Vtask_SOC__DOT__RAM__DOT__LUI__203__imm = (__Vtask_SOC__DOT__RAM__DOT__LI__198__imm 
                                                 + 
                                                 VL_SHIFTL_III(32,32,32, 
                                                               (1U 
                                                                & (__Vtask_SOC__DOT__RAM__DOT__LI__198__imm 
                                                                   >> 0xbU)), 0xcU));
    __Vtask_SOC__DOT__RAM__DOT__LUI__203__rd = __Vtask_SOC__DOT__RAM__DOT__LI__198__rd;
    __Vtask_SOC__DOT__RAM__DOT__UType__204__imm = __Vtask_SOC__DOT__RAM__DOT__LUI__203__imm;
    __Vtask_SOC__DOT__RAM__DOT__UType__204__rd = __Vtask_SOC__DOT__RAM__DOT__LUI__203__rd;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x37U 
                                                   | ((0xfffff000U 
                                                       & __Vtask_SOC__DOT__RAM__DOT__UType__204__imm) 
                                                      | ((IData)(__Vtask_SOC__DOT__RAM__DOT__UType__204__rd) 
                                                         << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    if ((0U != (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__198__imm))) {
        __Vtask_SOC__DOT__RAM__DOT__ADDI__205__imm 
            = (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__198__imm);
        __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rs1 
            = __Vtask_SOC__DOT__RAM__DOT__LI__198__rd;
        __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rd = __Vtask_SOC__DOT__RAM__DOT__LI__198__rd;
        __Vtask_SOC__DOT__RAM__DOT__IType__206__imm 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__205__imm;
        __Vtask_SOC__DOT__RAM__DOT__IType__206__rs1 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rs1;
        __Vtask_SOC__DOT__RAM__DOT__IType__206__rd 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__205__rd;
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
            = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__206__imm 
                         << 0x14U) | (((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__206__rs1) 
                                       << 0xfU) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__206__rd) 
                                                   << 7U))));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                             & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))] 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        }
        SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    }
    VL_WRITEF_NX("exit z val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__exit_Z_);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__L = vlSelf->SOC__DOT__RAM__DOT__exit_Z_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BGT__207__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__208__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BLT__209__imm = __Vtask_SOC__DOT__RAM__DOT__BGT__207__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__210__imm = __Vtask_SOC__DOT__RAM__DOT__BLT__209__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x16bc063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__210__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__210__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__210__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__210__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0xfffd0d13U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__L = vlSelf->SOC__DOT__RAM__DOT__loop_Z_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__213__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__214__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BNE__215__imm = __Vtask_SOC__DOT__RAM__DOT__BNEZ__213__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__216__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__215__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0xd1063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__216__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__216__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__216__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__216__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__Label__217__L = vlSelf->SOC__DOT__RAM__DOT__exit_Z_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__217__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__217__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__exit_Z_ = __Vtask_SOC__DOT__RAM__DOT__Label__217__L;
    __Vtask_SOC__DOT__RAM__DOT__LI__218__imm = vlSelf->SOC__DOT__RAM__DOT__colormap_;
    __Vtask_SOC__DOT__RAM__DOT__LI__218__rd = 0xaU;
    if ((0U == __Vtask_SOC__DOT__RAM__DOT__LI__218__imm)) {
        __Vtask_SOC__DOT__RAM__DOT__ADD__219__rd = __Vtask_SOC__DOT__RAM__DOT__LI__218__rd;
        __Vtask_SOC__DOT__RAM__DOT__RType__220__rd 
            = __Vtask_SOC__DOT__RAM__DOT__ADD__219__rd;
        SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 
            = (0x33U | ((IData)(__Vtask_SOC__DOT__RAM__DOT__RType__220__rd) 
                        << 7U));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                             & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))] 
                = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
        }
        SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    } else if ((VL_LTES_III(32, 0xfffff800U, __Vtask_SOC__DOT__RAM__DOT__LI__218__imm) 
                & VL_GTS_III(32, 0x800U, __Vtask_SOC__DOT__RAM__DOT__LI__218__imm))) {
        __Vtask_SOC__DOT__RAM__DOT__ADDI__221__imm 
            = __Vtask_SOC__DOT__RAM__DOT__LI__218__imm;
        __Vtask_SOC__DOT__RAM__DOT__ADDI__221__rd = __Vtask_SOC__DOT__RAM__DOT__LI__218__rd;
        __Vtask_SOC__DOT__RAM__DOT__IType__222__imm 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__221__imm;
        __Vtask_SOC__DOT__RAM__DOT__IType__222__rd 
            = __Vtask_SOC__DOT__RAM__DOT__ADDI__221__rd;
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
            = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__222__imm 
                         << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__222__rd) 
                                      << 7U)));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                             & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))] 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        }
        SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    } else {
        __Vtask_SOC__DOT__RAM__DOT__LUI__223__imm = 
            (__Vtask_SOC__DOT__RAM__DOT__LI__218__imm 
             + VL_SHIFTL_III(32,32,32, (1U & (__Vtask_SOC__DOT__RAM__DOT__LI__218__imm 
                                              >> 0xbU)), 0xcU));
        __Vtask_SOC__DOT__RAM__DOT__LUI__223__rd = __Vtask_SOC__DOT__RAM__DOT__LI__218__rd;
        __Vtask_SOC__DOT__RAM__DOT__UType__224__imm 
            = __Vtask_SOC__DOT__RAM__DOT__LUI__223__imm;
        __Vtask_SOC__DOT__RAM__DOT__UType__224__rd 
            = __Vtask_SOC__DOT__RAM__DOT__LUI__223__rd;
        SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
            = (0x37U | ((0xfffff000U & __Vtask_SOC__DOT__RAM__DOT__UType__224__imm) 
                        | ((IData)(__Vtask_SOC__DOT__RAM__DOT__UType__224__rd) 
                           << 7U)));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                             & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))] 
                = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
        }
        SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
        if ((0U != (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__218__imm))) {
            __Vtask_SOC__DOT__RAM__DOT__ADDI__225__imm 
                = (0xfffU & __Vtask_SOC__DOT__RAM__DOT__LI__218__imm);
            __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rs1 
                = __Vtask_SOC__DOT__RAM__DOT__LI__218__rd;
            __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rd 
                = __Vtask_SOC__DOT__RAM__DOT__LI__218__rd;
            __Vtask_SOC__DOT__RAM__DOT__IType__226__imm 
                = __Vtask_SOC__DOT__RAM__DOT__ADDI__225__imm;
            __Vtask_SOC__DOT__RAM__DOT__IType__226__rs1 
                = __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rs1;
            __Vtask_SOC__DOT__RAM__DOT__IType__226__rd 
                = __Vtask_SOC__DOT__RAM__DOT__ADDI__225__rd;
            vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
                = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__226__imm 
                             << 0x14U) | (((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__226__rs1) 
                                           << 0xfU) 
                                          | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__226__rd) 
                                             << 7U))));
            if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                >> 2U))))) {
                vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU 
                                                 & (SOC__DOT__RAM__DOT__memPC 
                                                    >> 2U))] 
                    = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
            }
            SOC__DOT__RAM__DOT__memPC = ((IData)(4U) 
                                         + SOC__DOT__RAM__DOT__memPC);
        }
    }
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x1a50533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x54503U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("put c val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__putc_);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__L = vlSelf->SOC__DOT__RAM__DOT__putc_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__231__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__232__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__233__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__231__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__234__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__233__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__234__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__235__imm = (0xfffU 
                                                  & __Vtask_SOC__DOT__RAM__DOT__CALL__231__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__236__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__235__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__236__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x140413U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x3390913U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__L = vlSelf->SOC__DOT__RAM__DOT__loop_x_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNE__241__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__242__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BType__243__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__241__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x1b41063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__243__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__243__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__243__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__243__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__244__imm = 0x20U;
    __Vtask_SOC__DOT__RAM__DOT__LI__244__rd = 0xaU;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__247__imm = __Vtask_SOC__DOT__RAM__DOT__LI__244__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__247__rd = __Vtask_SOC__DOT__RAM__DOT__LI__244__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__248__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__247__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__248__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__247__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__248__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__248__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__L = vlSelf->SOC__DOT__RAM__DOT__putc_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__253__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__254__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__255__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__253__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__256__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__255__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__256__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__257__imm = (0xfffU 
                                                  & __Vtask_SOC__DOT__RAM__DOT__CALL__253__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__258__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__257__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__258__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__259__imm = 0xaU;
    __Vtask_SOC__DOT__RAM__DOT__LI__259__rd = 0xaU;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__262__imm = __Vtask_SOC__DOT__RAM__DOT__LI__259__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__262__rd = __Vtask_SOC__DOT__RAM__DOT__LI__259__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__263__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__262__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__263__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__262__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__263__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__263__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__L = vlSelf->SOC__DOT__RAM__DOT__putc_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__CALL__268__offset = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__269__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__AUIPC__270__imm = __Vtask_SOC__DOT__RAM__DOT__CALL__268__offset;
    __Vtask_SOC__DOT__RAM__DOT__UType__271__imm = __Vtask_SOC__DOT__RAM__DOT__AUIPC__270__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = (0x317U 
                                                   | (0xfffff000U 
                                                      & __Vtask_SOC__DOT__RAM__DOT__UType__271__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__JALR__272__imm = (0xfffU 
                                                  & __Vtask_SOC__DOT__RAM__DOT__CALL__268__offset);
    __Vtask_SOC__DOT__RAM__DOT__IType__273__imm = __Vtask_SOC__DOT__RAM__DOT__JALR__272__imm;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_SOC__DOT__RAM__DOT__IType__273__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x148493U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x3398993U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__L = vlSelf->SOC__DOT__RAM__DOT__loop_y_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNE__278__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__279__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BType__280__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__278__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x1b49063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__280__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__280__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__280__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__280__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__L = vlSelf->SOC__DOT__RAM__DOT__mandelstart_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__J__281__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__282__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__JAL__283__imm = __Vtask_SOC__DOT__RAM__DOT__J__281__imm;
    __Vtask_SOC__DOT__RAM__DOT__JType__284__imm = __Vtask_SOC__DOT__RAM__DOT__JAL__283__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__2 = (0x6fU 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__JType__284__imm 
                                                          << 0xbU)) 
                                                      | ((0x7fe00000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__JType__284__imm 
                                                             << 0x14U)) 
                                                         | ((0x100000U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__JType__284__imm 
                                                                << 9U)) 
                                                            | (0xff000U 
                                                               & __Vtask_SOC__DOT__RAM__DOT__JType__284__imm)))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__2;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__9 = 0x100073U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__9;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__Label__286__L = vlSelf->SOC__DOT__RAM__DOT__wait_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__286__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__286__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__wait_ = __Vtask_SOC__DOT__RAM__DOT__Label__286__L;
    __Vtask_SOC__DOT__RAM__DOT__LI__287__imm = 1U;
    __Vtask_SOC__DOT__RAM__DOT__LI__287__rd = 5U;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__290__imm = __Vtask_SOC__DOT__RAM__DOT__LI__287__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__290__rd = __Vtask_SOC__DOT__RAM__DOT__LI__287__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__291__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__290__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__291__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__290__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__291__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__291__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xc29293U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("wait L0 val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__wait_L0_);
    __Vtask_SOC__DOT__RAM__DOT__Label__298__L = vlSelf->SOC__DOT__RAM__DOT__wait_L0_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__298__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__298__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__wait_L0_ = __Vtask_SOC__DOT__RAM__DOT__Label__298__L;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0xfff28293U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__L = vlSelf->SOC__DOT__RAM__DOT__wait_L0_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__301__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__302__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BNE__303__imm = __Vtask_SOC__DOT__RAM__DOT__BNEZ__301__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__304__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__303__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x29063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__304__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__304__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__304__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__304__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x8067U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__Label__308__L = vlSelf->SOC__DOT__RAM__DOT__putc_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__308__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__308__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__putc_ = __Vtask_SOC__DOT__RAM__DOT__Label__308__L;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0xa1a423U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__LI__312__imm = 0x200U;
    __Vtask_SOC__DOT__RAM__DOT__LI__312__rd = 5U;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__315__imm = __Vtask_SOC__DOT__RAM__DOT__LI__312__imm;
    __Vtask_SOC__DOT__RAM__DOT__ADDI__315__rd = __Vtask_SOC__DOT__RAM__DOT__LI__312__rd;
    __Vtask_SOC__DOT__RAM__DOT__IType__316__imm = __Vtask_SOC__DOT__RAM__DOT__ADDI__315__imm;
    __Vtask_SOC__DOT__RAM__DOT__IType__316__rd = __Vtask_SOC__DOT__RAM__DOT__ADDI__315__rd;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_SOC__DOT__RAM__DOT__IType__316__imm 
                     << 0x14U) | ((IData)(__Vtask_SOC__DOT__RAM__DOT__IType__316__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("putc L0 val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__putc_L0_);
    __Vtask_SOC__DOT__RAM__DOT__Label__321__L = vlSelf->SOC__DOT__RAM__DOT__putc_L0_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__321__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__321__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__putc_L0_ = __Vtask_SOC__DOT__RAM__DOT__Label__321__L;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x101a303U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x537333U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__L = vlSelf->SOC__DOT__RAM__DOT__putc_L0_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__327__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__328__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BNE__329__imm = __Vtask_SOC__DOT__RAM__DOT__BNEZ__327__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__330__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__329__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x31063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__330__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__330__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__330__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__330__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x8067U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__Label__334__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__334__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__334__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_ = __Vtask_SOC__DOT__RAM__DOT__Label__334__L;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x50633U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("mulsi3 L0 val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__mulsi3_L0_);
    __Vtask_SOC__DOT__RAM__DOT__Label__347__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_L0_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__347__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__347__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_L0_ = __Vtask_SOC__DOT__RAM__DOT__Label__347__L;
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x15f693U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    VL_WRITEF_NX("mulsi3 L1 val: %11d\n",0,32,vlSelf->SOC__DOT__RAM__DOT__mulsi3_L1_);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_L1_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BEQZ__350__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__351__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BEQ__352__imm = __Vtask_SOC__DOT__RAM__DOT__BEQZ__350__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__353__imm = __Vtask_SOC__DOT__RAM__DOT__BEQ__352__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x68063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__353__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__353__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__353__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__353__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xc50533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__Label__356__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_L1_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__356__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__356__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_L1_ = __Vtask_SOC__DOT__RAM__DOT__Label__356__L;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x15d593U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x161613U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__L = vlSelf->SOC__DOT__RAM__DOT__mulsi3_L0_;
    __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__Vfuncout 
        = (__Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__L 
           - SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__BNEZ__361__imm = __Vfunc_SOC__DOT__RAM__DOT__LabelRef__362__Vfuncout;
    __Vtask_SOC__DOT__RAM__DOT__BNE__363__imm = __Vtask_SOC__DOT__RAM__DOT__BNEZ__361__imm;
    __Vtask_SOC__DOT__RAM__DOT__BType__364__imm = __Vtask_SOC__DOT__RAM__DOT__BNE__363__imm;
    SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = (0x59063U 
                                                   | ((0x80000000U 
                                                       & (__Vtask_SOC__DOT__RAM__DOT__BType__364__imm 
                                                          << 0x13U)) 
                                                      | ((0x7e000000U 
                                                          & (__Vtask_SOC__DOT__RAM__DOT__BType__364__imm 
                                                             << 0x14U)) 
                                                         | ((0xf00U 
                                                             & (__Vtask_SOC__DOT__RAM__DOT__BType__364__imm 
                                                                << 7U)) 
                                                            | (0x80U 
                                                               & (__Vtask_SOC__DOT__RAM__DOT__BType__364__imm 
                                                                  >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x8067U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    __Vtask_SOC__DOT__RAM__DOT__Label__368__L = vlSelf->SOC__DOT__RAM__DOT__colormap_;
    if (VL_UNLIKELY((__Vtask_SOC__DOT__RAM__DOT__Label__368__L 
                     != SOC__DOT__RAM__DOT__memPC))) {
        VL_WRITEF_NX("Incorrect label initialization\n",0);
        vlSelf->SOC__DOT__RAM__DOT__ASMerror = 1U;
        VL_WRITEF_NX("Expected: %0d    Got: %0d\n",0,
                     32,SOC__DOT__RAM__DOT__memPC,32,
                     __Vtask_SOC__DOT__RAM__DOT__Label__368__L);
    }
    VL_WRITEF_NX("Label:%11d\n",0,32,SOC__DOT__RAM__DOT__memPC);
    vlSelf->SOC__DOT__RAM__DOT__colormap_ = __Vtask_SOC__DOT__RAM__DOT__Label__368__L;
    SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0 = 0x20U;
    SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0 = 0x2eU;
    SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0 = 0x2cU;
    SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0 = 0x3aU;
    if ((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                              >> 2U)))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | (IData)(SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0) 
                                         << 8U));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0) 
                                         << 0x10U));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0) 
                                         << 0x18U));
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0 = 0x3bU;
    SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0 = 0x6fU;
    SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0 = 0x78U;
    SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0 = 0x25U;
    if ((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                              >> 2U)))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | (IData)(SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0) 
                                         << 8U));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0) 
                                         << 0x10U));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0) 
                                         << 0x18U));
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0 = 0x23U;
    SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0 = 0x40U;
    SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0 = 0U;
    SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0 = 0U;
    if ((0x5ffU >= (0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                              >> 2U)))) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffffff00U & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | (IData)(SOC__DOT__RAM__DOT____Vlvbound_hc955f7b5__0));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffff00ffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hc9516595__0) 
                                         << 8U));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xff00ffffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hca1c93b0__0) 
                                         << 0x10U));
        vlSelf->SOC__DOT__RAM__DOT__MEM[(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                                                   >> 2U))] 
            = ((0xffffffU & vlSelf->SOC__DOT__RAM__DOT__MEM
                [(0x7ffU & (SOC__DOT__RAM__DOT__memPC 
                            >> 2U))]) | ((IData)(SOC__DOT__RAM__DOT____Vlvbound_hca1f15b4__0) 
                                         << 0x18U));
    }
    SOC__DOT__RAM__DOT__memPC = ((IData)(4U) + SOC__DOT__RAM__DOT__memPC);
    if (VL_UNLIKELY((0U != vlSelf->SOC__DOT__RAM__DOT__ASMerror))) {
        VL_FINISH_MT("riscv_assembly.v", 642, "");
    }
}

VL_ATTR_COLD void VSOC___024root___eval_final(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__stl(VSOC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSOC___024root___eval_phase__stl(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_settle(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_settle\n"); );
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
            VSOC___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("step18.v", 503, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSOC___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__stl(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSOC___024root___stl_sequent__TOP__0(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_stl(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSOC___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> VSOC__ConstPool__TABLE_hf5830c44_0;

VL_ATTR_COLD void VSOC___024root___stl_sequent__TOP__0(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ SOC__DOT__CPU__DOT__Iimm;
    SOC__DOT__CPU__DOT__Iimm = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluIn2;
    SOC__DOT__CPU__DOT__aluIn2 = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluPlus;
    SOC__DOT__CPU__DOT__aluPlus = 0;
    QData/*32:0*/ SOC__DOT__CPU__DOT__aluMinus;
    SOC__DOT__CPU__DOT__aluMinus = 0;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LT;
    SOC__DOT__CPU__DOT__LT = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__shifter_in;
    SOC__DOT__CPU__DOT__shifter_in = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__shifter;
    SOC__DOT__CPU__DOT__shifter = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__leftshift;
    SOC__DOT__CPU__DOT__leftshift = 0;
    CData/*0:0*/ SOC__DOT__CPU__DOT__takeBranch;
    SOC__DOT__CPU__DOT__takeBranch = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PCplusImm;
    SOC__DOT__CPU__DOT__PCplusImm = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__loadstore_addr;
    SOC__DOT__CPU__DOT__loadstore_addr = 0;
    SData/*15:0*/ SOC__DOT__CPU__DOT__LOAD_halfword;
    SOC__DOT__CPU__DOT__LOAD_halfword = 0;
    CData/*7:0*/ SOC__DOT__CPU__DOT__LOAD_byte;
    SOC__DOT__CPU__DOT__LOAD_byte = 0;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LOAD_sign;
    SOC__DOT__CPU__DOT__LOAD_sign = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->TXD = (1U & ((~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data)))) 
                         | (IData)(vlSelf->SOC__DOT__UART__DOT__data)));
    vlSelf->SOC__DOT__CPU__DOT__rdId = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                 >> 7U));
    vlSelf->SOC__DOT__CPU__DOT__rs1Id = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                  >> 0xfU));
    vlSelf->SOC__DOT__CPU__DOT__rs2Id = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                  >> 0x14U));
    vlSelf->SOC__DOT__CPU__DOT__isSYSTEM = (0x73U == 
                                            (0x7fU 
                                             & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT__isLoad = (3U == (0x7fU 
                                                 & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0 
        = (0x7fU & vlSelf->SOC__DOT__CPU__DOT__instr);
    vlSelf->SOC__DOT__resetn = (0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt));
    vlSelf->SOC__DOT__CPU__DOT__writeBackEn = (((~ 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                                  | (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)))) 
                                                & (3U 
                                                   == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) 
                                               | (5U 
                                                  == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)));
    SOC__DOT__CPU__DOT__PCplusImm = (vlSelf->SOC__DOT__CPU__DOT__PC 
                                     + ((8U & vlSelf->SOC__DOT__CPU__DOT__instr)
                                         ? (((- (IData)(
                                                        (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                        >> 0x14U)))))
                                         : ((0x10U 
                                             & vlSelf->SOC__DOT__CPU__DOT__instr)
                                             ? (0xfffff000U 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr)
                                             : (((- (IData)(
                                                            (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                            >> 7U))))))));
    SOC__DOT__CPU__DOT__shifter_in = ((1U == (7U & 
                                              (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? ([&]() {
                vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                    = vlSelf->SOC__DOT__CPU__DOT__rs1;
                vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout 
                    = ((vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                       << 0x1dU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                          << 0x1bU)) 
                                      | ((0x10000000U 
                                          & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                << 0x17U)) 
                                            | ((0x4000000U 
                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                         << 0x11U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                            << 0xfU)) 
                                                        | ((0x400000U 
                                                            & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                               << 0xdU)) 
                                                           | ((0x200000U 
                                                               & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                  << 0xbU)) 
                                                              | ((0x100000U 
                                                                  & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                     << 9U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                        << 7U)) 
                                                                    | ((0x40000U 
                                                                        & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                           << 5U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                              << 3U)) 
                                                                          | ((0x10000U 
                                                                              & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                << 1U)) 
                                                                             | ((0x8000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
            }(), vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout)
                                       : vlSelf->SOC__DOT__CPU__DOT__rs1);
    SOC__DOT__CPU__DOT__Iimm = (((- (IData)((vlSelf->SOC__DOT__CPU__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xbU) | (0x7ffU 
                                             & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                >> 0x14U)));
    SOC__DOT__CPU__DOT__aluIn2 = (((0x33U == (0x7fU 
                                              & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                   | (0x63U == (0x7fU 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                   ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                   : SOC__DOT__CPU__DOT__Iimm);
    SOC__DOT__CPU__DOT__loadstore_addr = (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                          + ((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->SOC__DOT__CPU__DOT__instr))
                                              ? (((- (IData)(
                                                             (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 7U))))
                                              : SOC__DOT__CPU__DOT__Iimm));
    SOC__DOT__CPU__DOT__aluPlus = (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                   + SOC__DOT__CPU__DOT__aluIn2);
    SOC__DOT__CPU__DOT__shifter = (IData)((0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(33,33,5, 
                                                            (((QData)((IData)(
                                                                              ((vlSelf->SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x1eU) 
                                                                               & (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x1fU)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(SOC__DOT__CPU__DOT__shifter_in))), 
                                                            (0x1fU 
                                                             & SOC__DOT__CPU__DOT__aluIn2))));
    SOC__DOT__CPU__DOT__aluMinus = (0x1ffffffffULL 
                                    & (1ULL + ((0x100000000ULL 
                                                | (QData)((IData)(
                                                                  (~ SOC__DOT__CPU__DOT__aluIn2)))) 
                                               + (QData)((IData)(vlSelf->SOC__DOT__CPU__DOT__rs1)))));
    vlSelf->SOC__DOT__mem_wdata = ((((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                      ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                      : ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                          ? (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                             >> 8U)
                                          : (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                             >> 0x18U))) 
                                    << 0x18U) | ((0xff0000U 
                                                  & (((2U 
                                                       & SOC__DOT__CPU__DOT__loadstore_addr)
                                                       ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                                       : 
                                                      (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                       >> 0x10U)) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((1U 
                                                          & SOC__DOT__CPU__DOT__loadstore_addr)
                                                          ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                                          : 
                                                         (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                          >> 8U)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSelf->SOC__DOT__CPU__DOT__rs2))));
    vlSelf->SOC__DOT__mem_wmask = ((- (IData)((6U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)))) 
                                   & ((0U == (3U & 
                                              (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                           ? ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 8U
                                               : 4U)
                                           : ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 2U
                                               : 1U))
                                       : ((1U == (3U 
                                                  & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                     >> 0xcU)))
                                           ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 0xcU
                                               : 3U)
                                           : 0xfU)));
    vlSelf->SOC__DOT__mem_addr = (((1U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)) 
                                   | (0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)))
                                   ? vlSelf->SOC__DOT__CPU__DOT__PC
                                   : SOC__DOT__CPU__DOT__loadstore_addr);
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x = SOC__DOT__CPU__DOT__shifter;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout 
        = ((__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    SOC__DOT__CPU__DOT__leftshift = __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout;
    SOC__DOT__CPU__DOT__LT = (1U & (((vlSelf->SOC__DOT__CPU__DOT__rs1 
                                      ^ SOC__DOT__CPU__DOT__aluIn2) 
                                     >> 0x1fU) ? (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                  >> 0x1fU)
                                     : (IData)((SOC__DOT__CPU__DOT__aluMinus 
                                                >> 0x20U))));
    vlSelf->SOC__DOT__uart_valid = (IData)(((0x400008U 
                                             == (0x400008U 
                                                 & vlSelf->SOC__DOT__mem_addr)) 
                                            & (0U != (IData)(vlSelf->SOC__DOT__mem_wmask))));
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = 
        ((- (IData)((1U & (~ (vlSelf->SOC__DOT__mem_addr 
                              >> 0x16U))))) & (IData)(vlSelf->SOC__DOT__mem_wmask));
    vlSelf->SOC__DOT__mem_rdata = ((0x400000U & vlSelf->SOC__DOT__mem_addr)
                                    ? ((0x10U & vlSelf->SOC__DOT__mem_addr)
                                        ? (0x200U & 
                                           ((~ (IData)(vlSelf->SOC__DOT__uart_ready)) 
                                            << 9U))
                                        : 0U) : vlSelf->SOC__DOT__RAM_rdata);
    __Vtableidx1 = (((0U == (IData)(SOC__DOT__CPU__DOT__aluMinus)) 
                     << 8U) | (((0U != (IData)(SOC__DOT__CPU__DOT__aluMinus)) 
                                << 7U) | (((IData)(SOC__DOT__CPU__DOT__LT) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((~ (IData)(SOC__DOT__CPU__DOT__LT)) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((IData)(
                                                          (SOC__DOT__CPU__DOT__aluMinus 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ (IData)(
                                                                (SOC__DOT__CPU__DOT__aluMinus 
                                                                 >> 0x20U))) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                       >> 0xcU))))))));
    SOC__DOT__CPU__DOT__takeBranch = VSOC__ConstPool__TABLE_hf5830c44_0
        [__Vtableidx1];
    SOC__DOT__CPU__DOT__LOAD_halfword = (0xffffU & 
                                         ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                           ? (vlSelf->SOC__DOT__mem_rdata 
                                              >> 0x10U)
                                           : vlSelf->SOC__DOT__mem_rdata));
    vlSelf->SOC__DOT__CPU__DOT__nextPC = ((((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                            & (IData)(SOC__DOT__CPU__DOT__takeBranch)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                           ? SOC__DOT__CPU__DOT__PCplusImm
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->SOC__DOT__CPU__DOT__instr))
                                               ? (0xfffffffeU 
                                                  & SOC__DOT__CPU__DOT__aluPlus)
                                               : ((IData)(4U) 
                                                  + vlSelf->SOC__DOT__CPU__DOT__PC)));
    SOC__DOT__CPU__DOT__LOAD_byte = (0xffU & ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? ((IData)(SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                  >> 8U)
                                               : (IData)(SOC__DOT__CPU__DOT__LOAD_halfword)));
    SOC__DOT__CPU__DOT__LOAD_sign = (1U & ((~ (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xeU)) 
                                           & ((0U == 
                                               (3U 
                                                & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((IData)(SOC__DOT__CPU__DOT__LOAD_byte) 
                                                  >> 7U)
                                               : ((IData)(SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                  >> 0xfU))));
    vlSelf->SOC__DOT__CPU__DOT__writeBackData = (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->SOC__DOT__CPU__DOT__PC)
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                    ? SOC__DOT__CPU__DOT__PCplusImm
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 
                                                     (((- (IData)((IData)(SOC__DOT__CPU__DOT__LOAD_sign))) 
                                                       << 8U) 
                                                      | (IData)(SOC__DOT__CPU__DOT__LOAD_byte))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 
                                                      (((- (IData)((IData)(SOC__DOT__CPU__DOT__LOAD_sign))) 
                                                        << 0x10U) 
                                                       | (IData)(SOC__DOT__CPU__DOT__LOAD_halfword))
                                                       : vlSelf->SOC__DOT__mem_rdata))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        & SOC__DOT__CPU__DOT__aluIn2)
                                                        : 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        | SOC__DOT__CPU__DOT__aluIn2))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? SOC__DOT__CPU__DOT__shifter
                                                        : 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        ^ SOC__DOT__CPU__DOT__aluIn2)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? 
                                                       (1U 
                                                        & (IData)(
                                                                  (SOC__DOT__CPU__DOT__aluMinus 
                                                                   >> 0x20U)))
                                                        : (IData)(SOC__DOT__CPU__DOT__LT))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? SOC__DOT__CPU__DOT__leftshift
                                                        : 
                                                       ((IData)(
                                                                (0x40000020U 
                                                                 == 
                                                                 (0x40000020U 
                                                                  & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                                         ? (IData)(SOC__DOT__CPU__DOT__aluMinus)
                                                         : SOC__DOT__CPU__DOT__aluPlus))))))));
}

VL_ATTR_COLD void VSOC___024root___eval_triggers__stl(VSOC___024root* vlSelf);

VL_ATTR_COLD bool VSOC___024root___eval_phase__stl(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSOC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSOC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__act(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge CLK or posedge RESET)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__nba(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge CLK or posedge RESET)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSOC___024root___ctor_var_reset(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RESET = VL_RAND_RESET_I(1);
    vlSelf->LEDS = VL_RAND_RESET_I(5);
    vlSelf->RXD = VL_RAND_RESET_I(1);
    vlSelf->TXD = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__RAM_rdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__rs1Id = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__CPU__DOT__rs2Id = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__CPU__DOT__rdId = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SOC__DOT__CPU__DOT__RegisterBank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SOC__DOT__CPU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__writeBackEn = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__nextPC = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->SOC__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0 = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 1536; ++__Vi0) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SOC__DOT__RAM__DOT__ASMerror = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__mandelstart_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__blink_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__loop_y_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__loop_x_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__loop_Z_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__exit_Z_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__wait_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__wait_L0_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__putc_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__putc_L0_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_L0_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__mulsi3_L1_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT__colormap_ = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h94aa63f7__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h949060f2__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h948ec0b2__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_h948d60f5__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__UART__DOT__cnt = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__UART__DOT__data = VL_RAND_RESET_I(10);
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__RESET__0 = VL_RAND_RESET_I(1);
}
