`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:45 03/20/2023 
// Design Name: 
// Module Name:    control_unit 
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
module control_unit( input [5:0] opcode, output reg RegDst, output reg Jump,
output reg Branch, output reg MemRead, output reg MemtoReg, output reg [1:0] ALUOp, output reg MemWrite,
output reg ALUSrc, output reg RegWrite);

always@(opcode) begin
if (opcode == 6'b00000) begin //r-type instructions
	RegDst <= 1;
	Jump <= 0;
	Branch <= 0;
	MemRead <= 0;
	MemtoReg <= 0;
	ALUOp <= 2'b10;
	MemWrite <= 0;
	ALUSrc <= 0;
	RegWrite <= 1;
end

else if (opcode == 6'b100011) begin  //lw instruction
	RegDst <= 0;
	Jump <= 0;
	Branch <= 0;
	MemRead <= 1;
	MemtoReg <= 1;
	ALUOp <= 2'b00;
	MemWrite <= 0;
	ALUSrc <= 1;
	RegWrite <= 1;
end

else if (opcode ==6'b101011) begin  //sw instructions
	RegDst <= 0;
	Jump <= 0;
	Branch <= 0;
	MemRead <= 0;
	MemtoReg <= 1;
	ALUOp <= 2'b00;
	MemWrite <= 1;
	ALUSrc <= 1;
	RegWrite <= 0; end

else if (opcode == 6'b000101) begin //bne instruction
	RegDst <=0 ;
	Jump <= 0;
	Branch <= 1;
	MemRead <= 0;
	MemtoReg <= 0;
	ALUOp <= 2'b01;
	MemWrite <= 0;
	ALUSrc <= 0;
	RegWrite <=0 ; end
	
else if (opcode == 6'b000100) begin //beq instruction
	RegDst <= 0;
	Jump <=0 ;
	Branch <=1 ;
	MemRead <= 0;
	MemtoReg <= 0;
	ALUOp <= 2'b01;
	MemWrite <= 0;
	ALUSrc <= 0;
	RegWrite <= 0; end

else if (opcode == 6'b 000010) begin //j instruction
	RegDst <= 0;
	Jump <= 1;
	Branch <= 0;
	MemRead <= 0;
	MemtoReg <= 0;
	ALUOp <= 2'b00;
	MemWrite <= 0;
	ALUSrc <= 0;
	RegWrite <=0 ;
	
end
end


endmodule
