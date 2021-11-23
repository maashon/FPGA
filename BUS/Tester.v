`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:33:10 01/12/2018 
// Design Name: 
// Module Name:    Tester 
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
module Tester();

reg clk = 1'b0;
    reg reset = 1'b0;
    reg en = 1'b0;
    wire [15:0] cu_data;
    wire [15:0] ac_data;

    parameter PERIOD = 200;
    parameter real DUTY_CYCLE = 0.5;
    parameter OFFSET = 100;

    initial
    begin
        #OFFSET;
        forever
        begin
            clk = 1'b0;
            #(PERIOD-(PERIOD*DUTY_CYCLE)) clk = 1'b1;
            #(PERIOD*DUTY_CYCLE);
        end
    end
CU UUT (
        .clk(clk),
        .reset(reset),
        .en(en),
        .cu_data(cu_data),
        .ac_data(ac_data));

    initial begin
        #100;
        reset = 1'b1;
        #85;
        reset = 1'b0;
        en = 1'b1;
    end
endmodule
