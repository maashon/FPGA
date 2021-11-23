`timescale 1ns / 1ps

module tst();
reg clk=0;
reg rst,ld,ud;
reg [3:0] in;
wire [3:0] out;
initial begin rst=1; ld=0; ud=1; end
initial repeat(100) #20 clk=~clk;
initial #30 rst=0;
FourBitCounter cont(clk,rst,ud,ld,in,out);
initial #100 ud=0;
initial #200 begin in=$random; ld=1;end
initial #220 ld=0;
initial #220 ud=1;
endmodule
