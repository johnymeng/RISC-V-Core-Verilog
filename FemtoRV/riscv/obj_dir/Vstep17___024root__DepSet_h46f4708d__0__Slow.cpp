// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep17.h for the primary calling header

#include "Vstep17__pch.h"
#include "Vstep17___024root.h"

VL_ATTR_COLD void Vstep17___024root___eval_static__TOP(Vstep17___024root* vlSelf);

VL_ATTR_COLD void Vstep17___024root___eval_static(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_static\n"); );
    // Body
    Vstep17___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vstep17___024root___eval_static__TOP(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bench__DOT__prev_LEDS = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = 0U;
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = 0U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = 0xcU;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = 0x14U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_ = 0x34U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = 0x68U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_ = 0x70U;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_ = 0x7cU;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_ = 0x84U;
    vlSelf->bench__DOT__uut__DOT__UART__DOT__cnt = 0U;
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0U;
}

VL_ATTR_COLD void Vstep17___024root___eval_initial__TOP(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__2;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__2 = 0;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3 = 0;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 = 0;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__9;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__9 = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rd = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rs1;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rs1 = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rd = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rs1;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rs1 = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rd = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rs1;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rs1 = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rd = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rs1;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rs1 = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__20__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__20__L = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__39__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__39__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__43__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__43__offset = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__45__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__45__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__46__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__46__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__47__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__47__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__48__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__48__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__51__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__51__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__81__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__81__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__82__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__82__offset = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__84__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__84__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__85__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__85__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__86__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__86__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__87__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__87__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__92__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__92__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__104__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__104__offset = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__106__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__106__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__107__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__107__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__108__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__108__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__109__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__109__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__119__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__119__offset = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__121__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__121__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__122__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__122__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__123__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__123__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__124__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__124__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__J__125__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__J__125__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__127__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__127__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__130__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__130__L = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__142__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__142__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__145__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__145__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__147__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__147__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__152__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__152__L = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__imm = 0;
    CData/*4:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__rd = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__165__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__165__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__171__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__171__imm = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__L = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__173__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__173__imm = 0;
    IData/*31:0*/ __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm = 0;
    // Body
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
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vxrand_h8df4b479__0 
        = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 0U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm = 0x1800U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__rd = 2U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__imm 
        = (__Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm 
           + VL_SHIFTL_III(32,32,32, (1U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm 
                                            >> 0xbU)), 0xcU));
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__7__rd;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
        = (0x37U | ((0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__imm) 
                    | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__8__rd) 
                       << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    if ((0U != (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm))) {
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__imm 
            = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__imm);
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rs1 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__rd;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rd 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__2__rd;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__imm 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__imm;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rs1 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rs1;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rd 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__9__rd;
        vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
            = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__imm 
                         << 0x14U) | (((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rs1) 
                                       << 0xfU) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__10__rd) 
                                                   << 7U))));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                         & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                            >> 2U))] 
                = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        }
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
            = ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    }
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm = 0x400000U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__rd = 3U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__imm 
        = (__Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm 
           + VL_SHIFTL_III(32,32,32, (1U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm 
                                            >> 0xbU)), 0xcU));
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LUI__16__rd;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
        = (0x37U | ((0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__imm) 
                    | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__17__rd) 
                       << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    if ((0U != (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm))) {
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__imm 
            = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__imm);
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rs1 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__rd;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rd 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__11__rd;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__imm 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__imm;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rs1 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rs1;
        __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rd 
            = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__18__rd;
        vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
            = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__imm 
                         << 0x14U) | (((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rs1) 
                                       << 0xfU) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__19__rd) 
                                                   << 7U))));
        if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                            >> 2U))))) {
            vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                         & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                            >> 2U))] 
                = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        }
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
            = ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    }
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__20__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__20__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__imm = 0x10U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__rd = 8U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__21__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__24__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__25__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x533U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__39__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__39__L;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0xa1a223U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__43__offset 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__44__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__45__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__43__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__46__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__45__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
        = (0x317U | (0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__46__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__47__imm 
        = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__43__offset);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__48__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__47__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__48__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x150513U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__51__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__52__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__51__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3 
        = (0x851063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm 
                                        << 0x13U)) 
                        | ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm 
                                           << 0x14U)) 
                           | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm 
                                         << 7U)) | 
                              (0x80U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__53__imm 
                                        >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__imm = 0x1aU;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__rd = 8U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__54__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__57__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__58__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__imm = 0x61U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__rd = 0xaU;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__63__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__66__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__67__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x4b3U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__81__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__81__L;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__82__offset 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__83__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__84__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__82__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__85__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__84__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
        = (0x317U | (0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__85__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__86__imm 
        = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__82__offset);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__87__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__86__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__87__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x150513U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x148493U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__92__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__93__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__92__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3 
        = (0x849063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm 
                                        << 0x13U)) 
                        | ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm 
                                           << 0x14U)) 
                           | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm 
                                         << 7U)) | 
                              (0x80U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__94__imm 
                                        >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__imm = 0xdU;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__rd = 0xaU;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__95__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__98__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__99__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__104__offset 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__105__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__106__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__104__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__107__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__106__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
        = (0x317U | (0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__107__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__108__imm 
        = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__104__offset);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__109__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__108__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__109__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__imm = 0xaU;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__rd = 0xaU;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__110__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__113__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__114__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__119__offset 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__120__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__121__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__119__offset;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__122__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__AUIPC__121__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4 
        = (0x317U | (0xfffff000U & __Vtask_bench__DOT__uut__DOT__RAM__DOT__UType__122__imm));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__4;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__123__imm 
        = (0xfffU & __Vtask_bench__DOT__uut__DOT__RAM__DOT__CALL__119__offset);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__124__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JALR__123__imm;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x300e7U | (__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__124__imm 
                       << 0x14U));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__J__125__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__126__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__127__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__J__125__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__JAL__127__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__2 
        = (0x6fU | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm 
                                    << 0xbU)) | ((0x7fe00000U 
                                                  & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm 
                                                     << 0x14U)) 
                                                 | ((0x100000U 
                                                     & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm 
                                                        << 9U)) 
                                                    | (0xff000U 
                                                       & __Vtask_bench__DOT__uut__DOT__RAM__DOT__JType__128__imm)))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__2;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__9 = 0x100073U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__9;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__130__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__130__L;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__imm = 1U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__rd = 5U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__131__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__134__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__135__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0xc29293U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__142__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_ 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__142__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0xfff28293U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__145__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__146__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__147__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__145__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__147__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3 
        = (0x29063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm 
                                       << 0x13U)) | 
                       ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm 
                                        << 0x14U)) 
                        | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm 
                                      << 7U)) | (0x80U 
                                                 & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__148__imm 
                                                    >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x8067U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__152__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_ = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__152__L;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__5 = 0xa1a423U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__5;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__imm = 0x200U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__rd = 5U;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__LI__156__rd;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__rd 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__ADDI__159__rd;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 
        = (0x13U | ((__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__imm 
                     << 0x14U) | ((IData)(__Vtask_bench__DOT__uut__DOT__RAM__DOT__IType__160__rd) 
                                  << 7U)));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__165__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_ 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__Label__165__L;
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x101a303U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0 = 0x537333U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__0;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__L 
        = vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_;
    __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__Vfuncout 
        = (__Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__L 
           - vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__171__imm 
        = __Vfunc_bench__DOT__uut__DOT__RAM__DOT__LabelRef__172__Vfuncout;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__173__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNEZ__171__imm;
    __Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm 
        = __Vtask_bench__DOT__uut__DOT__RAM__DOT__BNE__173__imm;
    bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3 
        = (0x31063U | ((0x80000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm 
                                       << 0x13U)) | 
                       ((0x7e000000U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm 
                                        << 0x14U)) 
                        | ((0xf00U & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm 
                                      << 7U)) | (0x80U 
                                                 & (__Vtask_bench__DOT__uut__DOT__RAM__DOT__BType__174__imm 
                                                    >> 4U))))));
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__3;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = 0x8067U;
    if (VL_LIKELY((0x5ffU >= (0x7ffU & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                        >> 2U))))) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[(0x7ffU 
                                                     & (vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC 
                                                        >> 2U))] 
            = vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = 
        ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC);
}

VL_ATTR_COLD void Vstep17___024root___eval_final(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep17___024root___dump_triggers__stl(Vstep17___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstep17___024root___eval_phase__stl(Vstep17___024root* vlSelf);

VL_ATTR_COLD void Vstep17___024root___eval_settle(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_settle\n"); );
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
            Vstep17___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("bench_iverilog.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstep17___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep17___024root___dump_triggers__stl(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstep17___024root___stl_sequent__TOP__0(Vstep17___024root* vlSelf);

VL_ATTR_COLD void Vstep17___024root___eval_stl(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstep17___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vstep17__ConstPool__TABLE_hf5830c44_0;

VL_ATTR_COLD void Vstep17___024root___stl_sequent__TOP__0(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__Vfuncout;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x = 0;
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0 
        = (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr);
    vlSelf->bench__DOT__uut__DOT__resetn = (0xffffU 
                                            == (IData)(vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__writeBackEn 
        = (((~ ((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
                | (0x23U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))) 
            & (3U == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state))) 
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
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                    = vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1;
                vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__Vfuncout 
                    = ((vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                       << 0x1dU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                          << 0x1bU)) 
                                      | ((0x10000000U 
                                          & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                << 0x17U)) 
                                            | ((0x4000000U 
                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                         << 0x11U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                            << 0xfU)) 
                                                        | ((0x400000U 
                                                            & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                               << 0xdU)) 
                                                           | ((0x200000U 
                                                               & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                  << 0xbU)) 
                                                              | ((0x100000U 
                                                                  & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                     << 9U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                        << 7U)) 
                                                                    | ((0x40000U 
                                                                        & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                           << 5U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                              << 3U)) 
                                                                          | ((0x10000U 
                                                                              & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                << 1U)) 
                                                                             | ((0x8000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
            }(), vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__Vfuncout)
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm = 
        (((- (IData)((vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                      >> 0x1fU))) << 0xbU) | (0x7ffU 
                                              & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                 >> 0x14U)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluIn2 
        = (((0x33U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
            | (0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__rs2
            : vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm);
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
    vlSelf->bench__DOT__uut__DOT__mem_addr = (((1U 
                                                == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)) 
                                               | (0U 
                                                  == (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__state)))
                                               ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC
                                               : vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr);
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
        = vlSelf->bench__DOT__uut__DOT__CPU__DOT__shifter;
    __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__Vfuncout 
        = ((__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__leftshift 
        = __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__1__Vfuncout;
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
    vlSelf->bench__DOT__uut__DOT__uart_valid = (IData)(
                                                       ((0x400008U 
                                                         == 
                                                         (0x400008U 
                                                          & vlSelf->bench__DOT__uut__DOT__mem_addr)) 
                                                        & (0U 
                                                           != (IData)(vlSelf->bench__DOT__uut__DOT__mem_wmask))));
    vlSelf->bench__DOT__uut__DOT____Vcellinp__RAM__mem_wmask 
        = ((- (IData)((1U & (~ (vlSelf->bench__DOT__uut__DOT__mem_addr 
                                >> 0x16U))))) & (IData)(vlSelf->bench__DOT__uut__DOT__mem_wmask));
    vlSelf->bench__DOT__uut__DOT__mem_rdata = ((0x400000U 
                                                & vlSelf->bench__DOT__uut__DOT__mem_addr)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->bench__DOT__uut__DOT__mem_addr)
                                                    ? 
                                                   (0x200U 
                                                    & ((~ (IData)(vlSelf->bench__DOT__uut__DOT__uart_ready)) 
                                                       << 9U))
                                                    : 0U)
                                                : vlSelf->bench__DOT__uut__DOT__RAM_rdata);
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
        = Vstep17__ConstPool__TABLE_hf5830c44_0[__Vtableidx1];
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword 
        = (0xffffU & ((2U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                       ? (vlSelf->bench__DOT__uut__DOT__mem_rdata 
                          >> 0x10U) : vlSelf->bench__DOT__uut__DOT__mem_rdata));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__nextPC 
        = ((((0x63U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)) 
             & (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__takeBranch)) 
            | (0x6fU == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr)))
            ? vlSelf->bench__DOT__uut__DOT__CPU__DOT__PCplusImm
            : ((0x67U == (0x7fU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr))
                ? (0xfffffffeU & vlSelf->bench__DOT__uut__DOT__CPU__DOT__aluPlus)
                : ((IData)(4U) + vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte 
        = (0xffU & ((1U & vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr)
                     ? ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword) 
                        >> 8U) : (IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword)));
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign 
        = (1U & ((~ (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                     >> 0xeU)) & ((0U == (3U & (vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr 
                                                >> 0xcU)))
                                   ? ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte) 
                                      >> 7U) : ((IData)(vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword) 
                                                >> 0xfU))));
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
}

VL_ATTR_COLD void Vstep17___024root___eval_triggers__stl(Vstep17___024root* vlSelf);

VL_ATTR_COLD bool Vstep17___024root___eval_phase__stl(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstep17___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstep17___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstep17___024root___dump_triggers__act(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vstep17___024root___dump_triggers__nba(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vstep17___024root___ctor_var_reset(Vstep17___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstep17___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->bench__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__prev_LEDS = VL_RAND_RESET_I(5);
    vlSelf->bench__DOT__uut__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->bench__DOT__uut__DOT__RAM_rdata = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT____Vcellinp__RAM__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->bench__DOT__uut__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__Iimm = VL_RAND_RESET_I(32);
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
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__loadstore_addr = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword = VL_RAND_RESET_I(16);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_byte = VL_RAND_RESET_I(8);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__LOAD_sign = VL_RAND_RESET_I(1);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0 = VL_RAND_RESET_I(7);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vxrand_h8df4b479__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1536; ++__Vi0) {
        vlSelf->bench__DOT__uut__DOT__RAM__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__memPC = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L0_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L1_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__L2_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__wait_L0_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT__putc_L0_ = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_hebd520d8__1 = VL_RAND_RESET_I(32);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_h94aa63f7__0 = VL_RAND_RESET_I(8);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_h949060f2__0 = VL_RAND_RESET_I(8);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_h948ec0b2__0 = VL_RAND_RESET_I(8);
    vlSelf->bench__DOT__uut__DOT__RAM__DOT____Vlvbound_h948d60f5__0 = VL_RAND_RESET_I(8);
    vlSelf->bench__DOT__uut__DOT__UART__DOT__cnt = VL_RAND_RESET_I(12);
    vlSelf->bench__DOT__uut__DOT__UART__DOT__data = VL_RAND_RESET_I(10);
    vlSelf->bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__bench__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
