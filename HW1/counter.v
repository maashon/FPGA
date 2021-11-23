`timescale 1ns / 1ps

module counter(clock,reset,updown,out);
input clock,reset,updown;
output [3:0] out;
reg [3:0] out=4'b0000;
always@(posedge clock)
	if(reset)
		out<=0;
	else if(updown)
		out<=out+1;
		else if(out==0)
		out=4'b1111;
		else
		out<=out-1;

endmodule
