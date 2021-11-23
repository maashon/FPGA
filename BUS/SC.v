`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    SC
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
module SC(clr,clk,enable,out);
input clk,clr,enable;
output [3:0] out;
reg [3:0] dout;
always @(posedge clk,posedge clr)begin
if(clr) dout<=0;
else
dout<=dout+1;
end
assign out=dout[3:0];
endmodule
