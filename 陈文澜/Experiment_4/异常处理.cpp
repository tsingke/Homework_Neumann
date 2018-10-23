#include<iostream>
using namespace std;

float checkAgeScore(int x, float y)
{
	if (x < 16 || x >25) 
		throw x;
	if (y < 0 || y > 5) 
		throw y;
	return y/5*100;
}
int main()
{   
	
	char name[20];
	int age;
	float score;
	cin >> name >> age >> score;
	cout << endl;
	cout << "学生的姓名：" << name<<endl;
	cout << "学生的年龄：" << age << endl;
	try
	{   
		float checkAgeScore(int x, float y);
		score = checkAgeScore(age, score);
		cout << "学生的成绩为：" <<score<<"%"<< endl;
	}
	catch (int )
	{
		cout << "年龄超出合理的范围内" << endl;
	}
	catch (float )
	{
		cout << "成绩超出合理的范围内" << endl;
	}
	cout << "程序完成检查" << endl;
	system("pause");
	return 0;
}