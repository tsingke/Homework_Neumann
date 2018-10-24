#include<iostream>
#include<Windows.h>
using namespace std;
int  checkAge(int x)
{
	if (x< 16 || x>25)
		throw x;
	return x;	
}
float checkScore(float y)
{
	if (y < 0 || y>5)
		throw y;
	return y;
}
int main()
{
	char name[20];
	int age;
	float score;
	cin >> name >> age >> score;
	try
	{
		int  checkAge(int age);
		float checkScore(float score);

		cout << "姓名:" << name << endl;
		cout << "年龄:" << checkAge(age) << endl;
		cout << "分数:" << checkScore(score) << endl;
	}
	catch (int)
	{
		cout << "年龄输入错误" << endl;
	}
	cout << "输出结束" << endl;

	catch (float)
	{
		cout << "分数输入错误" << endl;
	}

	cout << "输出结束" << endl;
	system("pause");
	return 0;
}