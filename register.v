`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:00:20 03/06/2023 
// Design Name: 
// Module Name:    register 
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
module register(
input [4:0] read_reg_num_1,
input [4:0] read_reg_num_2,
input [4:0] write_reg_num,
input [31:0] write_data,
output [31:0] read_data_1,
output [31:0] read_data_2,
input RegWrite,
input clk,
input reset
    );
reg [31:0] RegMemory [31:0];

assign read_data_1 = RegMemory[read_reg_num_1];
assign read_data_2 = RegMemory[read_reg_num_2];

integer i;
initial begin 
for(i=0;i<32;i=i+1) RegMemory[i] = 8'b0;
end

always@(read_reg_num_1,read_reg_num_2,write_reg_num,RegWrite,write_data) begin
if (RegWrite == 1)
	RegMemory[write_reg_num] <= write_data;
end

endmodule
