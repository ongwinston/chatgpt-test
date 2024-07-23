// #include "Vtraffic_light.h"
// #include "verilated.h"

// int main(int argc, char **argv, char **env) {
//     Verilated::commandArgs(argc, argv);
//     Vtraffic_light* top = new Vtraffic_light;

//     while (!Verilated::gotFinish()) {
//         top->clk = !top->clk;
//         top->eval();
//     }
//     delete top;
//     return 0;
// }

#include "Vtraffic_light.h"
#include "verilated.h"
// #include "dpi.cpp"
#include "stdint.h"

// // Function declarations for DPI functions
// extern "C" void dpi_init();
// extern "C" void dpi_set_inputs(uint8_t clk, uint8_t reset_n);
// extern "C" void dpi_get_outputs(uint8_t* light);

#include "dpi.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    // Verilated::commandArgs(argc, argv);
    // Vtraffic_light* top = new Vtraffic_light;
    dpi_init(); // Initialize DPI

    uint8_t light;

    while (!Verilated::gotFinish()) {
        dpi_set_inputs(1, 1);
        dpi_get_outputs(&light);
        top->eval();
    }
    delete top;
    return 0;
}
