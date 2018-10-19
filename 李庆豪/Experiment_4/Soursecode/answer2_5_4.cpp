#include<iostream>
#include<math.h>
using namespace std;
//学生结构体
struct student
{
	char name[10];
	int year;
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
void main()
{
	student A;
	float score2;
	cout << "please input name" << endl;
	cin >> A.name;
	cout << "please input age(16——25)" << endl;
	cin >> A.year;
	cout << "please input C++ grade(0——5)" << endl;
	cin >> A.score;
	try
	{
		score2=checkAgeScore(A.year, A.score);//被检测函数
		cout << "name:" << A.name << " age:" << A.year << " score:" << score2 << endl;
	}
	catch (int)//捕获异常年龄
	{
		cout << "Warning:Age is out of the question!";
	}
	catch (float)//捕获异常成绩
	{
		cout << "Warning:Score is out of the question!";
	}
	system("pause");
}