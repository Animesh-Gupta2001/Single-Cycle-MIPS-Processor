`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:30 03/23/2023 
// Design Name: 
// Module Name:    PC 
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
module PC(clk, reset, instruction_code);
	input clk;
	input reset;
	output [31:0] instruction_code;
	
	
	/*always@(reset) begin
	if (reset == 0)
	pc_out <= 32'b0;
	end
	
	always@(posedge clk) begin 
	pc_out<=pc_in;
	end
	*/
endmodule
