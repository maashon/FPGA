`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    DEC3to8 
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
module DEC3to8(in,d);
input [2:0] in;
input clk;
output [7:0] d;
reg  [2:0] t;
always @(in)begin
t<=in;
end
assign d=1<<t;
endmodule
