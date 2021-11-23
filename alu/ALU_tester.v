`timescale 1ns / 1ps

module ALU_tester( );
reg [15:0] a,b;
reg [2:0] opcode;
wire [15:0] out;
alu u1(a,b,opcode,out);
initial {a,b}=$random;
initial begin
#20 opcode=0;
#20 opcode=5;
end

endmodule
