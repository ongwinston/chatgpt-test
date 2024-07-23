// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light.h for the primary calling header

#include "Vtraffic_light__pch.h"
#include "Vtraffic_light___024root.h"

VL_ATTR_COLD void Vtraffic_light___024root___eval_static(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtraffic_light___024root___eval_initial(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
}

VL_ATTR_COLD void Vtraffic_light___024root___eval_final(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtraffic_light___024root___eval_settle(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__act(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge reset_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__nba(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge reset_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtraffic_light___024root___ctor_var_reset(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->light = VL_RAND_RESET_I(3);
    vlSelf->traffic_light__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->traffic_light__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__traffic_light__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = VL_RAND_RESET_I(1);
}
