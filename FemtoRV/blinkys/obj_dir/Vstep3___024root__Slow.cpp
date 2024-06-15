// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep3.h for the primary calling header

#include "Vstep3__pch.h"
#include "Vstep3__Syms.h"
#include "Vstep3___024root.h"

void Vstep3___024root___ctor_var_reset(Vstep3___024root* vlSelf);

Vstep3___024root::Vstep3___024root(Vstep3__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep3___024root___ctor_var_reset(this);
}

void Vstep3___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep3___024root::~Vstep3___024root() {
}
