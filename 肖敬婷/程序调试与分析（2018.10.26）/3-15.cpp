
#include<string>
#include <iostream>
using namespace std;
class Student
{
	char*specialty;
public:
	Student(char*pSpec=0);
	Student(const Student &r);
	~Student();
	void Show();
};
//--------------���캯����������������---------------------
Student::Student(char*pSpec)
{
	if (pSpec = 0)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
		}
	else specialty = 0;
}

Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	
	}
	else specialty = 0;
}

Student::~Student()
{
	if (specialty)
		delete[]specialty;
}

//--------------------------------��ͨ��������-----------------------
void Student::Show()
{
	cout << "specialty=" << specialty << '\n';
}
int main()
{
	Student zhang(0);
	Student wang(zhang);
	zhang.Show();
	wang.Show();
	system("pause");
	return 0;

}