// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtraffic_light.h for the primary calling header

#ifndef VERILATED_VTRAFFIC_LIGHT___024ROOT_H_
#define VERILATED_VTRAFFIC_LIGHT___024ROOT_H_  // guard

#include "verilated.h"


class Vtraffic_light__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtraffic_light___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_OUT8(light,2,0);
    CData/*1:0*/ traffic_light__DOT__current_state;
    CData/*1:0*/ traffic_light__DOT__next_state;
    CData/*1:0*/ __Vdly__traffic_light__DOT__next_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtraffic_light__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtraffic_light___024root(Vtraffic_light__Syms* symsp, const char* v__name);
    ~Vtraffic_light___024root();
    VL_UNCOPYABLE(Vtraffic_light___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
