#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student{ char *pSpec = 0 };//构造函数声明
	~Student();
	void Show();
};
Student::Student(char *pSpec)//构造函数的定义
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete[]specialty;//析构函数实现
}
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");//调用普通构造函数
	Student wang(zhang);//调用系统提供的默认拷贝构造函数
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}