#include <iostream>
#include <string>

#include "Memory.h"
#include "Instruction.h"
#include "START.h"
#include "END.h"
#include "ADD.h"
#include "REST.h"
#include "MULT.h"
#include "DIV.h"
#include "STO.h"
#include "MOV.h"
#include "Register.h"
#include "ALU.h"
#include "CU.h"


using namespace std;

int main(){	
	
	Register registr;
	ALU alu;		
	Memory program;
	Instruction Start, Mov1, Mov2, Add, Sto, End;
	
	START start;
	MOV i1("AL",6);
	MOV i2("BL",7);
	ADD i3(6,7);
	STO i4;
	END end; 

	Start.setInstruction(start.Type());
	Mov1.setInstruction(i1.Type(), i1.getReg(), i1.getData());
	Mov2.setInstruction(i2.Type(), i2.getReg(), i2.getData());
	Add.setInstruction(i3.Type(), i3.Type(), i3.getOp1(), i3.getOp2());
	Sto.setInstruction(i4.Type());
	End.setInstruction(end.Type());

	program.addInstruction(1,Start);
	program.addInstruction(2,Mov1);
	program.addInstruction(3,Mov2);
	program.addInstruction(4,Add);
	program.addInstruction(5,Sto);
	program.addInstruction(6,End);
	CU cu(program,alu,registr);

	while(registr.getPC()<5){
		cu.fetch();
	} 

	return 0; 	   
}
	
