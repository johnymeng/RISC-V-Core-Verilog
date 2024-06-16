// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstep10__pch.h"
#include "Vstep10.h"
#include "Vstep10___024root.h"

// FUNCTIONS
Vstep10__Syms::~Vstep10__Syms()
{
}

Vstep10__Syms::Vstep10__Syms(VerilatedContext* contextp, const char* namep, Vstep10* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(32);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
