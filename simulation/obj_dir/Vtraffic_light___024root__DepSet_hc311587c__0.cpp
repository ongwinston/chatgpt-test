// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light.h for the primary calling header

#include "Vtraffic_light__pch.h"
#include "Vtraffic_light___024root.h"

void Vtraffic_light___024root___eval_act(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_act\n"); );
}

void Vtraffic_light___024root___nba_sequent__TOP__0(Vtraffic_light___024root* vlSelf);
void Vtraffic_light___024root___nba_sequent__TOP__1(Vtraffic_light___024root* vlSelf);
void Vtraffic_light___024root___nba_sequent__TOP__2(Vtraffic_light___024root* vlSelf);

void Vtraffic_light___024root___eval_nba(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtraffic_light___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtraffic_light___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtraffic_light___024root___nba_sequent__TOP__2(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 4> Vtraffic_light__ConstPool__TABLE_hf11ba92c_0;
extern const VlUnpacked<CData/*1:0*/, 4> Vtraffic_light__ConstPool__TABLE_hccc2f84b_0;

VL_INLINE_OPT void Vtraffic_light___024root___nba_sequent__TOP__0(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__Vdly__traffic_light__DOT__next_state 
        = vlSelf->traffic_light__DOT__next_state;
    __Vtableidx1 = vlSelf->traffic_light__DOT__current_state;
    vlSelf->light = Vtraffic_light__ConstPool__TABLE_hf11ba92c_0
        [__Vtableidx1];
    vlSelf->__Vdly__traffic_light__DOT__next_state 
        = Vtraffic_light__ConstPool__TABLE_hccc2f84b_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtraffic_light___024root___nba_sequent__TOP__1(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->traffic_light__DOT__current_state = ((IData)(vlSelf->reset_n)
                                                  ? (IData)(vlSelf->traffic_light__DOT__next_state)
                                                  : 0U);
}

VL_INLINE_OPT void Vtraffic_light___024root___nba_sequent__TOP__2(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->traffic_light__DOT__next_state = vlSelf->__Vdly__traffic_light__DOT__next_state;
}

void Vtraffic_light___024root___eval_triggers__act(Vtraffic_light___024root* vlSelf);

bool Vtraffic_light___024root___eval_phase__act(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtraffic_light___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtraffic_light___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtraffic_light___024root___eval_phase__nba(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtraffic_light___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__nba(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__act(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG

void Vtraffic_light___024root___eval(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtraffic_light___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("traffic_light.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtraffic_light___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("traffic_light.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtraffic_light___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtraffic_light___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtraffic_light___024root___eval_debug_assertions(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
}
#endif  // VL_DEBUG
