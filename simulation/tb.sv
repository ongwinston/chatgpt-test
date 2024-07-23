module tb;
    logic clk;
    logic reset_n;
    logic [2:0] light;

    // Instantiate DPI interface
    dpi_interface dpi_if (
        .clk(clk),
        .reset_n(reset_n),
        .light(light)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Reset generation
    initial begin
        reset_n = 0;
        #20 reset_n = 1;
    end

    // Test logic
    initial begin
        // Test sequence
        $display("Starting test");
        wait(reset_n == 1);
        #100;
        $display("Test completed");
        $finish;
    end
endmodule
