// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep10.h for the primary calling header

#include "Vstep10__pch.h"
#include "Vstep10__Syms.h"
#include "Vstep10___024root.h"

void Vstep10___024root___ctor_var_reset(Vstep10___024root* vlSelf);

Vstep10___024root::Vstep10___024root(Vstep10__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep10___024root___ctor_var_reset(this);
}

void Vstep10___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep10___024root::~Vstep10___024root() {
}
