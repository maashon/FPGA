`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:49 01/12/2018 
// Design Name: 
// Module Name:    dSigGenerator 
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
module dSigGenerator(opcode,d);
input [2:0] opcode;
output [7:0] d;
reg [7:0] tempd;
always @*
case(opcode)
0:tempd<=8'b00000001;
1:tempd<=8'b00000010;
2:tempd<=8'b00000100;
3:tempd<=8'b00001000;
4:tempd<=8'b00010000;
5:tempd<=8'b00100000;
6:tempd<=8'b01000000;
7:tempd<=8'b10000000;
endcase

endmodule
