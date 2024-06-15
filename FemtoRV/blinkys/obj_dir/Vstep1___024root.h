// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstep1.h for the primary calling header

#ifndef VERILATED_VSTEP1___024ROOT_H_
#define VERILATED_VSTEP1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstep1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstep1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bench__DOT__CLK;
    CData/*4:0*/ bench__DOT__prev_LEDS;
    CData/*4:0*/ bench__DOT__uut__DOT__count;
    CData/*4:0*/ bench__DOT__uut__DOT__counter;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstep1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstep1___024root(Vstep1__Syms* symsp, const char* v__name);
    ~Vstep1___024root();
    VL_UNCOPYABLE(Vstep1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
