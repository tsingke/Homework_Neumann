#ifndef  _STUDENT
#define  _STUDENT
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
	student(char *na, char *id, char *num, char *spec, int ag);//带参构造函数
	student(const student &per);//拷贝构造函数
	~student();
	char* GetName();//提取姓名
	char* GetID();
	char* GetNumber();
	char* GetSpec();
	int GetAge();
	void Display();//显示学生信息
	void Input();//输入学生信息
};
#endif

