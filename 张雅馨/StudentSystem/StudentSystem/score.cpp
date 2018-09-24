#include "score.h" 
 #include <iostream>
#include <istream> 
#include <cstdlib> 
#include<fstream>
using namespace std;
/*----------------类中函数定义-------------*/ 
SS s[6];
SS temp;
void SS::readData()
{
	int n = 0;
	ifstream in("data.txt");
	if (!in.is_open())
	{
		cout<< "Error: opening file fail" << endl;
		exit(1);
	}
	while (!in.eof()&&n<6)
	{
		in>>s[n].number>>s[n].name>>s[n].dailyScore>>s[n].testScore>>s[n].finalScore;
		n++;
	}
	in.close();
} 
void SS::calcuScore()
{
	
	for (int i = 0; i < 6; i++)
	{
		s[i].generalScore = 0.2*s[i].dailyScore + 0.2*s[i].testScore + 0.6*s[i].finalScore;
	}
	for (int i = 0; i < 6; i++)
	{
		gScore += s[i].generalScore;
	}
	gScore /= 6;
	for (int i = 0; i < 6; i++){
		variance += (s[i].generalScore - gScore)*(s[i].generalScore - gScore);
	}
	variance /= 6;
}

//输出全体学生全部信息
void SS::printOut()
{
	for (int i = 0; i < 6; i++)
	{
		cout << "学号:  " << s[i].number << endl;
		cout << "姓名: " << s[i].name << endl;
		cout << "平时成绩: " << s[i].dailyScore << endl;
		cout << "实验成绩: " << s[i].testScore << endl;
		cout << "期末成绩: " << s[i].finalScore << endl;
		cout << "总评成绩: " << s[i].dailyScore << endl;
		cout << "名次: " << s[i].place << endl;
	}
	
}
void SS::search()
{
	cout << "请输入学号：";
	char numbertemp[20];
	cin >> numbertemp;
	for(int i = 0; i< 6;i++)
	{
		if (0 == strcmp(numbertemp, s[i].number))
		{
			cout <<"学号:  "<< s[i].number<<endl;
			cout << "姓名: " << s[i].name << endl;
			cout << "平时成绩: " << s[i].dailyScore << endl;
			cout << "实验成绩: " << s[i].testScore << endl;
			cout << "期末成绩: " << s[i].finalScore << endl;
			cout << "总评成绩: " << s[i].dailyScore << endl;
			cout << "名次: "<< s[i].place<< endl;
		}
	}
}

//排名的函数
void SS::sort()
{
	for(int k = 0; k < 6; k++){
		s[k].place = 0;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (s[i].generalScore <= s[j].generalScore)
				s[i].place++;
		}
	}
}
void SS::printCourse()
{
	cout << "该课程的均值为： " << gScore << endl;
	cout << "该课程的方差为：" << variance << endl;
}