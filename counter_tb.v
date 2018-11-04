`timescale 1ns/1ns
module counter_tb;
	// Inputs
	reg master;
	reg rst;
	
`include "counter_definitions.v"
	// Outputs
	wire [digit_regs-1 : 0] tens;
	wire [digit_regs-1 : 0] ones;
	
	counter uut (
		// Inputs
		.clk(master), .rst(rst),
		// Outputs
		.tens(tens), .ones(ones)
	);
	
	initial begin
		master = 0;
		rst = 1;
		
		#1000;
		rst = 0;
		#1000000;
		$finish;
	end
	
	always #100 master = ~master;

endmodule
