#include<iostream>
#include<math.h>
#include <string>
#include<stdlib.h>
#include<stdio.h>
#include <cstdlib>
#include <fstream>
#include"score.h"
using namespace std;


//读取学生信息
SS* readDataFromFile(int N)//文件读取方法
{
	cout << endl << "-----第一步: 从文件(项目目录下）读取学生的成绩信息--------" << endl;
	ifstream fin;
	fin.open("..\\data.txt");//读取本项目内txt里的数据
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	cout << "学生数目为:" << N << endl;
	SS stu[100];
	for (int i = 0; i < N; i++)	
	{
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyScore;
		fin >> stu[i].finalScore;
		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "期末成绩:" << stu[i].finalScore << endl;
	}
	fin.close();
	return stu;
}

//计算学生的总评成绩
void calcuScore(SS stu[], int N)
{
	cout << endl << "-----第二步: 计算学生的总成绩--------" << endl;
	for (int i = 0; i < N; i++)
	{
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "总成绩:" << stu[i].generalScore << endl;
	}
}

//排名(冒泡算法）
void sortScore(SS stu[], int N)
{
	int i, j;
	SS swap;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (N - i); j++)
		{
			if (stu[j].generalScore < stu[j + 1].generalScore)
			{
				swap = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = swap;
			}
		}
		stu[i].rank = i+1;
	}
}

//输出学生的完整信息
void printOut(SS stu[], int N)
{
	cout << endl << "------第三步: 根据总成绩由大到小输出学生完整信息!------" << endl;

	for (int i = 0; i < N; i++)
	{

		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "期末成绩:" << stu[i].finalScore << " " << "总成绩:" << stu[i].generalScore << " "<<"排名"<<stu[i].rank << endl;
	}

}

//写入Excel文档
void putintoExcel(SS stu[],int N)
{
	cout << endl << "-------第四步：将学生完整信息写入项目目录下的Ecxel文档------" << endl;
	ofstream fout;
	fout.open("..\\score.xls");
	fout << "学号\t姓名\t平时分数\t期末分数\t总分\t名次\t\n";
	for (int i = 0; i < N; i++)
	{
		fout<<stu[i].number<<"\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyScore << "\t";
		fout << stu[i].finalScore << "\t";
		fout << stu[i].generalScore << "\t";
		fout << stu[i].rank<<"\t" ;
		fout << "\n";
	}
	fout.close();

}