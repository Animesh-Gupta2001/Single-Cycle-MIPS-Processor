`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:32:57 03/20/2023 
// Design Name: 
// Module Name:    mux 
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
module mux32(in1,in2, s,out);
input [31:0] in1;
input [31:0] in2;
output reg [31:0] out;
input s;

always@(in1,in2,s) begin
if (s==0) out <= in1;
else out <= in2;
end


endmodule
