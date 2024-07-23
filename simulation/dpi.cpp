
#include "Vtraffic_light.h"
#include "verilated.h"
// #include <svdpi.h>
// #include "stdint.h"
#include "dpi.h"

// extern "C" void dpi_set_inputs(uint8_t clk, uint8_t reset_n);
// extern "C" void dpi_get_outputs(uint8_t* light);

Vtraffic_light* top = nullptr;

extern "C" void dpi_init() {
    if (!top) {
        top = new Vtraffic_light;
    }
}

extern "C" void dpi_set_inputs(uint8_t clk, uint8_t reset_n) {
    top->clk = clk;
    top->reset_n = reset_n;
    top->eval();
}

extern "C" void dpi_get_outputs(uint8_t* light) {
    *light = top->light;
}
