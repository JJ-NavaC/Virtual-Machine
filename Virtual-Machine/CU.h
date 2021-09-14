#ifndef CU_h
#define CU_h

#include <iostream>
#include <stddef.h>
#include <string>
#include <sstream>

#include "Memory.h"
#include "CU.h"
#include "Register.h"
#include "ALU.h"

using namespace std;

class CU{	
	
public:
	CU();
	
	void fetch(Memory&,Register&,ALU&);
	void decode(string,Register&,ALU&);
	void execute(string,string,ALU&,Register&);
	void execute(string,int,int,ALU&,Register&);
	
};

#endif
