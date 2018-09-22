#ifndef __SCORE_H__
#define __SCORE_H__

#include<iostream>
#include<string>
using namespace std;
struct SS
{
	char name[20];
	char number[20];
	float dailyscore;
	float finalscore;
	float text;
	float generalscore;
	int rank;
};
SS* readdatafromfile(int n);//文件读取
void calcuscore(SS stu[], int n);//计算学生的总评成绩
void sortscore(SS stu[], int n);//根据成绩排名
void printout(SS stu[], int n);//按格式输出学生的信息
void putintoExcel(SS stu[], int n);//写入Excel表格
void serch(SS stu[], int n);
void calculate(SS stu[], int n);
#endif
