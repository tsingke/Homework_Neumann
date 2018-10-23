
#include<iostream>
#include<math.h>
using namespace std;

struct fellow
{
	char name[10];
	int age;
	float score;
};

float checkAgeScore(int age, float score)
{
	if (age<16 || age>25) throw age;
	if (score<0 || score>5) throw score;
	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
	{
		float score2 = 20 * score;
		return score2;
	}
}
int main()
{
	fellow A;
	float score;
	cout << "please input name:" << endl;
	cin >> A.name;
	cout << "please input age:" << endl;
	cin >> A.age;
	cout << "please input C++ grade:" << endl;
	cin >> A.score;
	try
	{
		score=checkAgeScore(A.age, A.score);
		cout << "name: " << A.name << ", age: " << A.age << ", score: " << score<< endl;
	}
	catch (int)//捕获异常年龄
	{
		cout << "Warning: The Age is wrong!!!!";
	}
	catch (float)//捕获异常成绩
	{
		cout << "Warning: The Score is wrong!!!!";
	}
	system("pause");
	return 0;
}