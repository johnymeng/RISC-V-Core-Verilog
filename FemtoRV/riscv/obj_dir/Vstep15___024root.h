// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstep15.h for the primary calling header

#ifndef VERILATED_VSTEP15___024ROOT_H_
#define VERILATED_VSTEP15___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstep15__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstep15___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bench__DOT__CLK;
    CData/*4:0*/ bench__DOT__prev_LEDS;
    CData/*0:0*/ bench__DOT__uut__DOT__resetn;
    CData/*0:0*/ bench__DOT__uut__DOT__CPU__DOT__isSYSTEM;
    CData/*4:0*/ bench__DOT__uut__DOT__CPU__DOT__rs1Id;
    CData/*4:0*/ bench__DOT__uut__DOT__CPU__DOT__rs2Id;
    CData/*4:0*/ bench__DOT__uut__DOT__CPU__DOT__rdId;
    CData/*0:0*/ bench__DOT__uut__DOT__CPU__DOT__writeBackEn;
    CData/*0:0*/ bench__DOT__uut__DOT__CPU__DOT__LT;
    CData/*0:0*/ bench__DOT__uut__DOT__CPU__DOT__takeBranch;
    CData/*7:0*/ bench__DOT__uut__DOT__CPU__DOT__LOAD_byte;
    CData/*0:0*/ bench__DOT__uut__DOT__CPU__DOT__LOAD_sign;
    CData/*2:0*/ bench__DOT__uut__DOT__CPU__DOT__state;
    CData/*6:0*/ bench__DOT__uut__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ bench__DOT__uut__DOT__CPU__DOT__LOAD_halfword;
    SData/*15:0*/ bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    IData/*31:0*/ bench__DOT__uut__DOT__mem_rdata;
    IData/*31:0*/ bench__DOT__uut__DOT__x10;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT__memPC;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT__L0_;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT__wait_;
    IData/*31:0*/ bench__DOT__uut__DOT__RAM__DOT__L1_;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__PC;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__instr;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__Iimm;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__rs1;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__rs2;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__writeBackData;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__i;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__aluIn2;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__aluPlus;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__shifter_in;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__shifter;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__leftshift;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__PCplusImm;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__nextPC;
    IData/*31:0*/ bench__DOT__uut__DOT__CPU__DOT__loadstore_addr;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__Vfuncout;
    IData/*31:0*/ __Vfunc_bench__DOT__uut__DOT__CPU__DOT__flip32__56__x;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ bench__DOT__uut__DOT__CPU__DOT__aluMinus;
    VlUnpacked<IData/*31:0*/, 256> bench__DOT__uut__DOT__RAM__DOT__MEM;
    VlUnpacked<IData/*31:0*/, 32> bench__DOT__uut__DOT__CPU__DOT__RegisterBank;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstep15__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstep15___024root(Vstep15__Syms* symsp, const char* v__name);
    ~Vstep15___024root();
    VL_UNCOPYABLE(Vstep15___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
