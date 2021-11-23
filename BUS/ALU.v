`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    ALU
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
module ALU(a,b,opcode,ei,eo,inc,out);
input ei;
output eo,inc;
input [15:0] a,b;
input [2:0] opcode;
output [15:0] out;

reg [15:0] dout;

always @*
case(opcode)
0:dout<=a+b;
1:dout<=a-b;
2:dout<=a+1;
3:dout<=a-1;
4:dout<=a&b;
5:dout<=a|b;
6:dout<=a^b;
7:dout<=~a;
endcase
assign out=dout[15:0];
assign eo = (opcode==4'b0100) ? a[0] : 
					 (opcode==4'b0101) ? a[15] : 
					 (opcode==4'b1000) ? 0 :
					 (opcode==4'b1001) ? ~ei : dout[15];
					 
assign inc = (opcode==4'b1010) ? ~a[15] :
					  (opcode==4'b1011) ? a[15] :
					  ((opcode==4'b1100) && (a==0)) ? 1'b1 :
					  (opcode==4'b1101) ? ~ei : 0;
endmodule
