#include<iostream>
using namespace std;
struct SS                           //定义结构体数组
{
	char number[11];
	char name[10];
	int dailyScore;
	int finalScore;
	int experimentScore;
	float generalScore;
	int place;
};
void readDate(SS stu[], int n);   //从文本文档中读取数据
void calcuScore(SS stu[], int n);  //计算总成绩
void sortScore(SS stu[], int n);   //排序
void printOut(SS stu[], int n);   //输出结果
void putintoExcel(SS stu[], int n);  //输出到表格
void search(SS stu[], int n);    //查询学号对应的人
void calculate(SS stu[], int n);   //计算平均数和方差