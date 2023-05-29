`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:22 03/23/2023 
// Design Name: 
// Module Name:    mux5b 
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
module mux5b(in1,in2, s,out);
input [4:0] in1;
input [4:0] in2;
output reg [4:0] out;
input s;

always@(in1,in2,s) begin
if (s==0) out <= in1;
else out <= in2;
end


endmodule
