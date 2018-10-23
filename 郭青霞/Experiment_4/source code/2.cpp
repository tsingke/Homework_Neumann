#include<iostream>
#include<windows.h>

using namespace std;

float checkAgeScore(int age, float score)
{
	if (!(age >= 18 && age <= 25))      //如果age范围不合理，抛出异常
		throw age;



	if (!(score >= 0 && score <= 5))     //如果score范围不合理，抛出异常
		throw score;

	return score * 20;


}


int main()
{
	char name[10];
	int age;
	float score;
	cout << "请输入学生姓名：";
	cin >> name;
	cout << endl << "请输入学生年龄：";
	cin >> age;
	cout << endl << "请输入学生C++百分制成绩：";
	cin >> score;
	cout << endl;

	try          //检查是否出现异常
	{
		cout << "学生姓名：" << name << endl << "该学生年龄为：" << age << endl << "该学生C++百分制成绩为：" << checkAgeScore(age, score) << endl;
		//checkAgeScore(age, score);
	}
	catch (float)     //捕获异常并作出处理，即输出一条提示信息
	{
		cout << "error" << endl;

	}
	cout << "calculate finished" << endl;   //catch块的后续语句
	system("pause");
	return 0;
}