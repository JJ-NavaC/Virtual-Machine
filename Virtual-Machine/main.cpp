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
	
	
	
	/*
	// #include <sstream>
	char program[1][50];
	string lines[1];
	int i = 0;
	
	while(i!=1){
	cout << i+1 << ": ";
	cin.getline(program[i], 50);
	i++;
	}  
	
	Memory memory(i); 						// Instancia de la Memoria
	Register registr;							// Instancia del Registro
	CU cu; 											  // Instancia del CU (Control Unit)								
	ALU alu; 											// Instancia de la ALU 	
	
	for(int i=0; i<1; i++){
	lines[i]=program[i];
	}
	
	for(int i=0; i<1; i++){
	memory.setMemory(i, lines[i]);
	}	
	
	cu.fetch(memory,registr,alu);	
	
	registr.printR();
	*/
