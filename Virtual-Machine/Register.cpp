#include "Register.h"

using namespace std;

Register::Register(){
	pc = 1;
	ir = "";
	acc = 0;
	mar = 0;
	mbr = "";
	al = 0;
	ah = 0;
	bl = 0;
	bh = 0;
}

int Register::getPC(){	
	return pc;
}
string Register::getIR(){
	return ir;
}

int Register::getACC(){
	return acc;
}

int Register::getMAR(){
	return mar;
}

string Register::getMBR(){
	return mbr;
}

int Register::getAL(){
	return al;
}

int Register::getAH(){
	return ah;
}

int Register::getBL(){
	return bl;
}

int Register::getBH(){
	return bh;
}

void Register::setPC(int x){
	pc = x;
}

void Register::setIR(string x){
	ir = x;
}

void Register::setACC(int x){
	acc = x;
}

void Register::setMAR(int x){
	mar = x;
}

void Register::setMBR(string x){
	mbr = x;
}

void Register::setAL(int x){
	al = x;
}

void Register::setAH(int x){
	ah = x;
}

void Register::setBL(int x){
	bl = x;
}

void Register::setBH(int x){
	bh = x;
}

void Register::printR(){
	cout << "PC \t" << getPC() << endl;
	cout << "IR \t" << getIR() << endl;
	cout << "ACC \t" << getACC() << endl;
	cout << "MAR \t" << getMAR() << endl;
	cout << "MBR \t" << getMBR() << endl;
	cout << "AL \t" << getAL() << endl;
	cout << "AH \t" << getAH() << endl;
	cout << "BL \t" << getBL() << endl;
	cout << "BH \t" << getBH() << endl;
}
