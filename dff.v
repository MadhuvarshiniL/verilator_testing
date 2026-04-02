module dff (
    input clk,
    input rst,
    input en,
    input d,
    output reg q
);

always @(posedge clk) begin
    if (rst)
        q <= 0;
    else if (en)
        q <= d;
end

endmodule
