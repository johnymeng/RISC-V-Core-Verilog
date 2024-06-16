// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstep13__pch.h"
#include "Vstep13.h"
#include "Vstep13___024root.h"

// FUNCTIONS
Vstep13__Syms::~Vstep13__Syms()
{
}

Vstep13__Syms::Vstep13__Syms(VerilatedContext* contextp, const char* namep, Vstep13* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(104);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
