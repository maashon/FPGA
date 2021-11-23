`timescale 1ns / 1ns
module fullAdder(a,b,ci,s,co);
input a,b,ci;
output s,co;
wire w1,w2,w3;
and #2(w1,a,b);
and #2(w2,a,c);
and #2(w3,b,c);
or #2(co,w1,w2,w3);
xor #3(s,a,b,ci);
endmodule
