`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:54:16 02/27/2023 
// Design Name: 
// Module Name:    Instruction_Fetch 
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
module Instruction_Fetch(clk, reset, PCin, Instruction_Code, PCout
    );
input clk;
input reset;
input [31:0] PCin;
output [31:0] Instruction_Code;
output reg [31:0] PCout;

//instantiation of instruction memory
//Instruction_Memory IM1(PCout,reset,Instruction_Code);

always@(posedge clk, negedge reset) begin
if (reset==0) PCout <=32'b0;
else
PCout <= PCin;
end


endmodule
