#include <iostream>
#include <string>
#include <sstream>

#include "Memory.h"
#include "CU.h"
#include "Register.h"
#include "ALU.h"

using namespace std;

int main(){
	
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

	return 0;    
}
