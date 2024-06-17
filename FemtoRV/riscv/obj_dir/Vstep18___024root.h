// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstep18.h for the primary calling header

#ifndef VERILATED_VSTEP18___024ROOT_H_
#define VERILATED_VSTEP18___024ROOT_H_  // guard

#include "verilated.h"


class Vstep18__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstep18___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(RESET,0,0);
        VL_OUT8(LEDS,4,0);
        VL_IN8(RXD,0,0);
        VL_OUT8(TXD,0,0);
        CData/*0:0*/ SOC__DOT__resetn;
        CData/*3:0*/ SOC__DOT__mem_wmask;
        CData/*3:0*/ SOC__DOT____Vcellinp__RAM__mem_wmask;
        CData/*0:0*/ SOC__DOT__uart_valid;
        CData/*0:0*/ SOC__DOT__uart_ready;
        CData/*0:0*/ SOC__DOT__CPU__DOT__isSYSTEM;
        CData/*4:0*/ SOC__DOT__CPU__DOT__rs1Id;
        CData/*4:0*/ SOC__DOT__CPU__DOT__rs2Id;
        CData/*0:0*/ SOC__DOT__CPU__DOT__LT;
        CData/*0:0*/ SOC__DOT__CPU__DOT__takeBranch;
        CData/*7:0*/ SOC__DOT__CPU__DOT__LOAD_byte;
        CData/*0:0*/ SOC__DOT__CPU__DOT__LOAD_sign;
        CData/*2:0*/ SOC__DOT__CPU__DOT__state;
        CData/*6:0*/ SOC__DOT__CPU__DOT____VdfgRegularize_hc4cdc9d4_0_0;
        CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h94aa63f7__0;
        CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h949060f2__0;
        CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h948ec0b2__0;
        CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h948d60f5__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__RESET__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ SOC__DOT__CPU__DOT__LOAD_halfword;
        SData/*11:0*/ SOC__DOT__UART__DOT__cnt;
        SData/*9:0*/ SOC__DOT__UART__DOT__data;
        SData/*15:0*/ SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
        SData/*15:0*/ __Vdly__SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
        IData/*31:0*/ SOC__DOT__mem_addr;
        IData/*31:0*/ SOC__DOT__mem_rdata;
        IData/*31:0*/ SOC__DOT__mem_wdata;
        IData/*31:0*/ SOC__DOT__RAM_rdata;
        IData/*31:0*/ SOC__DOT__CPU__DOT__PC;
        IData/*31:0*/ SOC__DOT__CPU__DOT__instr;
        IData/*31:0*/ SOC__DOT__CPU__DOT__Iimm;
        IData/*31:0*/ SOC__DOT__CPU__DOT__rs1;
        IData/*31:0*/ SOC__DOT__CPU__DOT__rs2;
        IData/*31:0*/ SOC__DOT__CPU__DOT__writeBackData;
        IData/*31:0*/ SOC__DOT__CPU__DOT__aluIn2;
        IData/*31:0*/ SOC__DOT__CPU__DOT__aluPlus;
        IData/*31:0*/ SOC__DOT__CPU__DOT__shifter_in;
        IData/*31:0*/ SOC__DOT__CPU__DOT__shifter;
        IData/*31:0*/ SOC__DOT__CPU__DOT__leftshift;
        IData/*31:0*/ SOC__DOT__CPU__DOT__PCplusImm;
        IData/*31:0*/ SOC__DOT__CPU__DOT__nextPC;
        IData/*31:0*/ SOC__DOT__CPU__DOT__loadstore_addr;
        IData/*31:0*/ SOC__DOT__RAM__DOT____Vxrand_h8df4b479__0;
        IData/*31:0*/ SOC__DOT__RAM__DOT__memPC;
        IData/*31:0*/ SOC__DOT__RAM__DOT__mandelstart_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__blink_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__loop_y_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__loop_x_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__loop_Z_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__exit_Z_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__wait_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__wait_L0_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__putc_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__putc_L0_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__mulsi3_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__mulsi3_L0_;
    };
    struct {
        IData/*31:0*/ SOC__DOT__RAM__DOT__mulsi3_L1_;
        IData/*31:0*/ SOC__DOT__RAM__DOT__colormap_;
        IData/*31:0*/ SOC__DOT__RAM__DOT____Vlvbound_hebd520d8__1;
        IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout;
        IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__0__x;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ SOC__DOT__CPU__DOT__aluMinus;
        VlUnpacked<IData/*31:0*/, 32> SOC__DOT__CPU__DOT__RegisterBank;
        VlUnpacked<IData/*31:0*/, 1536> SOC__DOT__RAM__DOT__MEM;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstep18__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstep18___024root(Vstep18__Syms* symsp, const char* v__name);
    ~Vstep18___024root();
    VL_UNCOPYABLE(Vstep18___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
