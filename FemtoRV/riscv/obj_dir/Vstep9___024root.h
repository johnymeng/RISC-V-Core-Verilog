// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstep9.h for the primary calling header

#ifndef VERILATED_VSTEP9___024ROOT_H_
#define VERILATED_VSTEP9___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstep9__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstep9___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bench__DOT__CLK;
    CData/*0:0*/ bench__DOT__uut__DOT__clk;
    CData/*4:0*/ bench__DOT__prev_LEDS;
    CData/*4:0*/ bench__DOT__uut__DOT__leds;
    CData/*0:0*/ bench__DOT__uut__DOT__isSYSTEM;
    CData/*4:0*/ bench__DOT__uut__DOT__rs1Id;
    CData/*4:0*/ bench__DOT__uut__DOT__rs2Id;
    CData/*4:0*/ bench__DOT__uut__DOT__rdId;
    CData/*0:0*/ bench__DOT__uut__DOT__writeBackEn;
    CData/*4:0*/ bench__DOT__uut__DOT__shamt;
    CData/*1:0*/ bench__DOT__uut__DOT__state;
    CData/*0:0*/ bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ bench__DOT__uut__DOT__PC;
    IData/*31:0*/ bench__DOT__uut__DOT__instr;
    IData/*31:0*/ bench__DOT__uut__DOT__memPC;
    IData/*31:0*/ bench__DOT__uut__DOT__L0_;
    IData/*31:0*/ bench__DOT__uut__DOT__Iimm;
    IData/*31:0*/ bench__DOT__uut__DOT__rs1;
    IData/*31:0*/ bench__DOT__uut__DOT__rs2;
    IData/*31:0*/ bench__DOT__uut__DOT__writeBackData;
    IData/*31:0*/ bench__DOT__uut__DOT__i;
    IData/*31:0*/ bench__DOT__uut__DOT__aluIn2;
    IData/*31:0*/ bench__DOT__uut__DOT__nextPC;
    IData/*19:0*/ bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> bench__DOT__uut__DOT__MEM;
    VlUnpacked<IData/*31:0*/, 32> bench__DOT__uut__DOT__RegisterBank;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstep9__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstep9___024root(Vstep9__Syms* symsp, const char* v__name);
    ~Vstep9___024root();
    VL_UNCOPYABLE(Vstep9___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
