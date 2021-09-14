#ifndef Memory_h
#define Memory_h

#include <iostream>
#include <stddef.h>
#include <string>

using namespace std;

class Memory{
	string *program;
public:
	Memory(int);
	void setMemory(int, string);
	string *getMemory();
};

#endif
