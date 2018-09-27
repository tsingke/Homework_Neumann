#include<iostream>
#include<string>
#include"head.h"
using namespace std;
int main()
{
	
	int n=6;
	CJGLXT stu[6];
	cout << "\t\t********************************************************************\t\t" << endl;
	cout << "\t\t  ★ ★ ★ ★【  欢 迎 进 入 学 生 成 绩 管 理 系 统  】★ ★ ★ ★  \t\t" << endl;
	cout << "\t\t                        ChenZhiwei    20180924                         \t\t"<< endl;
	cout << "\t\t********************************************************************\t\t" << endl;
	cout << "\t学生总数：6" << endl;
	cout << "\t\t········学生平时、实验、期末成绩········\t\t" << endl;
	readDate(stu,n);
	cout << "\t\t········学生总成绩········\t\t" << endl;
	calcuScore(stu,n);
	cout << "\t\t········学生总成绩排名········\t\t" << endl;
	sortScore(stu,n);
	printOut(stu,n);
	cout << "\t\t········学生总成绩的平均值及方差········\t\t" << endl;
	calculate(stu,n);
	cout << "\t\t········查询某学生的成绩及排名········\t\t" << endl;  //更能方便查看某特定学生成绩
	search(stu,n);
	system("pause");  //暂停~可以方便查看程序运行结果
	return 0;
}