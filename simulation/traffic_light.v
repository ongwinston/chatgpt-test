module traffic_light (
    input wire clk,
    input wire reset_n,
    output reg [2:0] light // 3-bit output for Red, Yellow, Green
);

    typedef enum logic [1:0] {
        RED,
        GREEN,
        YELLOW
    } state_t;

    state_t current_state, next_state;

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n)
            current_state <= RED;
        else
            current_state <= next_state;
    end

    always_ff @(posedge clk) begin
        case (current_state)
            RED: begin
                light <= 3'b100; // Red
                next_state <= GREEN;
            end
            GREEN: begin
                light <= 3'b001; // Green
                next_state <= YELLOW;
            end
            YELLOW: begin
                light <= 3'b010; // Yellow
                next_state <= RED;
            end
            default: begin
                light <= 3'b100; // Default to Red
                next_state <= RED;
            end
        endcase
    end

endmodule
