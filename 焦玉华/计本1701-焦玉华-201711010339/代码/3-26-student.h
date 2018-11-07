#ifndef _STUDENT
#define _STUDENT
#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 80
class Student
{
	char *name; //姓名
	char number[10];//学号
	int age;//年龄
public:
	Student();//无参构造函数
	Student(char *na, char *num, int ag);//带参构造函数
	Student(const Student &per);//拷贝函数
	~Student();//析构函数
	char* Getname();//提取姓名
	char* Getnumber();//提取学号
	int Getage();//提取年龄
	void Display();//显示学生信息
	void Input();//输入学生信息
};
#endif