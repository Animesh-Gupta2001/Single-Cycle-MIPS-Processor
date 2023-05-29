`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:13 03/20/2023 
// Design Name: 
// Module Name:    ALU_control 
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
module ALU_control(input [1:0] ALUop, input [5:0] funct, output reg [3:0] ALUcontrol);


always@(ALUop,funct) begin
if (ALUop == 2'b00) 
	ALUcontrol = 4'b0010;
else if (ALUop == 2'b01)
	ALUcontrol = 4'b0110;
else if ((ALUop[1] == 1) && (funct[3:0] == 4'b0000))
	ALUcontrol = 4'b0010;
else if ((ALUop[1] == 1) && (funct[3:0] == 4'b0010))
	ALUcontrol = 4'b0110;
else if ((ALUop[1] == 1) && (funct[3:0] == 4'b0100))
	ALUcontrol = 4'b0000;
else if ((ALUop[1] == 1) && (funct[3:0] == 4'b0101))
	ALUcontrol = 4'b0001;
else if ((ALUop[1] == 1) && (funct[3:0] == 4'b1010))
	ALUcontrol = 4'b0111;
end
	
endmodule
