`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:09:09 02/27/2023 
// Design Name: 
// Module Name:    Instruction_Memory 
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
module Instruction_Memory(
input [31:0] PC,
input reset,
output [31:0] Instruction_Code
    );
reg [7:0] Mem [99:0]; //byte addressable memory with 37 locations

//for normal memory read
assign Instruction_Code = {Mem[PC], Mem[PC+1], Mem[PC+2], Mem[PC+3]};
//reads instruction code specified by PC // big endian

//reset condition
always@(reset)
begin
if (reset==0) begin
//Mem[0] = 8'h84;
//Mem[1] = 8'h04;
//Mem[2] = 8'h12;
//Mem[3] = 8'h32;
//first 32bit locations with data 84041232 hexadecimal //bigendian style
//Mem[4] = 8'h25;
//Mem[5] = 8'h43;
//Mem[6] = 8'h17;
//Mem[7] = 8'h89;
//second 32bit locations with data 84041232 hexadecimal //bigendian style
//Mem[8] = 8'h22;
//Mem[9] = 8'h52;
//Mem[10] = 8'h00;
//Mem[11] = 8'h04;
//third 32bit locations with data 22520004 hexadecimal (addi instr) //bigendian style
//Mem[12] = 8'h16;
//Mem[13] = 8'h20;
//Mem[14] = 8'hff;
//Mem[15] = 8'hfa;
//fourth 32bit locations with data 1620fffa hexadecimal (bne instr)//bigendian style
$readmemh("Instruction.mem",Mem);

end
end 

endmodule
