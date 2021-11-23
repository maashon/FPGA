`timescale 1ns / 1ps

module muxnto1tester();
reg [n-1:0] in;
reg [log2n -1:0] sel;
wire out;

muxn21 #(4) m(in,sel,out);

initial {in,sel}=$random;

endmodule
