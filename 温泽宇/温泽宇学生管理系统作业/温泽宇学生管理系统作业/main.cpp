#include<iostream>
#include"example3_26_student.h"
#include<string>
using namespace std;
const int N = 10;
int cnt = 0;                                        //之前用count来定义计数，提示“count”不明确。因为namespace std里包含了全局变量count。
void menu();
void OutputStu(Student *array);
void InputStu(Student *array);
int SearchStu(Student *array, char *na);
int main()
{
	Student array[N];//定义学生数组
	int choice;//读入选项
	do
	{
		menu();
		cout << "please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
		{
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
				{
					cout << "查无此人！\n";
				}
				else
				{
					array[i].Display();
				}
				break;
			case 3:OutputStu(array); break;
			default:break;
			}
		}
	} while (choice);
	system("pause");
	return 0;
}
void menu()                                                                   //定义菜单函数
{
	cout << "*******************1.录入信息*********************" << endl;
	cout << "*******************2.查询信息*********************" << endl;
	cout << "*******************3.浏览信息*********************" << endl;
	cout << "*******************0.退    出*********************" << endl;
}
void InputStu(Student *array)
{
	char ch;
	do
	{
		array[cnt].Input();//调用成员函数完成一个学生对象的数据输入
		cnt++;//这个用count对学生个数进行计数
		cout << "继续输入吗？（Y or N）" << endl;
		cin >> ch;

	} while (ch == 'Y');
}
void OutputStu(Student *array)               //                              //输出对象数组元素
{
	cout << "学生总人数=" <<cnt<< endl;
	for (int i = 0; i < cnt; i++)
	{
		array[i].Display();
	}

}
int SearchStu(Student *array, char *na)               //                          //按姓名查询
{
	int i, j = N;
	for(i = 0; i < cnt; i++)
	{
		if (strcmp(array[i].GetName(), na) == 0)
		{
			j = i;
		}
	}
	return j;
}
