// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep13.h for the primary calling header

#include "Vstep13__pch.h"
#include "Vstep13__Syms.h"
#include "Vstep13___024root.h"

void Vstep13___024root___ctor_var_reset(Vstep13___024root* vlSelf);

Vstep13___024root::Vstep13___024root(Vstep13__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep13___024root___ctor_var_reset(this);
}

void Vstep13___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep13___024root::~Vstep13___024root() {
}
