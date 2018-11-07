#include "3-26-student.h"


Student::Student()
{
	name = 0;
	age = 0;
}
Student::Student(char *na, char *num, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(number, num);
	age = ag;
}
Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(number, per.number);
	age = per.age;
}
Student::~Student()
{
	if (name)
		delete[]name;
}
char* Student::Getname()
{
	return name;
}
char* Student::Getnumber()
{
	return number;
}
int Student::Getage()
{
	return age;
}
void Student::Display()
{
	cout << "姓名： " << name << endl;
	cout << "学号： " << number << endl;
	cout << "年龄： " << age << endl;
}
void Student::Input()
{
	char na[10];
	cout << "输入姓名： ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "输入学号： ";
	cin >> number;
	cout << "输入年龄： ";
	cin >> age;
}