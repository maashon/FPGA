////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: Adder_map.v
// /___/   /\     Timestamp: Tue Nov 14 14:54:53 2017
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -s 3 -pcf Adder.pcf -sdf_anno true -sdf_path netgen/map -insert_glbl true -w -dir netgen/map -ofmt verilog -sim Adder_map.ncd Adder_map.v 
// Device	: 6slx4tqg144-3 (PRODUCTION 1.23 2013-10-13)
// Input file	: Adder_map.ncd
// Output file	: C:\Users\Parsa\Desktop\fpga\multiplexer\netgen\map\Adder_map.v
// # of Modules	: 1
// Design Name	: Adder
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module Adder (
  Ci, Cout, a, b, s
);
  input Ci;
  output Cout;
  input [3 : 0] a;
  input [3 : 0] b;
  output [3 : 0] s;
  wire a_3_IBUF_0;
  wire b_3_IBUF_0;
  wire a_2_IBUF_0;
  wire b_2_IBUF_0;
  wire s_3_OBUF_0;
  wire s_1_OBUF_87;
  wire a_1_IBUF_0;
  wire b_1_IBUF_0;
  wire a_0_IBUF_0;
  wire b_0_IBUF_0;
  wire Ci_IBUF_0;
  wire s_0_OBUF_93;
  wire s_2_OBUF_94;
  wire \Madd_n0004_Madd_cy<2>1 ;
  wire a_1_IBUF_16;
  wire Ci_IBUF_10;
  wire a_0_IBUF_13;
  wire a_2_IBUF_19;
  wire a_3_IBUF_22;
  wire b_0_IBUF_25;
  wire b_2_IBUF_31;
  wire b_3_IBUF_34;
  wire b_1_IBUF_28;
  wire s_3_OBUF_50;
  wire \Madd_n0004_Madd_cy<2>1_pack_1 ;
  wire [3 : 3] Madd_n0004_Madd_cy;
  wire [2 : 2] Madd_n0004_Madd_lut;
  initial $sdf_annotate("netgen/map/adder_map.sdf");
  X_OPAD #(
    .LOC ( "PAD142" ))
  Cout_15 (
    .PAD(Cout)
  );
  X_OBUF #(
    .LOC ( "PAD142" ))
  Cout_OBUF (
    .I(Madd_n0004_Madd_cy[3]),
    .O(Cout)
  );
  X_OPAD #(
    .LOC ( "PAD136" ))
  \s<0>  (
    .PAD(s[0])
  );
  X_OBUF #(
    .LOC ( "PAD136" ))
  s_0_OBUF (
    .I(s_0_OBUF_93),
    .O(s[0])
  );
  X_OPAD #(
    .LOC ( "PAD137" ))
  \s<1>  (
    .PAD(s[1])
  );
  X_OBUF #(
    .LOC ( "PAD137" ))
  s_1_OBUF (
    .I(s_1_OBUF_87),
    .O(s[1])
  );
  X_OPAD #(
    .LOC ( "PAD138" ))
  \s<2>  (
    .PAD(s[2])
  );
  X_OBUF #(
    .LOC ( "PAD138" ))
  s_2_OBUF (
    .I(s_2_OBUF_94),
    .O(s[2])
  );
  X_OPAD #(
    .LOC ( "PAD141" ))
  \s<3>  (
    .PAD(s[3])
  );
  X_OBUF #(
    .LOC ( "PAD141" ))
  s_3_OBUF (
    .I(s_3_OBUF_0),
    .O(s[3])
  );
  X_IPAD #(
    .LOC ( "PAD144" ))
  \a<1>  (
    .PAD(a[1])
  );
  X_BUF #(
    .LOC ( "PAD144" ))
  a_1_IBUF (
    .O(a_1_IBUF_16),
    .I(a[1])
  );
  X_BUF #(
    .LOC ( "PAD144" ))
  \ProtoComp2.IMUX.2  (
    .I(a_1_IBUF_16),
    .O(a_1_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD121" ))
  Ci_19 (
    .PAD(Ci)
  );
  X_BUF #(
    .LOC ( "PAD121" ))
  Ci_IBUF (
    .O(Ci_IBUF_10),
    .I(Ci)
  );
  X_BUF #(
    .LOC ( "PAD121" ))
  \ProtoComp2.IMUX  (
    .I(Ci_IBUF_10),
    .O(Ci_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD143" ))
  \a<0>  (
    .PAD(a[0])
  );
  X_BUF #(
    .LOC ( "PAD143" ))
  a_0_IBUF (
    .O(a_0_IBUF_13),
    .I(a[0])
  );
  X_BUF #(
    .LOC ( "PAD143" ))
  \ProtoComp2.IMUX.1  (
    .I(a_0_IBUF_13),
    .O(a_0_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD145" ))
  \a<2>  (
    .PAD(a[2])
  );
  X_BUF #(
    .LOC ( "PAD145" ))
  a_2_IBUF (
    .O(a_2_IBUF_19),
    .I(a[2])
  );
  X_BUF #(
    .LOC ( "PAD145" ))
  \ProtoComp2.IMUX.3  (
    .I(a_2_IBUF_19),
    .O(a_2_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD146" ))
  \a<3>  (
    .PAD(a[3])
  );
  X_BUF #(
    .LOC ( "PAD146" ))
  a_3_IBUF (
    .O(a_3_IBUF_22),
    .I(a[3])
  );
  X_BUF #(
    .LOC ( "PAD146" ))
  \ProtoComp2.IMUX.4  (
    .I(a_3_IBUF_22),
    .O(a_3_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD122" ))
  \b<0>  (
    .PAD(b[0])
  );
  X_BUF #(
    .LOC ( "PAD122" ))
  b_0_IBUF (
    .O(b_0_IBUF_25),
    .I(b[0])
  );
  X_BUF #(
    .LOC ( "PAD122" ))
  \ProtoComp2.IMUX.5  (
    .I(b_0_IBUF_25),
    .O(b_0_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD134" ))
  \b<2>  (
    .PAD(b[2])
  );
  X_BUF #(
    .LOC ( "PAD134" ))
  b_2_IBUF (
    .O(b_2_IBUF_31),
    .I(b[2])
  );
  X_BUF #(
    .LOC ( "PAD134" ))
  \ProtoComp2.IMUX.7  (
    .I(b_2_IBUF_31),
    .O(b_2_IBUF_0)
  );
  X_IPAD #(
    .LOC ( "PAD135" ))
  \b<3>  (
    .PAD(b[3])
  );
  X_BUF #(
    .LOC ( "PAD135" ))
  b_3_IBUF (
    .O(b_3_IBUF_34),
    .I(b[3])
  );
  X_BUF #(
    .LOC ( "PAD135" ))
  \ProtoComp2.IMUX.8  (
    .I(b_3_IBUF_34),
    .O(b_3_IBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X3Y0" ),
    .INIT ( 64'hFF0000FF00FFFF00 ))
  \Madd_n0004_Madd_xor<0>11  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(a_0_IBUF_0),
    .ADR4(b_0_IBUF_0),
    .ADR5(Ci_IBUF_0),
    .O(s_0_OBUF_93)
  );
  X_IPAD #(
    .LOC ( "PAD133" ))
  \b<1>  (
    .PAD(b[1])
  );
  X_BUF #(
    .LOC ( "PAD133" ))
  b_1_IBUF (
    .O(b_1_IBUF_28),
    .I(b[1])
  );
  X_BUF #(
    .LOC ( "PAD133" ))
  \ProtoComp2.IMUX.6  (
    .I(b_1_IBUF_28),
    .O(b_1_IBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X0Y0" ),
    .INIT ( 64'h0000FFFFFFFF0000 ))
  \Madd_n0004_Madd_lut<2>1  (
    .ADR0(1'b1),
    .ADR1(1'b1),
    .ADR2(1'b1),
    .ADR3(1'b1),
    .ADR4(a_2_IBUF_0),
    .ADR5(b_2_IBUF_0),
    .O(Madd_n0004_Madd_lut[2])
  );
  X_LUT6 #(
    .LOC ( "SLICE_X0Y0" ),
    .INIT ( 64'h1E1E1E781E787878 ))
  \Madd_n0004_Madd_xor<2>11  (
    .ADR0(a_1_IBUF_0),
    .ADR1(b_1_IBUF_0),
    .ADR2(Madd_n0004_Madd_lut[2]),
    .ADR3(Ci_IBUF_0),
    .ADR4(a_0_IBUF_0),
    .ADR5(b_0_IBUF_0),
    .O(s_2_OBUF_94)
  );
  X_BUF   \s_1_OBUF/s_1_OBUF_BMUX_Delay  (
    .I(\Madd_n0004_Madd_cy<2>1_pack_1 ),
    .O(\Madd_n0004_Madd_cy<2>1 )
  );
  X_BUF   \s_1_OBUF/s_1_OBUF_AMUX_Delay  (
    .I(s_3_OBUF_50),
    .O(s_3_OBUF_0)
  );
  X_LUT6 #(
    .LOC ( "SLICE_X1Y0" ),
    .INIT ( 64'h9996966699969666 ))
  \Madd_n0004_Madd_xor<1>11  (
    .ADR0(a_1_IBUF_0),
    .ADR1(b_1_IBUF_0),
    .ADR2(a_0_IBUF_0),
    .ADR3(b_0_IBUF_0),
    .ADR4(Ci_IBUF_0),
    .ADR5(1'b1),
    .O(s_1_OBUF_87)
  );
  X_LUT5 #(
    .LOC ( "SLICE_X1Y0" ),
    .INIT ( 32'hEEE8E888 ))
  \Madd_n0004_Madd_cy<2>11  (
    .ADR0(a_1_IBUF_0),
    .ADR1(b_1_IBUF_0),
    .ADR2(a_0_IBUF_0),
    .ADR3(b_0_IBUF_0),
    .ADR4(Ci_IBUF_0),
    .O(\Madd_n0004_Madd_cy<2>1_pack_1 )
  );
  X_LUT6 #(
    .LOC ( "SLICE_X1Y0" ),
    .INIT ( 64'hEEE8E888EEE8E888 ))
  \Madd_n0004_Madd_cy<3>11  (
    .ADR0(a_3_IBUF_0),
    .ADR1(b_3_IBUF_0),
    .ADR2(a_2_IBUF_0),
    .ADR3(b_2_IBUF_0),
    .ADR4(\Madd_n0004_Madd_cy<2>1 ),
    .ADR5(1'b1),
    .O(Madd_n0004_Madd_cy[3])
  );
  X_LUT5 #(
    .LOC ( "SLICE_X1Y0" ),
    .INIT ( 32'h99969666 ))
  \Madd_n0004_Madd_xor<3>11  (
    .ADR0(a_3_IBUF_0),
    .ADR1(b_3_IBUF_0),
    .ADR2(a_2_IBUF_0),
    .ADR3(b_2_IBUF_0),
    .ADR4(\Madd_n0004_Madd_cy<2>1 ),
    .O(s_3_OBUF_50)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

