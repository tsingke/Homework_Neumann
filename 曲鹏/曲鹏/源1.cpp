#include <iostream>
using namespace std;
const int N = 10;
#include "标头.h"
void menu();
void inputstu(student *array);
void outputstu(student *array);
int searchstu(student *array, char *na);
int counts = 0;
int main()
{
	student array[N];
	int choice;
	do
	{
		menu();
		cout << "PLEASE INPUT YOUR CHOICE:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice)
		{
			case 1:inputstu(array); break;
			case 2:cout << "input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = searchstu(array, na);
				if (i == N)
					cout << "查无此人!\n";
				else
					array[i].display();
				break;
			case 3:outputstu(array);
				break;
			default:break; 
		}
	} while (choice);
	return 0;

		}
void menu()
{
	cout << "**********1.录入信息***********" << endl;
	cout << "**********2.查询信息***********" << endl;
	cout << "**********3.浏览信息***********" << endl;
	cout << "**********0.退    出***********" << endl;
}
void outputstu(student *array)
{ 

	cout << "学生总数" << counts << endl;
	for (int i = 0; i < counts; i++)
	{
		array[i].display();
	}
    
}
int searchstu(student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < counts; i++)
	if (strcmp( array[i].getname(), na) == 0)
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
		cout << "继续输入吗?(y or n)" << endl;
		cin >> ch;
	} while (ch=='y');

}