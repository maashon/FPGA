module TicTacToe(
//	Clock Input
  input CLOCK_50,	//	50 MHz
  input CLOCK_27,     //      27 MHz
  input [3:0] KEY,      //	Pushbutton[3:0]
//	DPDT Switch
  input [17:0] SW,		//	Toggle Switch[17:0]
//	7-SEG Display
  output [6:0]	HEX0,HEX1,HEX2,HEX3,HEX4,HEX5,HEX6,HEX7,  // Seven Segment Digits
//	LED
  output [8:0]	LEDG,  //	LED Green[8:0]
  output [17:0] LEDR,  //	LED Red[17:0]
//	GPIO
 inout [35:0] GPIO_0,GPIO_1,	//	GPIO Connections
//  PS2 data and clock lines		
  input	PS2_DAT,
  input	PS2_CLK,
  output TD_RESET,	//	TV Decoder Reset
// VGA
  output VGA_CLK,   						//	VGA Clock
  output VGA_HS,							//	VGA H_SYNC
  output VGA_VS,							//	VGA V_SYNC
  output VGA_BLANK,						//	VGA BLANK
  output VGA_SYNC,						//	VGA SYNC
  output [9:0] VGA_R,   						//	VGA Red[9:0]
  output [9:0] VGA_G,	 						//	VGA Green[9:0]
  output [9:0] VGA_B   						//	VGA Blue[9:0]
);

//	All inout port turn to tri-state
assign	GPIO_0		=	36'hzzzzzzzzz;
assign	GPIO_1		=	36'hzzzzzzzzz;

wire RST;
assign RST = KEY[0];

// reset delay gives some time for peripherals to initialize
wire DLY_RST;
Reset_Delay r0(	.iCLK(CLOCK_50),.oRESET(DLY_RST) );

// Send switches to red leds 
assign LEDR = SW;

// Turn off green leds
assign LEDG = 8'h00;

wire [6:0] blank = 7'b111_1111;

// blank unused 7-segment digits
assign HEX0 = blank;
assign HEX1 = blank;
assign HEX2 = blank;
assign HEX3 = blank;
assign HEX4 = blank;
assign HEX5 = blank;
assign HEX6 = blank;
assign HEX7 = blank;

wire		VGA_CTRL_CLK;
wire		AUD_CTRL_CLK;
wire [9:0]	mVGA_R;
wire [9:0]	mVGA_G;
wire [9:0]	mVGA_B;
wire [9:0]	mCoord_X;
wire [9:0]	mCoord_Y;

assign	TD_RESET = 1'b1; // Enable 27 MHz

VGA_Audio_PLL 	p1 (	
	.areset(~DLY_RST),
	.inclk0(CLOCK_27),
	.c0(VGA_CTRL_CLK),
	.c1(AUD_CTRL_CLK),
	.c2(VGA_CLK)
);


// Cursor
reg [9:0] cursor_x;
reg [9:0] cursor_y;

/* Square
	sqaure[21:12]: x
	square[11:2]: y
	square[1:0]: player
	*/
reg [17:0] square;
reg [1:0] square2 [2:0] [2:0];
reg [1:0] rn;
reg [1:0] cn;
reg [5:0] CRD [7:0]; // [7:5]Column, [4:2]Row, [1:0]Diagonal;
reg [3:0] CRD_i;
reg [1:0] player;

reg scan_ready2;
/**
	SW[0]: Move right. 
	SW[1]: Move left. 
	SW[2]: Move down. 
	SW[3]: Move up. 
*/



initial begin
square = 0;
player = 1;
cursor_x = 70;
cursor_y = 70;
end

//Keyboard Control
wire reset = 1'b0;
wire [7:0] scan_code;
reg [7:0] history[1:4];
reg [7:0] new_code;
wire read, scan_ready;
/*
oneshot pulser(
   .pulse_out(read),
   .trigger_in(scan_ready),
   .clk(CLOCK_50)
);

keyboard kbd(
  .keyboard_clk(PS2_CLK),
  .keyboard_data(PS2_DAT),
  .clock50(CLOCK_50),
  .reset(reset),
  .read(read),
  .scan_ready(scan_ready),
  .scan_code(scan_code)
);
*/
// Internal Wires


// Internal Registers
PS2_Controller PS2 (
	// Inputs
	.CLOCK_50				(CLOCK_50),
	.reset				(~KEY[0]),

	// Bidirectionals
	.PS2_CLK			(PS2_CLK),
 	.PS2_DAT			(PS2_DAT),

	// Outputs
	.received_data		(scan_code),
	.received_data_en	(scan_ready)
);

always @ (posedge scan_ready) begin 
	history[4] <= history[3];
	history[3] <= history[2];
	history[2] <= history[1];
	history[1] <= scan_code;
	if(scan_code == 8'h2D) begin 
		square = 0;
		player = 1;
		cursor_x <= 70;
		cursor_y = 70;
	end // 137-142

	if(scan_ready == 1'b1) begin 
		if(history[2] == 8'hE0) begin
			// move right
			if(history[1] == 8'h74 && cursor_x <= 300)
				cursor_x <= cursor_x + 160;
			// move left
			if(history[1] == 8'h6B && cursor_x >= 160)
				cursor_x <= cursor_x - 160;
			// move down
			if( history[1] == 8'h72 && cursor_y <= 300)
				cursor_y = cursor_y + 160;
			// move up
			if(history[1] == 8'h75 && cursor_y >= 160)
				cursor_y = cursor_y - 160;
		end
			/* Record each square belonging to which player.
			 * A player cannot draw twice consecutively.
			 */
		if(history[2] != 8'hF0) begin
			if((history[1] == 8'h29 && player == 1)|| (history[1] == 8'h5A && player == 2)) begin 
				if(cursor_x == 70 && cursor_y == 70) 
					square[17:16] = player;
				if(cursor_x == 230 && cursor_y == 70) 
					square[15:14] = player;
				if(cursor_x == 390 && cursor_y == 70) 
					square[13:12] = player;
				if(cursor_x == 70 && cursor_y == 230) 
					square[11:10] = player;
				if(cursor_x == 230 && cursor_y == 230) 
					square[9:8] = player;
				if(cursor_x == 390 && cursor_y ==230) 
					square[7:6] = player;
				if(cursor_x == 70 && cursor_y == 390) 
					square[5:4] = player;
				if(cursor_x == 230 && cursor_y == 390) 
					square[3:2] = player;
				if(cursor_x == 390 && cursor_y == 390) 
					square[1:0] = player;
					
					player = 2;

					// Split into squares, square2[row][column]
					square2[0][0] = square[17:16];
					square2[0][1] = square[15:14];
					square2[0][2] = square[13:12];
					square2[1][0] = square[11:10];
					square2[1][1] = square[9:8];
					square2[1][2] = square[7:6];
					square2[2][0] = square[5:4];
					square2[2][1] = square[3:2];
					square2[2][2] = square[1:0];
					// Split Columns
					CRD[7][5:4] = square2[0][0];
					CRD[7][3:2] = square2[1][0];
					CRD[7][1:0] = square2[2][0];

					CRD[6][5:4] = square2[0][1];
					CRD[6][3:2] = square2[1][1];
					CRD[6][1:0] = square2[2][1];

					CRD[5][5:4] = square2[0][2];
					CRD[5][3:2] = square2[1][2];
					CRD[5][1:0] = square2[2][2];

					// Split Rows
					CRD[4][5:4] = square2[0][0];
					CRD[4][3:2] = square2[0][1];
					CRD[4][1:0] = square2[0][2];

					CRD[3][5:4] = square2[1][0];
					CRD[3][3:2] = square2[1][1];
					CRD[3][1:0] = square2[1][2];

					CRD[2][5:4] = square2[2][0];
					CRD[2][3:2] = square2[2][1];
					CRD[2][1:0] = square2[2][2];

					// Split Diagonals
					CRD[1][5:4] = square2[0][0];
					CRD[1][3:2] = square2[1][1];
					CRD[1][1:0] = square2[2][2];

					CRD[0][5:4] = square2[0][2];
					CRD[0][3:2] = square2[1][1];
					CRD[0][1:0] = square2[2][0];
					
					for(CRD_i=0; CRD_i<8;CRD_i=CRD_i+1) begin 
						// player-x(01), AI-o(10), empty-z
						// will win? Check for states: ooz, ozo, zoo.
						if(player == 2) begin
							if(CRD[CRD_i] == 6'b101000) begin
								CRD[CRD_i][1:0] = 2'b10;
								player = 1;
								case(CRD_i) 
									0: square2[2][0] = 2'b10;
									1: square2[2][2] = 2'b10;
									2: square2[2][2] = 2'b10;
									3: square2[1][2] = 2'b10;
									4: square2[0][2] = 2'b10;
									5: square2[2][2] = 2'b10;
									6: square2[2][1] = 2'b10;
									7: square2[2][0] = 2'b10;
								endcase
							end else if(CRD[CRD_i] == 6'b100010) begin
								CRD[CRD_i][3:2] = 2'b10;
								player = 1;
								case(CRD_i) 
									0: square2[1][1] = 2'b10;
									1: square2[1][1] = 2'b10;
									2: square2[2][1] = 2'b10;
									3: square2[1][1] = 2'b10;
									4: square2[0][1] = 2'b10;
									5: square2[1][2] = 2'b10;
									6: square2[1][1] = 2'b10;
									7: square2[1][0] = 2'b10;
								endcase
							end else if(CRD[CRD_i] == 6'b001010) begin
								CRD[CRD_i][5:4] = 2'b10;
								player = 1;
								case(CRD_i) 
									0: square2[0][2] = 2'b10;
									1: square2[0][0] = 2'b10;
									2: square2[2][0] = 2'b10;
									3: square2[1][0] = 2'b10;
									4: square2[0][0] = 2'b10;
									5: square2[0][2] = 2'b10;
									6: square2[0][1] = 2'b10;
									7: square2[0][0] = 2'b10;
								endcase
							end
						end
					end
					
					// will lose? Check for states: xxz, xzx, zxx.
					
					if(player == 2)begin 
						for(CRD_i = 0; CRD_i < 8; CRD_i = CRD_i + 1) begin 
							if(player == 2) begin
								if(CRD[CRD_i] == 6'b010100) begin
									CRD[CRD_i][1:0] = 2'b10;
									player = 1;
									case(CRD_i) 
										0: square2[2][0] = 2'b10;
										1: square2[2][2] = 2'b10;
										2: square2[2][2] = 2'b10;
										3: square2[1][2] = 2'b10;
										4: square2[0][2] = 2'b10;
										5: square2[2][2] = 2'b10;
										6: square2[2][1] = 2'b10;
										7: square2[2][0] = 2'b10;
									endcase
								end else if(CRD[CRD_i] == 6'b010001) begin
									CRD[CRD_i][3:2] = 2'b10;
									player = 1;
									case(CRD_i) 
										0: square2[1][1] = 2'b10;
										1: square2[1][1] = 2'b10;
										2: square2[2][1] = 2'b10;
										3: square2[1][1] = 2'b10;
										4: square2[0][1] = 2'b10;
										5: square2[1][2] = 2'b10;
										6: square2[1][1] = 2'b10;
										7: square2[1][0] = 2'b10;
									endcase
								end else if(CRD[CRD_i] == 6'b000101) begin
									CRD[CRD_i][5:4] = 2'b10;
									player = 1;
									case(CRD_i) 
										0: square2[0][2] = 2'b10;
										1: square2[0][0] = 2'b10;
										2: square2[2][0] = 2'b10;
										3: square2[1][0] = 2'b10;
										4: square2[0][0] = 2'b10;
										5: square2[0][2] = 2'b10;
										6: square2[0][1] = 2'b10;
										7: square2[0][0] = 2'b10;
									endcase
								end
							end
						end 

					end 

					// check every square to find an empty one.
					if(player == 2) begin 
						if(square2[1][1] == 2'b00) begin
							square2[1][1] = 2'b10;
							player = 1;
						end else if(square2[0][0] == 2'b00) begin
							square2[0][0] = 2'b10;
							player = 1;
						end else if(square2[0][2] == 2'b00) begin
							square2[0][2] = 2'b10;
							player = 1;
						end else if(square2[2][0] == 2'b00) begin
							square2[2][0] = 2'b10;
							player = 1;
						end else if(square2[2][2] == 2'b00) begin
							square2[2][2] = 2'b10;
							player = 1;
						end else begin 
							for(rn=0; rn < 3; rn=rn+1) begin
								for(cn=0; cn < 3; cn=cn+1) begin
									if(player == 2 && square2[rn][cn] == 2'b00) begin
										square2[rn][cn] = 2'b10;
										player = 1;
									end
								end
							end
						end
					end 


					// write back to square.
					square[17:16] = square2[0][0];
					square[15:14] = square2[0][1];
					square[13:12] = square2[0][2];
					square[11:10] = square2[1][0];
					square[9:8] = square2[1][1];
					square[7:6] = square2[1][2];
					square[5:4] = square2[2][0];
					square[3:2] = square2[2][1];
					square[1:0] = square2[2][2];

				end else if (history[1] == 8'h5A && player == 2)
					player = 1;
			end 
		end
	end 

// SW Control
/*
always @ (posedge KEY[1]) begin
	if(SW[5]) begin
		square = 0;
		player = 1;
	end
	// move right
	if(cursor_x = 230 && SW[0])
		cursor_x = cursor_x + 160;
	else if(SW[0])
		cursor_x = 70;
	// move left
	if(cursor_x > 70 && SW[1])
		cursor_x = cursor_x - 160;
	else if(SW[1])
		cursor_x = 390;
	// move down
	if((cursor_y = 230) && SW[2])
		cursor_y = cursor_y + 160;
	else if(SW[2])
		cursor_y = 70;
	// move up
	if((cursor_y > 70) && SW[3])
		cursor_y = cursor_y - 160;
	else if(SW[3])
		cursor_y = 390;
	// Draw
	if(SW[4]) begin
		if(cursor_x == 70 && cursor_y == 70) 
			square[17:16] = player;
		if(cursor_x == 230 && cursor_y == 70) 
			square[15:14] = player;
		if(cursor_x == 390 && cursor_y == 70) 
			square[13:12] = player;
		if(cursor_x == 70 && cursor_y == 230) 
			square[11:10] = player;
		if(cursor_x == 230 && cursor_y == 230) 
			square[9:8] = player;
		if(cursor_x == 390 && cursor_y ==230) 
			square[7:6] = player;
		if(cursor_x == 70 && cursor_y == 390) 
			square[5:4] = player;
		if(cursor_x == 230 && cursor_y == 390) 
			square[3:2] = player;
		if(cursor_x == 390 && cursor_y == 390) 
			square[1:0] = player;
		if(player == 1)
			player = 2;
		else
			player = 1;
	end
end
*/
wire [9:0] r, g, b;

// Board
board c1(mCoord_X, mCoord_Y, cursor_x, cursor_y, square, r, g, b);

assign mVGA_R = r;
assign mVGA_G = g;
assign mVGA_B = b;

/*
VGA_Controller	u1 (	
// Host Side
	.iCursor_RGB_EN(4'h7),
	.iRed(mVGA_R),
	.iGreen(mVGA_G),
	.iBlue(mVGA_B),
	.oCoord_X(mCoord_X),
	.oCoord_Y(mCoord_Y),
//  VGA Side
	.oVGA_R(VGA_R),
	.oVGA_G(VGA_G),
	.oVGA_B(VGA_B),
	.oVGA_H_SYNC(VGA_HS),
	.oVGA_V_SYNC(VGA_VS),
	.oVGA_SYNC(VGA_SYNC),
	.oVGA_BLANK(VGA_BLANK),
//   Control Signal
	.iCLK(VGA_CTRL_CLK),
	.iRST_N(DLY_RST&KEY[0])	
);
*/


vga_sync u1(
   .iCLK(VGA_CTRL_CLK),
   .iRST_N(DLY_RST&KEY[0]),	
   .iRed(mVGA_R),
   .iGreen(mVGA_G),
   .iBlue(mVGA_B),
   // pixel coordinates
   .px(mCoord_X),
   .py(mCoord_Y),
   // VGA Side
   .VGA_R(VGA_R),
   .VGA_G(VGA_G),
   .VGA_B(VGA_B),
   .VGA_H_SYNC(VGA_HS),
   .VGA_V_SYNC(VGA_VS),
   .VGA_SYNC(VGA_SYNC),
   .VGA_BLANK(VGA_BLANK)
);


endmodule