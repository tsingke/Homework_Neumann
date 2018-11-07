#ifndef _STUDENT
#define _STYDENT
#include<iostream>
using namespace std;
const int size = 80;


class Student
{
public:
	Student();//无参构造函数
	Student(char* na, char *id, char* num, char*spec, int ag);//带参构造函数
	Student(const Student& per);//拷贝构造函数
	~Student();//析构函数
	char* GetName();//提取姓名
	char* GetID();//提取身份证号
	char* GetNumber();//提取学号
	char* GetSpec();//提取专业
	int GetAge();//提取年龄
	void Display();//显示学生信息
	void Input();//输入学生信息

private:
	char *name;//姓名
	char ID[19];//身份证
	char number[10];//学号
	char specidlity[20];//专业
	int age;//年龄
};
void menu();//菜单函数
void OutputStu(Student *array, int & countSs);//输出对象数组元素
void InoutStu(Student *array, int & countSs);//输入对象数组元素
int SearchStu(Student *array, char *na, int & countSs);//按姓名查询
#endif