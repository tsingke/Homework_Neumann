#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;
class Student
{
	char *specialty;
public:
	Student (char *pSpec=0);//���캯������
	Student (const Student &r);//�������캯������
	~Student();
	void Show();
};
Student::Student(const Student &r)//�������캯����ʵ��
{
	if(r.specialty)
	{
		specialty=new char [strlen(r.specialty)+1];
		strcpy(specialty,r.specialty);
	}
	else specialty;
}
Student::Student(char *pSpec)//���캯���Ķ���
{
	if(pSpec)
	{
		specialty=new char[strlen(pSpec)+1];
		strcpy(specialty,pSpec);
	}
	else specialty=0;
}
Student::~Student()//��������ʵ��
{
	if(specialty)
		delete[]specialty;//specialty�Ĵ洢�ռ���new���������,����delete�����ͷ�
}
void Student::Show()
{
	cout<<"specialty="<<specialty<<'\n';
}
int main()
{
	Student zhang("computer");//������ͨ���캯��
	Student wang(zhang);//����ϵͳ�ṩ��Ĭ�Ͽ������캯��
    zhang.Show();
	wang.Show();
	system("pause");
	return 0;
}