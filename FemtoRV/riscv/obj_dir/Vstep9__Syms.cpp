// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstep9__pch.h"
#include "Vstep9.h"
#include "Vstep9___024root.h"

// FUNCTIONS
Vstep9__Syms::~Vstep9__Syms()
{
}

Vstep9__Syms::Vstep9__Syms(VerilatedContext* contextp, const char* namep, Vstep9* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(52);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
