`timescale 1ns / 1ps
module test();
reg cl,rst,ud;
wire [3:0] out;
fourBitCounter mut (cl,rst,ud,out);

initial begin
cl=1;
rst=1;
ud=0;
end
always begin
#5 cl=0;
#5 cl=1;
end
initial repeat(100)#20 begin
rst=~rst;
end

initial begin
 #1000 $stop;
 end
endmodule
