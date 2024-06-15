// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstep6__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vstep6::Vstep6(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstep6__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vstep6::Vstep6(const char* _vcname__)
    : Vstep6(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstep6::~Vstep6() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstep6___024root___eval_debug_assertions(Vstep6___024root* vlSelf);
#endif  // VL_DEBUG
void Vstep6___024root___eval_static(Vstep6___024root* vlSelf);
void Vstep6___024root___eval_initial(Vstep6___024root* vlSelf);
void Vstep6___024root___eval_settle(Vstep6___024root* vlSelf);
void Vstep6___024root___eval(Vstep6___024root* vlSelf);

void Vstep6::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstep6::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstep6___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstep6___024root___eval_static(&(vlSymsp->TOP));
        Vstep6___024root___eval_initial(&(vlSymsp->TOP));
        Vstep6___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstep6___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstep6::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstep6::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstep6::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstep6___024root___eval_final(Vstep6___024root* vlSelf);

VL_ATTR_COLD void Vstep6::final() {
    Vstep6___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstep6::hierName() const { return vlSymsp->name(); }
const char* Vstep6::modelName() const { return "Vstep6"; }
unsigned Vstep6::threads() const { return 1; }
void Vstep6::prepareClone() const { contextp()->prepareClone(); }
void Vstep6::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstep6::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstep6___024root__trace_decl_types(VerilatedFst* tracep);

void Vstep6___024root__trace_init_top(Vstep6___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstep6___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep6___024root*>(voidSelf);
    Vstep6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstep6___024root__trace_decl_types(tracep);
    Vstep6___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep6___024root__trace_register(Vstep6___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vstep6::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstep6::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstep6___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
