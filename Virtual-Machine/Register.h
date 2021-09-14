#ifndef Register_h
#define Register_h

#include <iostream>
#include <stddef.h>
#include <string>

using namespace std;

class Register{
	int pc;
	string ir;
	int acc;
	int mar;
	string mbr;
	int al;
	int ah;
	int bl;
	int bh;
	
public:
	
	Register();
	
	int getPC();
	string getIR();
	int getACC();
	int getMAR();
	string getMBR();
	int getAL();
	int getAH();
	int getBL();
	int getBH();
	
	void setPC(int);
	void setIR(string);
	void setACC(int);
	void setMAR(int);
	void setMBR(string);
	void setAL(int);
	void setAH(int);
	void setBL(int);
	void setBH(int);
	void printR();
};
#endif
