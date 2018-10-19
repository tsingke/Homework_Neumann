#include "iostream"
#include "windows.h"
using namespace std;
float checkagescore(int age, float score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5) throw score;
	return 20 * score;
}
int main()
{
	char name[10];
	int age;
	float score;
	cout << "请输入学生的姓名：";
	gets_s(name);
	cout << endl;
	cout << "请输入学生的年龄：";
	cin >> age;
	cout << endl;
	cout << "请输入学生的五级制C++考试分数：";
	cin >> score;
	cout << endl;
	try
	{
		cout << name << "同学的年龄是：" << age << "，百分制成绩为：" << checkagescore(age, score) << endl;
	}
	catch (int)
	{
		cout << "你输入的年龄有错误！" << endl;
	}
	catch (float)
	{
		cout << "你输入的成绩有错误！" << endl;
	}
	cout << "Finished!" << endl;
	system("pause");
	return 0;
}

