#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student (char *pSpec=0);//构造函数声明
	Student (const Student &r);//拷贝构造函数声明
	~Student();
	void Show();
};
Student::Student(const Student &r)//拷贝构造函数的实现
{
	if(r.specialty)
	{
		specialty=new char [strlen(r.specialty)+1];
		strcpy(specialty,r.specialty);
	}
	else specialty;
}
Student::Student(char *pSpec)//构造函数的定义
{
	if(pSpec)
	{
		specialty=new char[strlen(pSpec)+1];
		strcpy(specialty,pSpec);
	}
	else specialty=0;
}
Student::~Student()//析构函数实现
{
	if(specialty)
		delete[]specialty;//specialty的存储空间由new运算符分配,需用delete函数释放
}
void Student::Show()
{
	cout<<"specialty="<<specialty<<'\n';
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