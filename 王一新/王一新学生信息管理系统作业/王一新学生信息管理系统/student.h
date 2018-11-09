#pragma once
#ifndef _STUDENT//条件编译
#define _STUDRNT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{ 
	char *name;                                                //姓名
	char ID[19];                                               //身份证号
	char number[10];                                           //学号
	char speciality[20];                                        //专业
	int age;                                                   //年龄
public:
	Student();                                                 //无参构造函数
	Student(char *na, char *id, char *num, char *spec, int ag);//带参构造函数
	Student(const Student &per);                               //拷贝构造函数
	~Student();                                                //析构函数
	char* GetName();                                           //提取姓名
	char* GetID();                                             //提取身份证
	char* GetNumber();                                         //提取学号
	char* GetSpec();                                           //提取专业
	int GetAge();                                              //提取年龄
	void Display();                                            //显示学生信息
	void Input();                                              //输入学生信息
};
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//避免浅拷贝
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}
Student::Student(const Student &per)    //拷贝构造函数,在此例中暂时没有用
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
}
Student::~Student()                     //析构函数
{
	if (name)
		delete[]name;
}
char* Student::GetName()                //提取姓名
{
	return name;
}
char* Student::GetID()                  //提取身份证
{
	return ID;
}
int Student::GetAge()                  //提取年龄
{
	return age;
}
char* Student::GetSpec()               //提取专业
{
	return speciality;
}
char* Student::GetNumber()               //提取学号
{
	return number;
}
void Student::Display()                //输出数据信息
{
	cout << "姓名:" << name << endl;
	cout << "身份证:" << ID << endl;
	cout << "学号:" << number << endl;
	cout << "专业:" << speciality << endl;
	cout << "年龄:" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "输入姓名:";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入身份证:";
	cin >> ID;
	cout << "输入年龄:";
	cin >> age;
	cout << "输入专业:";
	cin >> speciality;
	cout << "输入学号:";
	cin >> number;
}
#endif
