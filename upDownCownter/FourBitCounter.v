`timescale 1ns / 1ps

module FourBitCounter(clk,rst,ud,ld,in,out);
input rst,ld,ud,clk;
input [3:0] in;
output [3:0] out;
reg [3:0] out;
always @(posedge clk)begin
if(rst) out<=0;
else if(ld) out<=in;
else if(ud) out<=out+1;
else out<=out-1;
end
endmodule
