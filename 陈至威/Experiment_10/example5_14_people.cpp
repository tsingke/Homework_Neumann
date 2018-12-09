#define _CRT_SECURE_NO_WARNINGS
#include "example5_14_people.h"

void Date::Set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::GetYear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
Person::Person()
{
	strcpy(name,"00");
}
char * Person::GetName()
{
	return name;
}
void Person::Input()
{
	cout << "��������Ϣ\n";
	cout << "������ ";
	cin >> name;
	cout << "��ţ� ";
	cin >> number;
	int y, m, d;
	cout << "�������ڣ���� �·� ���ڣ��� ";
	cin >> y >> m >> d;
	birthday.Set(y, m, d);
	cout << "�Ա�m/f���� ";
	cin >> sex;
}
void Person::Output()
{
	cout << "������ " << name << endl;
	cout << "��ţ� " << number << endl;
	cout << "�Ա� ";
	if (sex == 'm')
		cout << "Ů" << endl;
	else
		cout << "��" << endl;
	cout << "�������ڣ� " << birthday.GetYear() << '-' << birthday.GetMonth() << '-' << birthday.GetDay() << endl;
}
void Student::Input()
{
	Person::Input();
	cout << "רҵ�� ";
	cin >> speciality;
}
void Student::Output()
{
	Person::Output();
	cout << "רҵ�� " << speciality << endl;
}
void Graduate::Input()
{
	Student::Input();
	cout << "�о����⣺ ";
	cin >> researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout << "�о����⣺ " << researchTopic << endl;
}
void Teacher::Input()
{
	Person::Input();
	cout << "ְ�ƣ� ";
	cin >> academicTitle;
}
void Teacher::Output()
{
	Person::Output();
	cout << "ְ�ƣ� " << academicTitle << endl;
}
void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout << "ְ�ƣ� ";
	cin >> academicTitle;
}
void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "ְ�ƣ� " << academicTitle << endl;
}