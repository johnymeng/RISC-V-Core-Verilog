// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep4.h for the primary calling header

#include "Vstep4__pch.h"
#include "Vstep4__Syms.h"
#include "Vstep4___024root.h"

void Vstep4___024root___ctor_var_reset(Vstep4___024root* vlSelf);

Vstep4___024root::Vstep4___024root(Vstep4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep4___024root___ctor_var_reset(this);
}

void Vstep4___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep4___024root::~Vstep4___024root() {
}
