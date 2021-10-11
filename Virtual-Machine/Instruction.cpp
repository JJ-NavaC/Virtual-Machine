#include "Instruction.h"
using namespace std;

Instruction::Instruction(){
	
}

void Instruction::setInstruction(string x){
	instruction = x;
}

void Instruction::printI(){
	cout << instruction << endl;
}

string Instruction::getInstruction(){
	return instruction;
}
