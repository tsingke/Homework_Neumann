#include<iostream>
#include<stdlib.h>
using namespace std;

struct student
{
	char name[10];
	int age;
	float score;
};

float checkAgeScore(int age,float score)
{
	if(age<16||age>25)throw age;
	if(score<0||score>5)throw score;
	if (age >= 16 && age <= 25 && score >= 0 && score<= 5)
	{
		float grade=score*20;//百分制成绩
		return grade;
	}
}

int main()
{
	student A;
	float grade;
	cout << "请输入姓名:" << endl;
	cin >> A.name;
	cout << "请输入年龄:" << endl;
	cin >> A.age;
	cout << "请输入c++成绩:" << endl;
	cin >> A.score;
	try
	{
		grade=checkAgeScore(A.age, A.score);//被检测函数
		cout << "name: " << A.name << ", age: " << A.age << ", score: " << grade << endl;
	}
	catch (int)//捕获异常年龄
	{
		cout << "Warning: Age is wrong!";
	}
	catch (float)//捕获异常成绩
	{
		cout << "Warning: Score is wrong!";
	}
	system("pause");
}