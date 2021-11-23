`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:35:26 11/14/2017 
// Design Name: 
// Module Name:    adderTester 
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
module adderTester();
reg [3:0]ai,bi;
reg ci;
wire [3:0] s;
wire cout;
Adder add1(ai,bi,ci,s,cout);
initial begin
#30 {ai,bi,ci}=$random;
end

endmodule
