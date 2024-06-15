// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep7.h for the primary calling header

#include "Vstep7__pch.h"
#include "Vstep7__Syms.h"
#include "Vstep7___024root.h"

void Vstep7___024root___ctor_var_reset(Vstep7___024root* vlSelf);

Vstep7___024root::Vstep7___024root(Vstep7__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep7___024root___ctor_var_reset(this);
}

void Vstep7___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep7___024root::~Vstep7___024root() {
}
