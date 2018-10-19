#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return 20*score;
		
}
int main()
{

	float checkAgeScore(int age, float score);
	char name[20];
	int age;
	float score;
	cout << "请输入：" << endl;
	cin >> name >> age >> score;
	//抛出异常
	try
	{
		cout << "姓名：" << name;
		checkAgeScore(age,  score);
		cout << "   年龄：" << age;
		cout << "   分数：" << checkAgeScore(age,score);

	}
	//捕捉异常
	catch (int)
	{
		cout << "  年龄不合理" << endl;
	}

	catch (float)
	{
		cout << "   分数不合理" << endl;
	}
	system("pause");
	return 0;
	
}