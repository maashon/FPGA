`timescale 1ns / 1ps
module tst();
reg clk,rst,up;
wire [3:0] q;
counter c4(clk,rst,up,q);
initial clk=1'b1;
initial up=1'b0;
initial rst=1'b1;
initial repeat (1000) #30 clk=~clk;
initial repeat (2000) #100 rst=~rst;
initial repeat (1000) #100 up=~up;
endmodule
