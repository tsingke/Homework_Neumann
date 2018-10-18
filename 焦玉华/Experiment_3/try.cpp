#include<iostream>

using namespace std;

float checkAgeScore(int age,float score)
{
	if (age<16 || age>25)    throw age;
	if (score<0 || score>5)    throw score;
	return score;
}
int main()
{
	  char name[10];
       int age;
       int score;
	 cout << "姓名：  " << endl;
		cin >>  name ;
		cout << "年龄：  " << endl;
		cin >> age ;
		cout << "成绩：  " <<endl;
		cin >>  score ;
		try
		{
			cout << "学生姓名：  " << name << endl;
			cout << "学生年龄：  " << checkAgeScore(age, score) << endl;
			cout << "学生成绩：  " << checkAgeScore(age,score)<< endl;
		}
	catch ()
	{
		cout << "error of input" << endl;

	}
	cout << "calculate finished" << endl;
	system("pause");
	return 0;
}