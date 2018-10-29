#include<iostream>
using namespace std;
int checkAge(int age)
{
	
	if (age < 16 || age >= 26)throw age;
	return age;
}
float checkScore(float score)
{

	if (score < 0 || score >= 6)throw score;
	return score * 20;
}
int main() 
{
	char name[6];
	int age;
	float score;
	cout << "输入学生姓名" << endl;
	for(int i=0;i<=5;i++)
	{
		cin >> name[i];
	}
	cout << "输入学生年龄" << endl;
	cin >> age ;
	cout << "输入学生分数" << endl;
	cin >> score;
	try
	{
		cout << "姓名:" <<endl;

		for(int i=0;i<=5;i++)
		{
			cout  << name[i] << " ";
		}
		
    cout << "分数:" << checkScore(score) << endl;
	cout << "年龄:" << checkAge(age) << endl;

	}
	catch (int)
	{
		cout << "年龄段不合理" << endl;
	}
	catch (float)
	{
		cout << "分数范围不合理" << endl;
	}
	cout << "检查结束" << endl;
    system("pause");
	return 0;
}