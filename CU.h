#ifndef CU_h
#define CU_h

#include <stddef.h> 
#include <string>

#include "Instruction.h"
#include "Memory.h"
#include "ALU.h"
#include "Register.h"

using namespace std;

class CU{	
	Memory memory;
	ALU alu;
	Register registr;
	
public:
	CU(Memory&,ALU&,Register&);
	
	Instruction fetch();
	void decode(Instruction);	
	void execute(string,string);
	void execute(string,int,int);
	
};

#endif
