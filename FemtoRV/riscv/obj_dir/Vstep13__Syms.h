// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTEP13__SYMS_H_
#define VERILATED_VSTEP13__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vstep13.h"

// INCLUDE MODULE CLASSES
#include "Vstep13___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vstep13__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstep13* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstep13___024root              TOP;

    // CONSTRUCTORS
    Vstep13__Syms(VerilatedContext* contextp, const char* namep, Vstep13* modelp);
    ~Vstep13__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
