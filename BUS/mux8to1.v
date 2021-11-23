`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    mux8to1
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
module mux8to1(in,sel,out);
input [7:0] in;
input [2:0] sel;
output out;
reg out;
always @(sel,in)begin
case(sel)
0:out<=in[0];
1:out<=in[1];
2:out<=in[2];
3:out<=in[3];
4:out<=in[4];
5:out<=in[5];
6:out<=in[6];
7:out<=in[7];
endcase
end

endmodule
