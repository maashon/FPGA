`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:40 01/12/2018 
// Design Name: 
// Module Name:    TimingSignals 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: g
//module SC(clr,clk,enable,out);
//////////////////////////////////////////////////////////////////////////////////
module TimingSignals(reset,clock,en,Tsignal);
input reset,clock,en;
output [15:0] Tsignal;
wire clear;
wire [3:0] sc_sig;
SC seq(.clr(clear),.clk(clock),.enable(enable),.out(sc_sig));
DEC4to16 dec(.in(sc_sig),.t(Tsignal));
assign clear=reset;

endmodule
