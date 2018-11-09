#include<string>
#include<iostream>
using namespace std;
class student
{

	char *specialty;
public:
	student(char *pspec = 0);
	~student();
		void show();

};
student ::~student(char *pspec)
{
	if (pspec)
	{

		specialty = new char[strlen(pspec) + 1];
		strcpy(specialty, pspec);
	}
	else specialty = 0;
}
student ::~student()
{
	if (specialty)
		delete []speciality;
}
void student::show()
{
	cout << "specialty=" << specialty << '\n';

}
int main()
{
	student zhang("computer")
		student wang(zhang);
	zhang.show();
	wang.show();
	return 0;
}