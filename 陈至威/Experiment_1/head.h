#include<iostream>
using namespace std;
struct CJGLXT                          //定义结构体数组 "成绩管理系统"
{
	char number[11];
	char name[10];
	int dailyScore;
	int finalScore;
	int experimentScore;
	float generalScore;
	int place;
};
void readDate(CJGLXT stu[], int n);   //从文本文档中读取数据
void calcuScore(CJGLXT stu[], int n);  //计算总成绩
void sortScore(CJGLXT stu[], int n);   //排序
void printOut(CJGLXT stu[], int n);   //输出结果
void search(CJGLXT stu[], int n);    //查询学号对应的人
void calculate(CJGLXT stu[], int n);   //计算平均数和方差#pragma once
