// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep9.h for the primary calling header

#include "Vstep9__pch.h"
#include "Vstep9__Syms.h"
#include "Vstep9___024root.h"

void Vstep9___024root___ctor_var_reset(Vstep9___024root* vlSelf);

Vstep9___024root::Vstep9___024root(Vstep9__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep9___024root___ctor_var_reset(this);
}

void Vstep9___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep9___024root::~Vstep9___024root() {
}
