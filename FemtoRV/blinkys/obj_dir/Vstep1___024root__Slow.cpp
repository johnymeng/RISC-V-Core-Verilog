// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep1.h for the primary calling header

#include "Vstep1__pch.h"
#include "Vstep1__Syms.h"
#include "Vstep1___024root.h"

void Vstep1___024root___ctor_var_reset(Vstep1___024root* vlSelf);

Vstep1___024root::Vstep1___024root(Vstep1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep1___024root___ctor_var_reset(this);
}

void Vstep1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep1___024root::~Vstep1___024root() {
}
