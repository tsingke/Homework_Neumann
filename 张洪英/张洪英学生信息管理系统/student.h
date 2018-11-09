#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	student();
	student(char *na, char *id, char *num, char *spec, int ag);
	student(const student &per);
	~student();
	char *Getname();
	char *GetID();
	char *Getnumber();
	char *Getspec();
	int GetAge();
	void Display();
	void Input();
};
#endif // !_STUDENT