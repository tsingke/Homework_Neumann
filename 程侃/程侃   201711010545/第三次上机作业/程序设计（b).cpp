#include <iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	
	if (age < 16 || age>25||score<0||score>5)
		throw 0;
	return (score * 20);
}
int main()
{
	char name[100];
	int age;
	float score;
	cin >> name[100]>>age>>score;
	try
	{
		checkAgeScore(age,score) ;
	}
	catch (int)
	{
		cout << "出现异常" << endl;
	}
	cout << "学生姓名:" << name[100] << endl;
	cout << "学生年龄:" << age << endl;
    cout << "学生成绩:" << checkAgeScore(age, score) << endl;
 
	system("pause");
	return 0;
}