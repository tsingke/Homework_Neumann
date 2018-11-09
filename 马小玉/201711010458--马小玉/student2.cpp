#include<iostream>
using namespace std;
#include"student.h"
const int N = 10;
void menu();
void outputstu(student *array);
void inputstu(student *array);
int searchstu(student *array, char *n);
int counts= 0;//用于计数
int main()
{
	student array[N];
	int choice;//读入选项
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice>=0&&choice<=3)
			switch (choice)
		{

			case 1:inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char n[20];
				cin >> n;
				int i;
				i = searchstu(array, n);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[i].display();
				break;
			case 3:outputstu(array);break;
			default:break;
		}
	} while (choice);

		return 0;
}
void menu()
{
	cout << "**********1.录入信息**********" << endl;
	cout << "**********2.查询信息**********" << endl;
	cout << "**********3.浏览信息**********" << endl;
	cout << "**********0.退    出**********" << endl;
}
void outputstu(student *array)//输出对象数组元素
{
	cout << "学生总人数=" << counts << endl;
	for (int i = 0; i < counts; i++)
		array[i].display();
}
int searchstu(student *array, char *n)//按名查询
{
	
	int i;
	int j = N;
	for (i = 0; i < counts; i++)
		if (strcmp(array[i].Getname(), n) == 0)
			j = i;
	   return j;
}
void inputstu(student *array)
{
	char ch;
	do
	{
		array[counts].input();
		counts++;
		cout << "继续输入吗？(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}