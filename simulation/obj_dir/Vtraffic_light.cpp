// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtraffic_light__pch.h"

//============================================================
// Constructors

Vtraffic_light::Vtraffic_light(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtraffic_light__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , light{vlSymsp->TOP.light}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtraffic_light::Vtraffic_light(const char* _vcname__)
    : Vtraffic_light(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtraffic_light::~Vtraffic_light() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtraffic_light___024root___eval_debug_assertions(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG
void Vtraffic_light___024root___eval_static(Vtraffic_light___024root* vlSelf);
void Vtraffic_light___024root___eval_initial(Vtraffic_light___024root* vlSelf);
void Vtraffic_light___024root___eval_settle(Vtraffic_light___024root* vlSelf);
void Vtraffic_light___024root___eval(Vtraffic_light___024root* vlSelf);

void Vtraffic_light::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtraffic_light::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtraffic_light___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtraffic_light___024root___eval_static(&(vlSymsp->TOP));
        Vtraffic_light___024root___eval_initial(&(vlSymsp->TOP));
        Vtraffic_light___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtraffic_light___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtraffic_light::eventsPending() { return false; }

uint64_t Vtraffic_light::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtraffic_light::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtraffic_light___024root___eval_final(Vtraffic_light___024root* vlSelf);

VL_ATTR_COLD void Vtraffic_light::final() {
    Vtraffic_light___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtraffic_light::hierName() const { return vlSymsp->name(); }
const char* Vtraffic_light::modelName() const { return "Vtraffic_light"; }
unsigned Vtraffic_light::threads() const { return 1; }
void Vtraffic_light::prepareClone() const { contextp()->prepareClone(); }
void Vtraffic_light::atClone() const {
    contextp()->threadPoolpOnClone();
}
