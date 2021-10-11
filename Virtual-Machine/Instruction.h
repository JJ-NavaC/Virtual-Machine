#ifndef Instruction_h
#define Instruction_h

#include <iostream>
#include <stddef.h>
#include <string>

using namespace std;

class Instruction {
	string instruction;

public:
	Instruction();
	
	void setInstruction(string);
	string getInstruction();
	
	void printI();
};


#endif
