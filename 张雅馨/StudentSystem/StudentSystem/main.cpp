#include<stdio.h>
#include"score.h"	
#include <iostream>
#include <istream> 
using namespace std;

int main()
{
	SS st;
	st.readData();
	st.calcuScore();
	st.sort();
	cout << "		学生成绩管理系统		" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "1.输出全体学生的全部信息" << endl;
	cout << endl;
	cout << "2.输入学号查询某个学生的信息" << endl;
	cout << endl;
	cout << "3.查看该课的均值和方差" << endl;
	cout << endl;
	cout << "4.退出" << endl;
	cout << endl;
	while (true)
	{
		cout << "请输入一个数字来进行选择功能:" << endl;
		int digit;
		cin >> digit;
		switch (digit)
		{
		case 1: st.printOut();
			break;
		case 2:st.search();
			break;
		case 3:st.printCourse();
			break;
		case 4:exit(0);
			break;
		default:
			cout << "输入错误，请按说明输入" << endl;
		}
	}

}