#ifndef _STUDENT
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
public:
	Student();  //无参构造函数
	Student(char *na, char *id, char *num, char *spec, int ag);  //带参构造函数
	Student(const Student &per); //拷贝构造函数
	~Student();  //析构函数
	char* GetName();
	char* GetID();
	char* GetNumber();
	char* GetSpec();
	int GetAge();
	void Display();
	void Input();
};
#endif
