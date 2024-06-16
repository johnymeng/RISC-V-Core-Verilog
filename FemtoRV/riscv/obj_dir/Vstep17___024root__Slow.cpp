// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstep17.h for the primary calling header

#include "Vstep17__pch.h"
#include "Vstep17__Syms.h"
#include "Vstep17___024root.h"

void Vstep17___024root___ctor_var_reset(Vstep17___024root* vlSelf);

Vstep17___024root::Vstep17___024root(Vstep17__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstep17___024root___ctor_var_reset(this);
}

void Vstep17___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstep17___024root::~Vstep17___024root() {
}
