#include<iostream>
#include<string>
#include"head.h"
using namespace std;
int main()
{
	int n;
	SS stu[6];
	cout << "学生成绩管理系统" << endl;
	cout << "学生总数：";
	cin >> n;
	readDate(stu, n);
	calcuScore(stu, n);
	sortScore(stu, n);
	printOut(stu, n);
	calculate(stu, n);
	search(stu, n); 
	putintoExcel(stu, n);
	system("pause");
	return 0;
}
