// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep8.h for the primary calling header

#include "Vstep8__pch.h"
#include "Vstep8__Syms.h"
#include "Vstep8___024root.h"

void Vstep8___024root___ctor_var_reset(Vstep8___024root* vlSelf);

Vstep8___024root::Vstep8___024root(Vstep8__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep8___024root___ctor_var_reset(this);
}

void Vstep8___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep8___024root::~Vstep8___024root() {
}
