// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep15.h for the primary calling header

#include "Vstep15__pch.h"
#include "Vstep15__Syms.h"
#include "Vstep15___024root.h"

void Vstep15___024root___ctor_var_reset(Vstep15___024root* vlSelf);

Vstep15___024root::Vstep15___024root(Vstep15__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep15___024root___ctor_var_reset(this);
}

void Vstep15___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep15___024root::~Vstep15___024root() {
}
