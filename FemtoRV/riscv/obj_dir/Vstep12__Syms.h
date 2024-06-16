// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTEP12__SYMS_H_
#define VERILATED_VSTEP12__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vstep12.h"

// INCLUDE MODULE CLASSES
#include "Vstep12___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vstep12__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstep12* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstep12___024root              TOP;

    // CONSTRUCTORS
    Vstep12__Syms(VerilatedContext* contextp, const char* namep, Vstep12* modelp);
    ~Vstep12__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
