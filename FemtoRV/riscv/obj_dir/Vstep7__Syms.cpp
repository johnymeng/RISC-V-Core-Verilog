// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstep7__pch.h"
#include "Vstep7.h"
#include "Vstep7___024root.h"

// FUNCTIONS
Vstep7__Syms::~Vstep7__Syms()
{
}

Vstep7__Syms::Vstep7__Syms(VerilatedContext* contextp, const char* namep, Vstep7* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(208);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
