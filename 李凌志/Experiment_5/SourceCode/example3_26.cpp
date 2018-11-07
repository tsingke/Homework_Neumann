#include<iostream>
#include<string.h>
#include"example3_26_student.h"
using namespace std;
const int N = 10;
int countSs = 0;

int main()
{
	Student array[N];//定义学生数组
	int choice;//读入选项
	do{
		menu();

		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
			switch (choice)
		{
			case 1:InoutStu(array,countSs); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = SearchStu(array, na,countSs);
				if (i == N)
					cout << "查无此人!\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array,countSs); break;
			default:
				break;
		}
		else
		{
			cout << "输入错误,请重新输入" << endl;
		}//优化
	} while (choice);
	return 0;
}

