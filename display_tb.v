`timescale 1ns/1ns
module display_tb;

`include "display_definitions.v"

	// Inputs
	reg master;
	reg rst;
	reg [3 : 0] digits [anode_regs-1 : 0];
	reg [31 : 0] ctr;
	
	// Outputs
	wire [anode_regs-1 : 0] anode;
	wire [segment_regs-1 : 0] segment;
	
	display uut (
		// Inputs
		.clk(master), .rst(rst), 
		.d0(digits[0]),
		.d1(digits[1]),
		.d2(digits[2]),
		.d3(digits[3]),
		// Outputs
		.anode(anode), .segment(segment)
	);
	
	initial begin
		master = 0;
		rst = 1;
		ctr = 0;
		digits[0] = 0;
		digits[1] = 0;
		digits[2] = 0;
		digits[3] = 0;
		
		#1000;
		rst = 0;
		#1000000;
		$finish;
	end
	
	always #100 master = ~master;
	
	always @(posedge master) begin
		ctr <= ctr + 1;
		
		digits[ctr % 4] <= ctr % 10;
	end

endmodule