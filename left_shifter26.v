`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:05:23 04/07/2023 
// Design Name: 
// Module Name:    left_shifter26 
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
module left_shifter26(in, PC_4MSB, out);
input [25:0] in;
output [31:0] out;
input [3:0] PC_4MSB;

wire [27:0] w1;

assign w1 = in<<2;
assign out = {PC_4MSB,w1};

/*always@(in,PC_4MSB,out) begin
	w1 = in<<2;
	out = {PC_4MSB,w1};
end*/
endmodule
