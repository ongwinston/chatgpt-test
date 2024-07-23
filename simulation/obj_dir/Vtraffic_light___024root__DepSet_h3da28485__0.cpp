// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light.h for the primary calling header

#include "Vtraffic_light__pch.h"
#include "Vtraffic_light__Syms.h"
#include "Vtraffic_light___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtraffic_light___024root___dump_triggers__act(Vtraffic_light___024root* vlSelf);
#endif  // VL_DEBUG

void Vtraffic_light___024root___eval_triggers__act(Vtraffic_light___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtraffic_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtraffic_light___024root___dump_triggers__act(vlSelf);
    }
#endif
}
