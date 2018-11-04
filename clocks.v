module clocks(
	// Outputs
	blink_clk, sec_clk, display_clk,
	// Inputs
	clk, rst
);

`include "clocks_definitions.v"
	input clk;
	input rst;
	
    // Output clocks have no posedge at first
	output reg blink_clk = 0;
	output reg sec_clk = 0;
	output reg display_clk = 0;
	
	// We assume that all clocks are divisible by the fastest clock here(blink),
	// so we can safely restart the ctr upon the latest clock.
	// 100 Mhz counter needs like 30 regs.
	// We set the start to 1 because we dont want modulo to trigger
	reg [master_clock_regs-1 : 0] ctr = 1;
	
	always @ (posedge clk) begin
		if (rst) begin
			ctr <= 1;
		end
		else begin
			ctr <= ctr + 1;
			if (ctr % (sec_ctr/2) == 0) begin
				sec_clk <= !sec_clk;
			end
			if (ctr % (blink_ctr/2) == 0) begin
				blink_clk <= !blink_clk;
			end
			if (ctr % (display_ctr/2) == 0) begin
				display_clk <= !display_clk;
			end
			if (ctr % max_ctr == 0) begin
				ctr <= 1;
			end
		end
	end
endmodule
