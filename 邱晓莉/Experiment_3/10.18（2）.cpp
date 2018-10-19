#include<iostream>
using namespace std;

void cheakAgeScore(int &age, float &score)
{

	if (age <= 16 || age >= 25)
		throw age; //如果该同学年龄小于16岁或者大于25岁，则抛出异常
	
	if (score <= 0 || score >= 5)
		throw score;//如果该同学成绩低于0或者大于5，则抛出异常
	
	
}

int main()
{
	void cheakAgeScore(int age, float score);
	char name[10];
	int age;
	float score;

	cout << "请输入该同学的姓名、年龄、五级制C++语言考试分数" << endl;
	cin >> name >> age >> score;
	
	
	try     //检查是否出异常
	{
		
		cout << "姓名：" << name;
		void cheakAgeScore(int age,float score);
		cout << "    年龄：" << age;
		cout<< "   五级制C++语言考试分数：" << score << endl;
		
		
	}
	
	catch (int)   //捕获异常并作出处理，即输出一条提示信息
	{
		cout << "年龄输入不规范" << endl;
	}
	catch (float)  //允许出现1个try对应多个catch
	{
		cout << "C++成绩输入不规范" << endl;
	}



	

	system("pause");
	return 0;
}