`timescale 1ns / 1ns
module fatester();
reg a,b,ci=0;
wire s,co;
fullAdder FA(a,b,ci,s,co);
initial repeat(20) #15 a=$random;
initial repeat(20) #15 b=$random;
initial repeat(20) #15 ci=$random;

endmodule
