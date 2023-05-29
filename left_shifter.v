`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:38:56 03/20/2023 
// Design Name: 
// Module Name:    left_shifter 
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
module left_shifter32(in,out);
input [31:0] in;
output reg [31:0] out;

always@(in) out <= in<<2;

endmodule
