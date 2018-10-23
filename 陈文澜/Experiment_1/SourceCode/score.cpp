#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<cstdlib>
#include<fstream>
#include"score.h"
using namespace std;

SS* readdatafromfile(int n)
{
	cout << "从文件中读取学生信息" << endl;
	ifstream in;//文件输入流
	in.open("data.txt");
	if (in.fail())//如果读取失败 
	{
		cout << "failed" << endl;
		exit(1);

	}
	cout << "学生数目为：" << n << endl;
	SS  stu[500];
	int i;
	for (i = 0; i < n; i++)
	{
		in >> stu[i].number;
		in >> stu[i].name;
		in >> stu[i].dailyscore;
		in >> stu[i].text;
		in >> stu[i].finalscore;
		cout << "学号：" << stu[i].number << "姓名：" << stu[i].name << "平时成绩：" << stu[i].dailyscore << "实验成绩" << stu[i].text << "期末成绩:  " << stu[i].finalscore << endl;
	}
	in.close();
	return stu;
}
void calcuscore(SS stu[], int n)
{
	cout << "计算总成绩：" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].generalscore = 0.2*stu[i].dailyscore + 0.2*stu[i].text + 0.6*stu[i].finalscore;
		cout << "学号：" << stu[i].number << "姓名：" << stu[i].name << "总成绩：" << stu[i].generalscore << endl;
	}
}
void sortscore(SS stu[], int n)
{
	int i, j;
	SS temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1); j++)
		{
			if (stu[i].generalscore < stu[i + 1].generalscore)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp
					;
			}
		}
		stu[i].rank = i + 1;
	}
}
void printout(SS stu[], int n)
{
	cout << endl << "输出完整信息" << endl;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "学号：" << stu[i].number << "平时成绩：" << stu[i].dailyscore << "实验成绩" << stu[i].text << "期末考试：" << stu[i].finalscore << "总成绩：" << stu[i].generalscore << "排名：" << stu[i].rank << endl;

	}
}
void serch(SS stu[], int n)
{
	int k = 100;
	cout << "请输入所要查询的学号： " << endl;
	cin >> stu[k].number;
	int i;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[k].number, stu[i].number) == 0)
		{
			k = i;
			break;
		}
	}
	cout << "姓名:  " << stu[k].name << "平时成绩" << stu[k].dailyscore << "实验成绩" << stu[k].text << "期末考试" << stu[k].finalscore << "总成绩" << stu[k].generalscore << "排名" << stu[k].rank << endl;
}
void calculate(SS stu[], int n)
{
	int i;
	float sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += stu[i].generalscore;
	}
	sum = (float)(sum / n);
	cout << "平均总成绩为：" << sum << endl;

	float p = 0, s;
	for (i = 0; i < n; i++)
	{
		p = (float)(p + (stu[i].generalscore - sum / n)*(stu[i].generalscore - sum / n));
	}
	s = (float)(p / n);
	cout << "方差为： " << s << endl;

}
void putintoExcel(SS stu[], int n)
{
	cout << endl << "将信息写入Excel文档" << endl;
	ofstream out;
	out.open("score.xls");
	out << "学号\t姓名\t平时成绩\t期末成绩\t总成绩\t名次\t\n";
	int i;
	for (i = 0; i < n; i++)
	{
		out << stu[i].number << "\t";
		out << stu[i].name << "\t";
		out << stu[i].dailyscore << "\t";
		out << stu[i].finalscore << "\t";
		out << stu[i].text << "\t";
		out << stu[i].generalscore << "\t";
		out << stu[i].rank << "\t";
		out << "\n";
	}
	out.close();
}
