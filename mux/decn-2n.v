`timescale 1ns / 1ps

module decn_2n(in,out,en);

	input [1:0] in;
	output [3:0] out;
	input en;
	
	always @(en,in)
		if(!en)
			out=0;
		else 
			case(in)
			0: out=4'b0;
			1: out=4'b0001;
			2: out=4'b0010;
			3: out=4'b0011;	
		endcase
endmodule
