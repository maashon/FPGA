`timescale 1ns / 1ps

module alu(a,b,opcode,out);
input [15:0] a,b;
input [2:0] opcode;
output [15:0] out;
reg [15:0] out=0;

always @(a,b,opcode)begin
case(opcode)
0:out<=a+b;
1:out<=a-b;
2:out<=a+1;
3:out<=a-1;
4:out<=a&b;
5:out<=a|b;
6:out<=a^b;
7:out<=~a;
endcase
end
endmodule
