#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include"example3_26_student.h"
using namespace std;



Student::Student()//无参构造函数
{
	name = NULL;
	age = 0;
}
Student::Student(char* na, char *id, char* num, char*spec, int ag)//带参构造函数
{
	if (na)
	{
		name = new char[strlen(na) + 1];//避免浅拷贝
		strcpy(name, na);
		strcpy(ID, id);
		strcpy(number, num);
		strcpy(specidlity, spec);
		age = ag;
	}
	else
	{
		name = NULL;
		age = 0;
	}

}
Student::Student(const Student& per)//拷贝构造函数
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];//避免浅拷贝
		strcpy(name, per.name);
		strcpy(ID, per.ID);
		strcpy(number, per.number);
		strcpy(specidlity, per.specidlity);
		age = per.age;
	}
	else
	{
		name = NULL;
		age = 0;
	}
}
Student::~Student()//析构函数
{
	if (name)
		delete[]name;
}
char* Student::GetName()//提取姓名
{
	return name;
}
char* Student::GetID()//提取身份证号
{
	return ID;
}
char* Student::GetNumber()//提取学号
{
	return number;
}
char* Student::GetSpec()//提取专业
{
	return specidlity;
}
int Student::GetAge()//提取年龄
{
	return age;
}
void Student::Display()//显示学生信息
{
	cout << "姓  名：" << name << endl;
	cout << "身份证：" << ID << endl;
	cout << "学  号：" << number << endl;
	cout << "专  业：" << specidlity << endl;
	cout << "年  龄：" << age << endl;
}
void Student::Input()//输入学生信息
{
	char na[10];
	cout << "输入姓  名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];//避免浅拷贝
	strcpy(name, na);
	cout << "输入身份证：";
	cin >> ID;
	cout << "输入学  号：";
	cin >> number;
	cout << "输入专  业：";
	cin >> specidlity;
	cout << "输入年  龄：";
	cin >> age;
}
void menu()//菜单函数
{
	cout << "**********1、录入信息**********" << endl;
	cout << "**********2、查询信息**********" << endl;
	cout << "**********3、浏览信息**********" << endl;
	cout << "**********0、退    出**********" << endl;
}
void OutputStu(Student *array, int & countSs)//输出对象数组元素
{
	cout << "学生总人数=" << countSs << endl;
	for (int i = 0; i < countSs; i++)
		array[i].Display();
}
void InoutStu(Student *array, int & countSs)//输入对象数组元素
{
	char ch;
	do
	{
		array[countSs].Input();
		countSs++;
		cout << "继续输入吗？(Y or N)" << endl;
		cin >> ch;
		while (ch != 'Y'&&ch != 'N')
		{
			cout << "输入错误，请继续输入吗？(Y or N)" << endl;
			cin >> ch;
		};//优化
	} while (ch == 'Y');
}
int SearchStu(Student *array, char *na, int & countSs)//按姓名查询
{
	int i, j = 10;
	for (i = 0; i < countSs; i++)
	if (strcmp(array[i].GetName(), na) == 0)
	{
		j = i;
		break;
	}
	return j;
}
