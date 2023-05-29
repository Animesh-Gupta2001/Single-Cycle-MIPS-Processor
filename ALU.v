`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:25 02/13/2023 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] a,
    input [31:0] b,
    input [3:0] control,
    output reg [31:0] ALUresult,
    output reg zero
    );
always@(a,b,control) begin
case(control)
4'b0000:  ALUresult = a & b;
4'b0001:  ALUresult = a | b;
4'b0010:  ALUresult = a + b;
4'b0110:  ALUresult = a - b;
4'b0111: begin
			if(a<b) ALUresult = 1;
			else
			ALUresult = 0;
			end
endcase

if (!ALUresult) zero =1;
else zero = 0;
end

endmodule
