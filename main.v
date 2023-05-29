`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:58 03/20/2023 
// Design Name: 
// Module Name:    main 
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

module main(clk, reset);
input clk;
input reset;


wire [31:0] Instruction;
wire [31:0] read_data_1;
wire [31:0] read_data_2;
wire RegDst, Jump,Branch, MemRead, MemtoReg, MemWrite, ALUSrc, RegWrite;
wire [1:0] ALUOp;
wire [31:0] SE_out;
wire mux_sel_reg_dest;
wire [31:0] mux_out_alusrc;
wire mux_sel_alusrc;
wire [31:0] mux_out_reg_data;
wire [4:0] mux_out_5b;
wire [3:0] ALUcontrol;
wire [31:0] rd;
wire [31:0] ALUresult;
wire isZero;
wire [31:0] left_shift_out_bta;
wire [31:0] jump_address;
wire [31:0] PCplus4;
wire branch_and_gate_result;
wire [31:0] branch_ALU_result;
wire [31:0] branch_mux_out;
wire [31:0] next_PC;
wire bne_control_signal;
wire final_branch_control_signal;
wire [31:0] PCout;
wire isNotZero;

//Portmapping

//Program Counter
Instruction_Fetch PC(.clk(clk),.reset(reset),.Instruction_Code(Instruction),.PCin(next_PC),.PCout(PCout));

//Instruction Memory
Instruction_Memory IM1(.PC(PCout),.reset(reset),.Instruction_Code(Instruction));

//Creating PC+4
adder_plus4 pc_plus_4_adder(.in(PCout),.out(PCplus4));

/*//Instruction Fetch unit
Instruction_Memory IM(.PC(pc_out),.reset(reset),.Instruction_Code(Instruction));*/

//Registers
register regs(.read_reg_num_1(Instruction[25:21]),.read_reg_num_2(Instruction[20:16]),.write_reg_num(mux_out_5b),.write_data(mux_out_reg_data),.read_data_1(read_data_1),.read_data_2(read_data_2),.RegWrite(RegWrite),.clk(clk),.reset(reset));

//Main Control Unit
control_unit maincontrol(.opcode(Instruction[31:26]), .RegDst(RegDst),.Jump(Jump),.Branch(Branch),.MemRead(MemRead),.MemtoReg(MemtoReg),.ALUOp(ALUOp),.MemWrite(MemWrite),.ALUSrc(ALUSrc),.RegWrite(RegWrite));

//Sign Extend Unit
sign_extend SE(.in(Instruction[15:0]),.out(SE_out));

//5-bit MUX
mux5b mux_reg_in(.in1(Instruction[20:16]),.in2(Instruction[15:11]),.s(RegDst),.out(mux_out_5b));

//32-bit MUXs
mux32 mux_alusrc(.in1(read_data_2),.in2(SE_out),.s(ALUSrc),.out(mux_out_alusrc));

mux32 mux_reg_or_data(.in1(ALUresult),.in2(rd),.s(MemtoReg),.out(mux_out_reg_data));

//ALU Control Unit
ALU_control alu_control_unit(.ALUop(ALUOp),.funct(Instruction[5:0]),.ALUcontrol(ALUcontrol));

//Data Memory
data_memory datamem(.reset(reset),.addr(ALUresult),.wd(read_data_2),.MemWrite(MemWrite),.MemRead(MemRead),.rd(rd));

//ALU
ALU alu_unit(.a(read_data_1),.b(mux_out_alusrc),.control(ALUcontrol),.ALUresult(ALUresult),.zero(isZero));

//Branch Target address left shifter
left_shifter32 bta_shifter(.in(SE_out),.out(left_shift_out_bta));

//Jump Address Left shifter
left_shifter26 jump_shifter(.in(Instruction[25:0]),.out(jump_address),.PC_4MSB(PCplus4[31:28]));

//Branch control signal AND gate
and(branch_and_gate_result, Branch, isZero);

//Branch not equal signal AND gate
not(isNotZero, isZero);
and(bne_control_signal, isNotZero,Branch);

//Mux to decide between bne and beq
mux1bit bne_beq_mux(.in1(branch_and_gate_result), .in2(bne_control_signal), .out(final_branch_control_signal),.s(Instruction[26]));

//branch address adder
adder32bit branch_adder(.in1(PCplus4),.in2(left_shift_out_bta),.out(branch_ALU_result));

//BTA MUX
mux32 bta_mux(.in1(PCplus4),.in2(branch_ALU_result),.s(final_branch_control_signal),.out(branch_mux_out));

//Branch or Jump Mux
mux32 branch_or_jump_mux(.in2(jump_address),.in1(branch_mux_out),.s(Jump),.out(next_PC));

endmodule
