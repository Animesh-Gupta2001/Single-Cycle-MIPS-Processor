`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:27 04/07/2023 
// Design Name: 
// Module Name:    mux1bit 
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
module mux1bit(in1,in2, s,out);
input in1;
input in2;
output reg out;
input s;

always@(in1,in2,s) begin
if (s==0) out <= in1;
else out <= in2;
end


endmodule
