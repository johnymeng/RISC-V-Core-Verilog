// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep16.h for the primary calling header

#include "Vstep16__pch.h"
#include "Vstep16__Syms.h"
#include "Vstep16___024root.h"

void Vstep16___024root___ctor_var_reset(Vstep16___024root* vlSelf);

Vstep16___024root::Vstep16___024root(Vstep16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep16___024root___ctor_var_reset(this);
}

void Vstep16___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep16___024root::~Vstep16___024root() {
}
