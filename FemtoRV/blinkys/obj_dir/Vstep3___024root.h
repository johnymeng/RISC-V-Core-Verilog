// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstep3.h for the primary calling header

#ifndef VERILATED_VSTEP3___024ROOT_H_
#define VERILATED_VSTEP3___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstep3__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstep3___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bench__DOT__CLK;
    CData/*0:0*/ bench__DOT__uut__DOT__clk;
    CData/*4:0*/ bench__DOT__prev_LEDS;
    CData/*4:0*/ bench__DOT__uut__DOT____Vxrand_h8df71b37__0;
    CData/*0:0*/ bench__DOT__uut__DOT__resetn;
    CData/*4:0*/ bench__DOT__uut__DOT__PC;
    CData/*4:0*/ bench__DOT__uut__DOT__leds;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__uut__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*21:0*/ bench__DOT__uut__DOT__CW__DOT__slow_CLK;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*4:0*/, 21> bench__DOT__uut__DOT__MEM;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstep3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstep3___024root(Vstep3__Syms* symsp, const char* v__name);
    ~Vstep3___024root();
    VL_UNCOPYABLE(Vstep3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
