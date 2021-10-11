#include "ALU.h"

using namespace std;

ALU::ALU(){
	
}

int ALU::getOperand_1(){
	return operand_1;
}

int ALU::getOperand_2(){
	return operand_2;
}

int ALU::add(int a, int b){
	return a + b;
}

int ALU::rest(int a, int b){
	return a - b;
}

int ALU::mult(int a, int b){
	return a * b;
}

int ALU::div(int a, int b){
	return (int)a / b;
}
