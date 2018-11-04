`timescale 1ns/1ns
module clocks_tb;
	// Inputs
	reg master;
	reg rst;
	
	// Outputs
	wire blink;
	wire sec;
	wire display;
	
	clocks uut (
		// Inputs
		.clk(master), .rst(rst),
		// Outputs
		.blink_clk(blink), .sec_clk(sec), .display_clk(display)
	);
	
	initial begin
		master = 0;
		rst = 1;
		
		#10;
		rst = 0;
		#1000000;
		$finish;
	end
	
	always #1 master = ~master;

endmodule
