#ifndef DPI_H
#define DPI_H

#include <stdint.h>

extern "C" void dpi_init();
extern "C" void dpi_set_inputs(uint8_t clk, uint8_t reset_n);
extern "C" void dpi_get_outputs(uint8_t* light);

#endif // DPI_H