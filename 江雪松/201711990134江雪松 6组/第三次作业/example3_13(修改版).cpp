#include<iostream>
#include<string>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);
	~Student();
	Student(const Student &r);
	void Show();
};
Student::Student(const Student &r)
{
	if (r.specialty)
	{
		specialty = new char[strlen(r.specialty) + 1];
		strcpy(specialty, r.specialty);
	}
	else specialty = 0;
}
Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec)+1];
		strcpy(specialty, pSpec);
	}
	else specialty = 0;
}
Student::~Student()
{
	if (specialty)
		delete [ ]specialty;
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
	return 0;
}