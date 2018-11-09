#ifndef _STUDENT
#define _STUDENT
#include <iostream>
#include <windows.h>
using namespace std;
#define SIZE 80
class Student
{
public:
	Student();
	Student(char *na,char *id,char *num,char *spec,int ag);
	Student(const Student &per);
	~Student();
	char *GetName();
	char *GetID();
	char *GetNumber();
	char *GetSpec();
	int GetAge();
	void Display();
	void Input();


private:
	char *name;
	char ID[19];
	char number[20];
	char specialty[20];
	int age;

};


#endif // !_STUDENT
#pragma once
