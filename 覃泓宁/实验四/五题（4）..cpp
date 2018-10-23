# include <iostream>
# include <string.h>
float checkagescore(int age, float score);
using namespace std;
int main()
{
	char a[20];
	int age, score;
	gets_s(a);
	cin >> age >> score;
	cout << "姓名为"<<endl;
	puts(a);
	cout << "年龄为" << age <<endl << "成绩为" << score<<endl;
	try
	{
		cout << "百分制成绩为:"<<checkagescore(age, score)<<endl;
	}
	catch(int)
	{
		cout << "捕获异常";
	}
	system("pause");
	return 0;
}
float checkagescore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score > 5)
		throw score;
	return score*20;          //百分制成绩
}