// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstep15__pch.h"
#include "Vstep15.h"
#include "Vstep15___024root.h"

// FUNCTIONS
Vstep15__Syms::~Vstep15__Syms()
{
}

Vstep15__Syms::Vstep15__Syms(VerilatedContext* contextp, const char* namep, Vstep15* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(190);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
