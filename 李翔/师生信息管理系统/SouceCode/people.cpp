#include "people.h"
//Date��ĺ���ʵ��
void Date::Set(int y, int m, int d)
{
	year=y;
	month=m;
	day=d;
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
//Person��ĺ���ʵ��
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
	cout <<"��������Ϣ\n";
	cout <<"��  ��:";
	cin >> name;
	cout <<"��  ��:";
	cin >> number;
	int y,m,d;
	cout <<"��������(��� �·� ����):";
	cin >> y >> m >> d;
	birthday.Set(y, m,d);
	cout <<"�Ա�(m/f):";
	cin >> sex;
}
void Person::Output()
{
	cout << "��  ��: " << name << endl;
	cout << "��  ��: " << number << endl;
	cout << "��  ��: ";
	if (sex == 'm')
		cout << "��" << endl;
	else
		cout << "Ů" << endl;
	cout << "��������: " << birthday.GetYear() << '-' <<birthday.GetMonth() << '-' <<birthday.GetDay() << endl;
}
//Student��ĺ���ʵ��
void Student::Input()
{
	Person::Input();
	cout << "ר  ҵ: ";
	cin >> speciality;
}
void Student::Output()
{
	Person::Output();
	cout << "ר  ҵ: " << speciality <<endl;
}
//Graduate��ĺ���ʵ��
void Graduate::Input()
{
	Student::Input();
	cout << "�о�����: ";
	cin >> researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout << "�о�����: " << researchTopic << endl;
}
//Teacher��ĺ���ʵ��
void Teacher::Input()
{
	Person::Input();
	cout << "ְ  ��: ";
	cin >> academicTitle;
}
void Teacher::Output()
{
	Person::Output();
	cout << "ְ  ��: " << academicTitle <<endl;
}
//PostgraduateOnJob��ĺ���ʵ��
void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout << "ְ  ��: ";
	cin >> academicTitle;
}
void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "ְ  ��: " <<academicTitle << endl;
}
