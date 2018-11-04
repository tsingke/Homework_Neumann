#include <iostream>
#include <string>
using namespace std;
#include "标头.h"
student::student()
{
	name = NULL;
	age = 0;
}
student::student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char(strlen(na) + 1);
		strcpy_s(name, strlen(na) + 1, na);
	}
	strcpy_s(ID,strlen(id)+1, id);
	strcpy_s(number, strlen(num) + 1, num);
	strcpy_s(speciality, strlen(spec) + 1, spec);
	age = age;
}
student::student(const student &per)
{
	if (per.name)
	{
		name = new char(strlen(per.name) + 1);
		strcpy_s(name, strlen(per.name) + 1, per.name);
	}
	strcpy_s(ID, strlen(per.ID) + 1, per.ID);
	strcpy_s(number, strlen(per.number) + 1, per.number);
	strcpy_s(speciality, strlen(per.speciality) + 1, per.speciality);
	age = age;
}
student::~student()
{
	if (name)
	{
		delete[]name;
	}
}
char* student::getname()
{
	return name;
}
char* student::getid()
{
	return ID;
}
int student::getage()
{
	return age;
}
char* student::getspec()
{
	return speciality;
}
char* student::getnumber()
{
	return number;
}
void student::display()
{
	cout << "姓名" << name << endl;
	cout << "身份证" << ID << endl;
	cout << "学号" << number << endl;
	cout << "专业" << speciality << endl;
	cout << "年龄" << age << endl;
}
void student::input()
{
	char na[10];
	cout << "输入名字" << endl;
	cin >> na;
	if (name)
	{
		delete[]name;
	}
	name = new char(strlen(na) + 1);
	strcpy_s(name, strlen(na) + 1, na);
	cout << "输入身份证号码" << endl;
	cin >> ID;
	cout << "输入年龄" << endl;
	cin >> age;
	cout << "输入专业" << endl;
	cin >> speciality;
	cout << "输入学号" << endl;
	cin >> number;
}