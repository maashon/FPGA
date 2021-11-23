`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    MEMORY 
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
module MEMORY(clk,we,address,datain,dataout);
input we,clk;
input [7:0] address;
input [15:0] datain;
output reg dataout;
reg [15:0]ram[255:0] ;
initial begin
$readmemh("initialdata",ram,0,255);
end
always @(posedge clk)begin
if(we)begin 
ram[address] <=datain;
end
dataout<=ram[address];
end
endmodule
