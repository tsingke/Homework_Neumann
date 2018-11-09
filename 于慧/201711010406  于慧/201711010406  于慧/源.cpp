#include "STUDENT.h"
#include <iostream>
using namespace std;

const int N = 10;
/********************声明**************************/
void menu(); //菜单函数
void Outputstu(Student *array);  //输出对象数组函数
void Inputstu(Student *array);    //输入对象数组函数
int Searchstu(Student *array, char *na);   //按姓名查询
/**************************************************/

int counts = 0;

int main()
{
	Student array[N];   //定义学生数组
	int choice;         //定义菜单中的选项
	do
	{
		menu();
		cout << "Please input your choice :";
		cin >> choice;            //读入选项
		if (choice >= 0 && choice <= 3)
			switch (choice)
			{
			case 1:Inputstu(array); break;        //录入信息
			case 2:cout << "Input the name searched" << endl;   //查询信息
				char na[20];
				cin >> na;
				int i;
				i = Searchstu(array, na);
				if (i == N)
					cout << "查无其人！" << endl;
				else
					array[i].Display();
				break;
			case 3:Outputstu(array); break;   //输出对象数组元素
			default:
				break;
			}
	} while (choice);
	system("PAUSE"); 

	return 0;
}

void menu()  //定义菜单函数
{
	cout << "*********1.录入信息*********" << endl;
	cout << "*********2.查询信息*********" << endl;
	cout << "*********3.浏览信息*********" << endl;
	cout << "*********0.退    出*********" << endl;
}
void Outputstu(Student *array) //定义输出对象数组函数
{
	cout << "学生总人数" << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		array[i].Display();
	}
}

int Searchstu(Student *array, char *na)       //按姓名查询函数
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	{
		if (strcmp(array[i].GetName(), na) == 0)
			j = i;
	}
	return j;
}

void Inputstu(Student *array) //输入对象数组元素
{
	char ch;
	do
	{
		array[counts].Input();          //调用类里的成员函数完成一个学生对象的数据输入
		counts++;
		cout << "继续输入吗？（Y or N）" << endl;
		cin >> ch;
	} while (ch == 'Y');
}