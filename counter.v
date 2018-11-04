module counter(
	// Outputs
	tens, ones,
	// Inputs
	clk, rst
);

`include "counter_definitions.v"
	input clk;
	input rst;
	
	reg [digit_regs-1 : 0] digits [1 : 0]; // 2 regs for 2 digits
	
	output [digit_regs-1 : 0] tens;
	output [digit_regs-1 : 0] ones;
	
	/* Initialize values */
	assign tens = digits[1];
	assign ones = digits[0];
	
	initial begin
		digits[0] = 0;
		digits[1] = 0;
	end
	/***/

	always @ (posedge clk) begin
		if (rst) begin
			digits[0] <= 0;
			digits[1] <= 0;
		end
		else begin
			if (digits[0] + digits[1] * 10 + 1 == max_units) begin
				digits[0] <= 0;
				digits[1] <= 0;
			end
			else if (digits[0] == 9) begin
				digits[0] <= 0;
				digits[1] <= digits[1] + 1;
			end
			else begin
				digits[0] <= digits[0] + 1;
			end
		end
	end
endmodule