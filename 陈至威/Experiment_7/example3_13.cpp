//li3_13.cpp文件：用系统默认的拷贝构造函数只能实现浅拷贝，析构时出错
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Student
{
	char *specialty;
public:

	Student(const char *pSpec = 0);
	~Student();
	void Show();
};

Student::Student(const char *pSpec)
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
		delete[]specialty;
}
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang("computer");
	Student wang(zhang);
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}