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

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    dpi_init(); // Initialize DPI

    while (!Verilated::gotFinish()) {
        dpi_set_inputs(!top->clk, top->reset_n);
        dpi_get_outputs(&top->light);
        top->eval();
    }
    delete top;
    return 0;
}
