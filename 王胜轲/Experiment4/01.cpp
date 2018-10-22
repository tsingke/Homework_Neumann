#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	try
	{
		age >= 16 && age <= 25;
	}
	catch (int)
	{
		cout << "该考生年龄不符" << endl;
	}
	try
	{
		score >= 0 && score <= 5;
	}
	catch (float)
	{
		cout << "该考生成绩无效" << endl;
	}
	return 20 * score;
}
int main()
{
	char name[20];
	int age;
	float score;
	cout << "请输入学生的姓名：" << endl;
	cin >> name;
	cout << "年龄：" << endl;
	cin >> age;
	cout << "分数：" << endl;
	cin >> score;
	checkAgeScore(age, score);

}