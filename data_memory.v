`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:51:22 03/20/2023 
// Design Name: 
// Module Name:    data_memory 
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
module data_memory(reset,addr,wd,MemWrite,MemRead,rd);
input reset;
input [31:0] addr;
input [31:0] wd;
output reg [31:0] rd;
input MemWrite;
input MemRead;

reg [7:0] Mem [37:0];

initial begin
//if (reset == 0) //data initialization
	$readmemh("Data.mem", Mem);
end

always@(addr,MemWrite,MemRead,wd) begin
if(MemWrite == 0 && MemRead == 1) //memory read
	rd <= Mem[addr];//{Mem[addr], Mem[addr+1], Mem[addr+2], Mem[addr+3]};
else if(MemWrite == 1 && MemRead ==0) //memory write
	//{Mem[addr], Mem[addr+1], Mem[addr+2], Mem[addr+3]} 
	Mem[addr] <= wd;
end
endmodule
