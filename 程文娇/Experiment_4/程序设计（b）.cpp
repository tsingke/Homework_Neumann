#include<iostream>
#include<windows.h>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}

int main()
{
	char name[20];
	int age;
	float score;
	cout << "请输入一个学生的姓名、年龄及五级制C++考试分数：" << endl;
	cin >> name >> age >> score;

	try
	{
		score = checkAgeScore(age, score);
		cout << "姓名：" << name << " 年龄：" << age << " 考试分数：" << score << endl;

	}
	catch (int)
	{
		cout << "年龄有误" << endl;
	}
	catch (float)
	{
		cout << "分数有误" << endl;
	}
	system("pause");
	return 0;
}
