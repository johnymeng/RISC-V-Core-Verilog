// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstep17__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vstep17::Vstep17(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstep17__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vstep17::Vstep17(const char* _vcname__)
    : Vstep17(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstep17::~Vstep17() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstep17___024root___eval_debug_assertions(Vstep17___024root* vlSelf);
#endif  // VL_DEBUG
void Vstep17___024root___eval_static(Vstep17___024root* vlSelf);
void Vstep17___024root___eval_initial(Vstep17___024root* vlSelf);
void Vstep17___024root___eval_settle(Vstep17___024root* vlSelf);
void Vstep17___024root___eval(Vstep17___024root* vlSelf);

void Vstep17::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstep17::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstep17___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstep17___024root___eval_static(&(vlSymsp->TOP));
        Vstep17___024root___eval_initial(&(vlSymsp->TOP));
        Vstep17___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstep17___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstep17::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstep17::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstep17::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstep17___024root___eval_final(Vstep17___024root* vlSelf);

VL_ATTR_COLD void Vstep17::final() {
    Vstep17___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstep17::hierName() const { return vlSymsp->name(); }
const char* Vstep17::modelName() const { return "Vstep17"; }
unsigned Vstep17::threads() const { return 1; }
void Vstep17::prepareClone() const { contextp()->prepareClone(); }
void Vstep17::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstep17::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstep17___024root__trace_decl_types(VerilatedFst* tracep);

void Vstep17___024root__trace_init_top(Vstep17___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstep17___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstep17___024root*>(voidSelf);
    Vstep17__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstep17___024root__trace_decl_types(tracep);
    Vstep17___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstep17___024root__trace_register(Vstep17___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vstep17::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstep17::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstep17___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
