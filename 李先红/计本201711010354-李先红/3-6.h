#ifndef _STUDENT
#define _STUDENT
#include<iostream>
using namespace std;
#include<string>
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[20];
	char speciality[20];
	int age;
public:
	Student();
	Student(char *na, char *id, char *num, char *spec, int ag);
	Student(const Student &per);
	~Student();
	char* GetName();
	char *GetID();
	char *GetNumber();
	char *GetSpec();
	int GetAge();
	void Display();
	void Input();
};
#endif

