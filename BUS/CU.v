`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:15 01/12/2018 
// Design Name: 
// Module Name:    CU
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
module CU(clk,reset,en,cu_data,ac_data);

	 input clk, reset, en;
	 output [15:0] cu_data, ac_data ;
	 wire ar_we, ar_inc;	 
	 wire [7:0] ar_idat, ar_odat; 
	 wire pc_we, pc_inc;	 
	 wire [7:0] pc_idat, pc_odat;
	 wire ir_inc;	 
	 wire [15:0] ir_idat, ir_odat;
	 wire ac_we, ac_inc;	 
	 wire [15:0] ac_idat, ac_odat;
	 wire dr_we, dr_inc;	 
	 wire [15:0] dr_idat, dr_odat;
	 wire [15:0] mem_dat;
	 wire mem_we;
	 
	 wire [15:0] dec_signal;
	 wire [7:0] dec_opcode;
	 
	 wire [15:0] data;
	 wire [2:0] ctrl_alu;
	 wire ei, eo, pcinc;
	 
	 wire ff_enable;
	 	 
	 MEMORY rom (.clk(clk), .we(mem_we), .address(ar_odat), .datain(ac_odat), .dataout(mem_dat));//module MEMORY(clk,we,address,datain,dataout);
	 TimingSignals sig (.reset(reset), .clock(clk), .en(en), .Tsignal(dec_signal));	//TimingSignals(reset,clock,en,Tsignal)
    
	 REGISTER8 ar (.inc(ar_inc),.ld(ar_we),  .clr(reset), .clk(clk), .in(ar_idat), .out(ar_odat));//module REGISTER8(inc,ld,clr,clk,in,out);
	 REGISTER8 pc (.inc(pc_inc),.ld(pc_we), .clr(reset), .clk(clk), .in(pc_idat), .out(pc_odat));//module REGISTER8(inc,ld,clr,clk,in,out);
	 REGISTER16 ir (.inc(ir_inc), .ld(dec_signal[2]), .inc(ir_inc), .clr(reset), .clk(clk), .in(ir_idat), .out(ir_odat));//module REGISTER16(inc,ld,clr,clk,in,out);
	 REGISTER16 dr (.inc(dr_inc), .ld(dr_we),.clr(reset), .clk(clk), .in(dr_idat), .out(dr_odat));//module REGISTER16(inc,ld,clr,clk,in,out);
	 REGISTER16 ac (.inc(ac_inc), .ld(ac_we),.clr(reset), .clk(clk), .in(ac_idat), .out(ac_odat));//module REGISTER16(inc,ld,clr,clk,in,out);
	 ALU unit (.a(ac_odat), .b(dr_odat), .opcode(ctrl_alu),.out(data));//module ALU(a,b,opcode,out);
	 flipflop E (.in(eo),.clock(clk), .clear(reset),  .out(ei), .en(ff_enable));//module flipflop(in,clk,clear,out,en);
	 dSigGenerator decode_ir (.opcode(ir_odat[14:12]), .d(dec_opcode));//module dSigGenerator(opcode,d);
	 
	 wires control (.alu_pcinc(pcinc),.dec_signal(dec_signal),
						.ar_idat(ar_idat),.ir_idat(ir_idat),
						.dr_idat(dr_idat),.ac_idat(ac_idat),
						.mem_dat(mem_dat),.pc_odat(pc_odat),
						.ir_odat(ir_odat),.ar_we(ar_we),
						.dr_we(dr_we),.ac_we(ac_we),
						.pc_inc(pc_inc),.ff_en(ff_en),
						.mem_we(mem_we),.ctrl_alu(ctrl_alu),
						.alu_data(data),.dec(dec_opcode)
					  );
					  
	 assign cu_data = (((~dec_opcode[7]) && dec_signal[11]) | (dec_opcode[7] && dec_signal[8])) ? ac_odat : {16'b1001110001001010};
	 assign ac_data = mem_dat;//ac_odat;
					  
endmodule
