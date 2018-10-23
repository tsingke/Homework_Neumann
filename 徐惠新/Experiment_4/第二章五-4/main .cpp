#include"head.h"

int main()
{
	char name[20];
	int age;
	float score;
	int i;
	try              //检查是否出现异常
	{
		cout << "请输入学生姓名:";
		cin >> name;
		cout << "请输入年龄和C++语言考试分数：";
		cin >> age >> score;
		cout << "姓名:" << name << " 年龄：" << age << " 分数：" <<checkAgeScore(age, score)<<endl; //如出现异常则抛出
	}
	catch (int)       //捕获异常，并输出年龄不符合要求的提示信息
	{
		cout << "年龄不在要求范围内" << endl;
	
	}
	catch (float)      //捕获异常，输出分数不符合要求的提示信息
	{
		cout << "分数输入错误" << endl;
	}
	system("pause");
	return 0;

}