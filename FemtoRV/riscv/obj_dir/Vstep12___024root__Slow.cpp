// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep12.h for the primary calling header

#include "Vstep12__pch.h"
#include "Vstep12__Syms.h"
#include "Vstep12___024root.h"

void Vstep12___024root___ctor_var_reset(Vstep12___024root* vlSelf);

Vstep12___024root::Vstep12___024root(Vstep12__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep12___024root___ctor_var_reset(this);
}

void Vstep12___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep12___024root::~Vstep12___024root() {
}
