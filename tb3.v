`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:46:21 03/23/2023
// Design Name:   main
// Module Name:   E:/Non-install/college/4-2/Computer Architecture/Lab/Assignment/controlunit/tb3.v
// Project Name:  controlunit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb3;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		reset = 1;
		#5 reset = 0;
		#5 reset = 1;
	end
	
	initial begin
	clk = 0;
	repeat(30)
	#10 clk = ~clk; #10 
	$finish;
	end	
      
endmodule

