// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep6.h for the primary calling header

#include "Vstep6__pch.h"
#include "Vstep6__Syms.h"
#include "Vstep6___024root.h"

void Vstep6___024root___ctor_var_reset(Vstep6___024root* vlSelf);

Vstep6___024root::Vstep6___024root(Vstep6__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep6___024root___ctor_var_reset(this);
}

void Vstep6___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep6___024root::~Vstep6___024root() {
}
