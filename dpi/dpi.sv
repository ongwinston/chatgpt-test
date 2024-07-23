import "DPI-C" function void dpi_set_inputs(input bit clk, input bit reset_n);
import "DPI-C" function void dpi_get_outputs(output bit [2:0] light);

module dpi_interface(
    input logic clk,
    input logic reset_n,
    output logic [2:0] light
);
    always @(posedge clk or negedge reset_n) begin
        dpi_set_inputs(clk, reset_n);
        dpi_get_outputs(light);
    end
endmodule
