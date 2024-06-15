// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstep1__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vstep1::Vstep1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstep1__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vstep1::Vstep1(const char* _vcname__)
    : Vstep1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstep1::~Vstep1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstep1___024root___eval_debug_assertions(Vstep1___024root* vlSelf);
#endif  // VL_DEBUG
void Vstep1___024root___eval_static(Vstep1___024root* vlSelf);
void Vstep1___024root___eval_initial(Vstep1___024root* vlSelf);
void Vstep1___024root___eval_settle(Vstep1___024root* vlSelf);
void Vstep1___024root___eval(Vstep1___024root* vlSelf);

void Vstep1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstep1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstep1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstep1___024root___eval_static(&(vlSymsp->TOP));
        Vstep1___024root___eval_initial(&(vlSymsp->TOP));
        Vstep1___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstep1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstep1::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstep1::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstep1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstep1___024root___eval_final(Vstep1___024root* vlSelf);

VL_ATTR_COLD void Vstep1::final() {
    Vstep1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstep1::hierName() const { return vlSymsp->name(); }
const char* Vstep1::modelName() const { return "Vstep1"; }
unsigned Vstep1::threads() const { return 1; }
void Vstep1::prepareClone() const { contextp()->prepareClone(); }
void Vstep1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstep1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstep1___024root__trace_decl_types(VerilatedFst* tracep);

void Vstep1___024root__trace_init_top(Vstep1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstep1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep1___024root*>(voidSelf);
    Vstep1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstep1___024root__trace_decl_types(tracep);
    Vstep1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep1___024root__trace_register(Vstep1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vstep1::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstep1::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstep1___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
