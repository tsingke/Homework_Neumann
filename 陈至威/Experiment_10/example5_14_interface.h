#include "example5_14_people.h"
#ifndef _INTERFACE
#define _INTERFACE


const int N = 3;
class Interface
{
protected:
	Student st[N];
	int numOfSt;
	Graduate gr[N];
	int numOfGr;
	PostgraduateOnJob po[N];
	int numOfPo;
	Teacher te[N];
	int numOfTe;
public:
	Interface();
	void display();
	void run();
	void Input();
	void Output();
};
#endif