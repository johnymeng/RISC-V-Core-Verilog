// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstep5.h for the primary calling header

#ifndef VERILATED_VSTEP5___024ROOT_H_
#define VERILATED_VSTEP5___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstep5__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstep5___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bench__DOT__CLK;
    CData/*0:0*/ bench__DOT__uut__DOT__clk;
    CData/*4:0*/ bench__DOT__prev_LEDS;
    CData/*4:0*/ bench__DOT__uut__DOT__rs1Id;
    CData/*4:0*/ bench__DOT__uut__DOT__rs2Id;
    CData/*1:0*/ bench__DOT__uut__DOT__state;
    CData/*6:0*/ bench__DOT__uut__DOT____VdfgRegularize_h2f053c4c_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ bench__DOT__uut__DOT__PC;
    IData/*31:0*/ bench__DOT__uut__DOT__instr;
    IData/*31:0*/ bench__DOT__uut__DOT__rs1;
    IData/*31:0*/ bench__DOT__uut__DOT__rs2;
    IData/*21:0*/ bench__DOT__uut__DOT__CW__DOT__genblk1__DOT__slow_CLK;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> bench__DOT__uut__DOT__MEM;
    VlUnpacked<IData/*31:0*/, 32> bench__DOT__uut__DOT__RegisterBank;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstep5__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstep5___024root(Vstep5__Syms* symsp, const char* v__name);
    ~Vstep5___024root();
    VL_UNCOPYABLE(Vstep5___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
