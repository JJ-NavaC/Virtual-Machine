#include "CU.h"
#include "Register.h"
#include "ALU.h"

using namespace std;

CU::CU(){
	
}

void CU::fetch(Memory &memory, Register &registr, ALU &alu){
	cout << endl << "Fetch ---------------------" << endl << endl;	
	
	registr.setMAR(registr.getPC());
	registr.setMBR(*memory.getMemory());
	registr.setIR(*memory.getMemory());
	registr.setPC(registr.getPC()+1); // Aumenta el PC (Program Counter) en +1
	
	// cout << *memory.getMemory() << endl; 
	decode(*memory.getMemory(),registr,alu);	
}

void CU::decode(string codedInstruction, Register &registr, ALU &alu){
	cout << endl << "Decode ---------------------" << endl << endl;
	string words[5];
	char del = ',';
	int i=0;
	string temp;	
	
	istringstream isstream(codedInstruction);
	
	while(!isstream.eof()){
		isstream >> words[i];        
		stringstream sstream(words[i]);
		while (getline(sstream, words[i], del)){
			temp = words[i];             
		}   
		words[i] = temp; 
		i++;           
	} 
	int size = i;
	i = 0;
	for (int j=0; j<=size; j++){
		cout << words[j] << endl;
	}
	if(size==2){
		execute(words[0], words[1], alu, registr);
	} else if(size==3){
		execute(words[0], stoi(words[1]), stoi(words[2]), alu, registr);
	}	
}

void CU::execute(string instruction, string reg, ALU &alu, Register &registr){
	
}

void CU::execute(string instruction, int x, int y, ALU &alu, Register &registr){	
	cout << endl << "Execute ---------------------" << endl << endl;
	if(instruction == "ADD"){		
		// cout << x << " + " << y << " = " << alu.add(x,y) << endl;
		registr.setACC(alu.add(x,y));
	} else if(instruction == "REST"){
		// cout << x << " - " << y << " = " << alu.rest(x,y) << endl;
		registr.setACC(alu.rest(x,y));
	} else if(instruction == "MULT"){
		// cout << x << " * " << y << " = " << alu.mult(x,y) << endl;
		registr.setACC(alu.mult(x,y));
	} else if(instruction == "DIV"){
		// cout << x << " / " << y << " = " << alu.div(x,y) << endl;
		registr.setACC(alu.div(x,y));
	}	
}