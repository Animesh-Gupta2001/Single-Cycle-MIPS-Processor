`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:23 03/20/2023 
// Design Name: 
// Module Name:    adder32bit 
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
module adder32bit(in1, in2, out);
input [31:0] in1;
input [31:0] in2;
output [31:0] out;

assign out = in1 + in2;
endmodule
