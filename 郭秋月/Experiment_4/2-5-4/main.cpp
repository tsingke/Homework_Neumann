#include<iostream>
#include<cmath>

using namespace std;

struct student
{
	char name[10];
	int age;
	float score;
};
//百分制计算函数
float checkAgeScore(int age, float score)
{
	if (age<16 || age>25) throw age;//抛出
	if (score<0 || score>5) throw score;//抛出
	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
	{
		float score2 = 20 * score;
		return score2;
	}
}
int main()
{
	student A;
	float score2;
	cout << "请输入一个学生的姓名：" << endl;
	cin >> A.name;
	cout << "请输入年龄(16——25)：" << endl;
	cin >> A.age;
	cout << "请输入五级制C++语言考试分数(0——5)：" << endl;
	cin >> A.score;
	try
	{
		score2=checkAgeScore(A.age, A.score);
		cout << "name:" << A.name << "  age:" << A.age << "  score:" << score2 << endl;
	}
	catch (int)
	{
		cout << "Warning:Age is out of the question!";
	}
	catch (float)
	{
		cout << "Warning:Score is out of the question!";
	}
	return 0;
}
