#include<iostream>
#include<stdio.h>
using namespace std;
float checkagescore(int age, float score)
{
	if (age < 16 || age>25 )
	{
		throw age;
	}
	if (score < 0 || score>5)
	{
		throw score;
	}
	
	return score/5*100;
}



int main()
{
	float checkagescre(int age, float score);//函数声明
	char name[50];
	int age;
	float score;
	cout << "请输入学生姓名：";
	cin >> name;
	cout << endl;
	cout << "请输入学生的年龄：";
	cin >> age;
	cout << endl;
	cout << "请输入学生的c++考试分数：";
	cin >> score;
	cout << endl;

	try
	{
		cout<<"score:"<< checkagescore(age, score) <<endl;
	}
	catch (int)
	{
		cout << "输入的年龄有误，不在16-25范围之间" << endl;
	}
	catch (float)          
	{
		cout << "输入的c++考试分数有误，不在0-5范围之间" << endl;
	}
	cout << "程序运行完毕"<<endl;
	system("pause");
	return 0;
}