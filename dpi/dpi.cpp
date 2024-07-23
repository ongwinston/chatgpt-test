
#include "Vtraffic_light.h"
#include "verilated.h"
#include <svdpi.h>

extern "C" void dpi_set_inputs(bit clk, bit reset_n);
extern "C" void dpi_get_outputs(bit* light);

Vtraffic_light* top = nullptr;

extern "C" void dpi_init() {
    if (!top) {
        top = new Vtraffic_light;
    }
}

extern "C" void dpi_set_inputs(bit clk, bit reset_n) {
    top->clk = clk;
    top->reset_n = reset_n;
    top->eval();
}

extern "C" void dpi_get_outputs(bit* light) {
    *light = top->light;
}
