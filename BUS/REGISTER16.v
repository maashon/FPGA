`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    REGISTER16 
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
module REGISTER16(inc,ld,clr,clk,in,out);
input [15:0] in;
input ld,clr,inc,clk;
output [15:0] out;
reg  [15:0] dat;
always @(posedge clk,posedge clr)begin
if(clr) dat<=0;
else if(ld) dat<=in;
else if(inc)dat<=dat+1;
end
assign out=dat[15:0];
endmodule
