module display(
	// Outputs
	anode, segment,
	// Inputs
	d0, d1, d2, d3, // no array input allowed in verilog, each one corresponding to 1 anode
	clk, rst
);

	`include "counter_definitions.v"
	`include "display_definitions.v"
	
	input clk;
	input rst;
	input [digit_regs-1 : 0] d0;
	input [digit_regs-1 : 0] d1;
	input [digit_regs-1 : 0] d2;
	input [digit_regs-1 : 0] d3;
	
	wire [digit_regs-1 : 0] digits [anode_regs-1 : 0];
	
	assign digits[0] = d0;
	assign digits[1] = d1;
	assign digits[2] = d2;
	assign digits[3] = d3;
	
	output reg [anode_regs-1 : 0] anode = 0;
	output reg [segment_regs-1 : 0] segment = 0;

	reg [ctr_regs-1 : 0] ctr = 0;
	wire [3 : 0] ctr_mod;
	assign ctr_mod = ctr % 4;

	// Displays the specific hexadecimal number using 7 segment display.
	task display_segment;
		input [digit_regs-1 : 0] digit;
		begin 
			case (digit)
				4'h0: segment <= 8'b11000000;
				4'h1: segment <= 8'b11111001;
				4'h2: segment <= 8'b10100100;
				4'h3: segment <= 8'b10110000;
				4'h4: segment <= 8'b10011001;
				4'h5: segment <= 8'b10010010;
				4'h6: segment <= 8'b10000010;
				4'h7: segment <= 8'b11111000;
				4'h8: segment <= 8'b10000000;
				4'h9: segment <= 8'b10010000;
				default: segment <= 8'b11111111;
			endcase
		end
	endtask

	task change_anode;
		input [ctr_regs-1 : 0] ctr;
		begin
			case (ctr_mod)
				3'h0: anode <= 4'b1110;
				3'h1: anode <= 4'b1101;
				3'h2: anode <= 4'b1011;
				3'h3: anode <= 4'b0111;
				default: anode <= 4'b1111;
			endcase
		end
	endtask

	// Take the fast clock and decide to change counter at every step:
	always @(posedge clk) begin
		if (rst) begin
			segment <= 0;
		end
		else begin
			ctr <= ctr + 1;
			display_segment(digits[ctr % 4]);
			change_anode(ctr);
		end
	end	
endmodule
