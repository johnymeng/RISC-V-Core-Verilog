// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstep5__pch.h"
#include "Vstep5.h"
#include "Vstep5___024root.h"

// FUNCTIONS
Vstep5__Syms::~Vstep5__Syms()
{
}

Vstep5__Syms::Vstep5__Syms(VerilatedContext* contextp, const char* namep, Vstep5* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(20);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
