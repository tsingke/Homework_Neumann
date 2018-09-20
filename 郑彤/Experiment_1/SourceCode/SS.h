// SS.h: interface for the SS class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SS_H__4A521E86_3E89_4290_8758_CB03E2CFF5F5__INCLUDED_)
#define AFX_SS_H__4A521E86_3E89_4290_8758_CB03E2CFF5F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class SS  
{
private:
	int number;       //学号
	char name[10];         //姓名
	int dailyScore;//平时成绩
	int experiScore;//实验成绩
	int finalScore;//期末成绩
	int generalScore;//总评成绩
	int place;  //名次
public:
	void readData(); //输入当前学生的学号、姓名、平时、实验及期末成绩
	void rankScore();//求排名
	void sqrtData();
	void calcuScore(SS );//计算当前学生的总评成绩
};

#endif // !defined(AFX_SS_H__4A521E86_3E89_4290_8758_CB03E2CFF5F5__INCLUDED_)
