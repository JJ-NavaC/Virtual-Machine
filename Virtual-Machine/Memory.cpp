#include "Memory.h"

using namespace std;

Memory::Memory(int lines){
	program = new string[lines];
}

void Memory::setMemory(int row ,string command){
	program[row] = command;
}

string *Memory::getMemory(){
	return program;
}
