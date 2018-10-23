#include<iostream>
#include<math.h>

using namespace std;

struct student
{
	char name[10];
	int year;
	float score;
};

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;

	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
	{
		float score2 = 20 * score;
		return score2;
	}
}

void main()
{
	student S;
	float score2;
	cout << "请输入学生名字（名字缩写）：";
	cin >> S.name;
	cout << endl;
	cout << "请输入学生年龄（16岁~25岁）：";
	cin >> S.year;
	cout << endl;
	cout << "请输入学生C++成绩（0~5）：";
	cin >> S.score;
	cout << endl;
	cout << "············学 生 信 息 如 下·············" << endl;
	cout << endl;

	try
	{
		score2 = checkAgeScore(S.year, S.score);
		cout << "姓名：" << S.name << "  " << " 年龄：" << S.year << "  " << " 成绩：" << score2 << endl;
		cout << endl;
	}
	catch (int)
	{
		cout << "！！！年龄不在指定范围内，请重新输入！！！" << endl;
		cout << endl;

	}
	catch (float)
	{
		cout << "！！！成绩不在指定范围内，请重新输入！！！" << endl;
		cout << endl;
	}


	system("pause");

}