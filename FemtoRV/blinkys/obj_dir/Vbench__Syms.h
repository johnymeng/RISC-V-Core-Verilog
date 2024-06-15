// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBENCH__SYMS_H_
#define VERILATED_VBENCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbench.h"

// INCLUDE MODULE CLASSES
#include "Vbench___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbench* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbench___024root               TOP;

    // CONSTRUCTORS
    Vbench__Syms(VerilatedContext* contextp, const char* namep, Vbench* modelp);
    ~Vbench__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
