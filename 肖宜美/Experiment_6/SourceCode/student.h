#pragma once
#ifndef _STUDENT//��������
#define _STUDRNT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{ 
	char *name;                                                //����
	char ID[19];                                               //���֤��
	char number[10];                                           //ѧ��
	char speciality[20];                                        //רҵ
	int age;                                                   //����
public:
	Student();                                                 //�޲ι��캯��
	Student(char *na, char *id, char *num, char *spec, int ag);//���ι��캯��
	Student(const Student &per);                               //�������캯��
	~Student();                                                //��������
	char* GetName();                                           //��ȡ����
	char* GetID();                                             //��ȡ���֤
	char* GetNumber();                                         //��ȡѧ��
	char* GetSpec();                                           //��ȡרҵ
	int GetAge();                                              //��ȡ����
	void Display();                                            //��ʾѧ����Ϣ
	void Input();                                              //����ѧ����Ϣ
};
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//����ǳ����
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
}
Student::Student(const Student &per)    //�������캯��,�ڴ�������ʱû����
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(speciality, per.speciality);
	age = per.age;
}
Student::~Student()                     //��������
{
	if (name)
		delete[]name;
}
char* Student::GetName()                //��ȡ����
{
	return name;
}
char* Student::GetID()                  //��ȡ���֤
{
	return ID;
}
int Student::GetAge()                  //��ȡ����
{
	return age;
}
char* Student::GetSpec()               //��ȡרҵ
{
	return speciality;
}
char* Student::GetNumber()               //��ȡѧ��
{
	return number;
}
void Student::Display()                //���������Ϣ
{
	cout << "����:" << name << endl;
	cout << "���֤:" << ID << endl;
	cout << "ѧ��:" << number << endl;
	cout << "רҵ:" << speciality << endl;
	cout << "����:" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "��������:";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "�������֤:";
	cin >> ID;
	cout << "��������:";
	cin >> age;
	cout << "����רҵ:";
	cin >> speciality;
	cout << "����ѧ��:";
	cin >> number;
}
#endif
