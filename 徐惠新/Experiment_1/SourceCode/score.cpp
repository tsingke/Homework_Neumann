#include<Windows.h>
#include"head.h"
#include<fstream>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<iostream>
using namespace std;
void readDate(SS stu[], int n)  //从文本文档中读取数据
{
	int i;
	ifstream in("D:\\Program Files\\data.txt");
	if (!in)
	{
		cout << "Error opening file" << endl;
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		in >> stu[i].number;
		in >> stu[i].name;
		in >> stu[i].dailyScore;
		in >> stu[i].experimentScore;
		in >> stu[i].finalScore;
		cout << "学号:" << stu[i].number << "  姓名:" << stu[i].name << "  平时成绩：" << stu[i].dailyScore << "  实验成绩:" << stu[i].experimentScore << "  期末成绩:" << stu[i].finalScore << endl;
	}
	in.close();
}
void calcuScore(SS stu[], int n)    //计算学生的总成绩
{
	int i;
	for (i = 0; i < n; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].experimentScore + 0.6*stu[i].finalScore;
		cout << "学号:" << stu[i].number << "  姓名:" << stu[i].name << "  总成绩:" << stu[i].generalScore << endl;
	}
}
void sortScore(SS stu[], int n)    //根据学生的总成绩排序
{
	int i, j;
	SS t;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (stu[i].generalScore < stu[j].generalScore)
			{
				t = stu[i];
				stu[i] = stu[j];
				stu[j] = t;
			}
		}
		stu[i].place = i+1;
	}
}
void printOut(SS stu[], int n)     //输出学生总成绩及排名
{
	int i;
	cout << "成绩排名如下:" << endl;
	for (i = 0; i < n; i++)
		cout << "学号:" << stu[i].number << " 姓名:" << stu[i].name << " 平时成绩：" << stu[i].dailyScore << " 实验成绩：" << stu[i].experimentScore << " 期末成绩:" << stu[i].finalScore << " 总成绩:" << stu[i].generalScore << " 排名" << stu[i].place << endl;

}
void putintoExcel(SS stu[], int n)       //输出到excel表格
{
	cout << "信息写入Excel表格" << endl;
	ofstream out;
	out.open("D:\\score.xls");
	out << "学号\t姓名\t平时成绩\t实验成绩\t期末成绩\t综合成绩\t排名\t\n";
	int i;
	for (i = 0; i < n; i++)
	{
		out << stu[i].number << "\t";
		out << stu[i].name << "\t";
		out << stu[i].dailyScore << "\t";
		out << stu[i].experimentScore<< "\t";
		out << stu[i].finalScore << "\t";
		out << stu[i].generalScore<< "\t";
		out << stu[i].place<< "\t";
		out << "\n";
	}
	out.close();
}
void search(SS stu[], int n)       //输入学号查询对应学生成绩
{
	int i;
	int k = 10;
	cout << "请输入要查询的学号：" << endl;
	cin >> stu[k].number;
	for (i = 0; i < n; i++)
	{
		if (strcmp(stu[k].number,stu[i].number) == 0)
		{
			k = i;
			break;
		}
	}
	cout << "姓名：" << stu[k].name << "  平时成绩：" << stu[k].dailyScore << "  实验成绩：" << stu[k].experimentScore << "  期末成绩：" << stu[k].finalScore << "  总成绩：" << stu[k].generalScore << "  排名：" << stu[k].place << endl;
}
void calculate(SS stu[], int n)      //计算总成绩的平均值及方差
{
	int i;
	float sum = 0,average,s2=0;
	for (i = 0; i < n; i++)
		sum= sum + stu[i].generalScore;
	average = (float)(sum / n);
	cout << "平均总成绩为" << average<< endl;
	for (i = 0; i < n; i++)
		s2 = s2 + pow((stu[i].generalScore - average), 2);
	s2 = s2 / n;
	cout << "方差为：" << s2 << endl;

}