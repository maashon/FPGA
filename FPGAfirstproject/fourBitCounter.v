`timescale 1ns / 1ps
module fourBitCounter(clk,reset,updown,q);
input clk,reset,updown;
output [3:0] q;
reg [3:0]q;
always@(posedge clk)
if(reset)
	q<=0;
else if(updown)
	q<=q+1;
else 
	q<=q-1;
endmodule
