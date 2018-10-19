#include<iostream>
using namespace std;
//学生结构体
struct student
{
	char name[20];
	int age;
	float score;
};
//检测函数
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	if (age >= 16 && age <= 25 && score >= 0 && score <= 5)
		
	return age,score;
}
void main()
{
	int age;
	float score;
	student S;
	cout << "please input name" << endl;
	cin >> S.name;
	cout << "please input age(16-25)" << endl;
	cin >> S.age;
	cout << "please input score(0-5)" << endl;
	cin >> S.score;
	try
	{
		 score=checkAgeScore(S.age,S.score);
		 cout << "name:" << S.name << endl;
		 cout << "age:" << S.age << endl;
		 cout << "score:" << S.score*20 << endl;

	}
	
	catch (int)//捕获异常年龄
	{
		cout << "年龄超出范围";
	}
	catch (float)//捕获异常成绩
	{
		cout << "成绩不在范围内";
	}
	system("pause");

}