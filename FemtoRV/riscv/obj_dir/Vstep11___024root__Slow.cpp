// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep11.h for the primary calling header

#include "Vstep11__pch.h"
#include "Vstep11__Syms.h"
#include "Vstep11___024root.h"

void Vstep11___024root___ctor_var_reset(Vstep11___024root* vlSelf);

Vstep11___024root::Vstep11___024root(Vstep11__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep11___024root___ctor_var_reset(this);
}

void Vstep11___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep11___024root::~Vstep11___024root() {
}
