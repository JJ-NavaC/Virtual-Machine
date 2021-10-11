#include <iostream>
#include <string>

#include "Memory.h"
#include "Instruction.h"
#include "Register.h"
#include "ALU.h"
#include "CU.h"

using namespace std;

int main(){	
	Memory memory;
	Instruction instruction1;
	Register registr;
	ALU alu;
	CU cu(memory,alu,registr);	
	
	instruction1.setInstruction("ADD 7, 9");	
	memory.addInstruction(1,instruction1);
	
	cu.decode(cu.fetch());

	return 0; 	   
}
	
