// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbench.h for the primary calling header

#ifndef VERILATED_VBENCH___024ROOT_H_
#define VERILATED_VBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ bench__DOT__CLK;
    CData/*4:0*/ bench__DOT__prev_LEDS;
    CData/*4:0*/ bench__DOT__uut__DOT__count;
    CData/*4:0*/ bench__DOT__uut__DOT__counter;
    CData/*0:0*/ __Vtrigprevexpr___TOP__bench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbench___024root(Vbench__Syms* symsp, const char* v__name);
    ~Vbench___024root();
    VL_UNCOPYABLE(Vbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
