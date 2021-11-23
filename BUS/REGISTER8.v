`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:32:56 01/12/2018 
// Design Name: 
// Module Name:    REGISTER8 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module REGISTER8(inc,ld,clr,clk,in,out);
input [7:0] in;
input ld,clr,inc,clk;
output [7:0] out;
reg  [7:0] dat;
always @(posedge clk,posedge clr)begin
if(clr) dat<=0;
else if(ld) dat<=in;
else if(inc)dat<=dat+1;
end
assign out=dat[7:0];
endmodule
