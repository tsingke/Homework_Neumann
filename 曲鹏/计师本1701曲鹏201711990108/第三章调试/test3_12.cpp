#include<string>
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class student
{
	char *specialty;
public:
	student(char *pspec);
	~student( );
	void show();
};
student::student(char *pspec)
{
	if (pspec)
	{
		specialty = new char[strlen(pspec) + 1];
		strcpy_s(specialty, strlen(pspec) + 1, pspec);
	}
	else
	{
		specialty = 0;
	}
}

student::~student()
{
	if (specialty)
		delete[]specialty;//specialty的储存空间由new运算符分配,需要delete释放
}
void student::show()
{
	cout << "specailty" << specialty << '\n';
}


int main()
{
	student zhang("computer");
	student wang(zhang);
	zhang.show();
	wang.show();


	system("pause");
	return 0;
}