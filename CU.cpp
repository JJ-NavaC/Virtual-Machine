#include <iostream>
#include <string>
#include <sstream>

#include "CU.h"


using namespace std;

CU::CU(Memory &x, ALU &y, Register &z){
	memory = x;
	alu = y;
	registr = z;
}

Instruction CU::fetch(){
	cout << endl << endl << "Fetch" << endl << endl;
	cout << memory.getInstruction(1).getInstruction() << endl;
	registr.setMAR((int*)registr.getPC());
	registr.setMBR(memory.getInstruction(1));
	registr.setIR(memory.getInstruction(1));
	registr.setPC(registr.getPC()+1); // Aumenta el PC (Program Counter) en +1*/	
	return memory.getInstruction(1);
}
void CU::decode(Instruction codedInstruction){
	cout << endl << endl << "Decode" << endl << endl;
	string words[5];
	char del = ',';
	int i=0;
	string temp;	
	
	istringstream isstream(codedInstruction.getInstruction());
	
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
		execute(words[0], words[1]);
	} else if(size==3){
		execute(words[0], stoi(words[1]), stoi(words[2]));
	}	
}

void CU::execute(string instruction, string reg){
	
}

void CU::execute(string instruction, int x, int y){	
	cout << endl << endl << "Execute" << endl << endl;
	registr.setAH(x);
	registr.setBH(y);
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
	registr.printR();
}
