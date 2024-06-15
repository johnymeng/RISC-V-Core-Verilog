// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep5.h for the primary calling header

#include "Vstep5__pch.h"
#include "Vstep5__Syms.h"
#include "Vstep5___024root.h"

void Vstep5___024root___ctor_var_reset(Vstep5___024root* vlSelf);

Vstep5___024root::Vstep5___024root(Vstep5__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep5___024root___ctor_var_reset(this);
}

void Vstep5___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep5___024root::~Vstep5___024root() {
}
