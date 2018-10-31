#include <string>
#include <iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *specialty
		public;
	Student(char * pspec = 0);
	~Student();
	void Show();
};
Student::Student£¨ char  £ªpSpec);
		{
		if (pSpec)
		{
			specialty new char[strlen(psSpec) + 11;
			strcpy(specialty, pSpec);
		}
		else specialty = 0;
		}
		Student:: - Student()
		{
			if (specialty)
				delete[]specialty;
		}
		void Student::Show()
		{
			cout << "specialty=" << specialty << '/n';
		}
		int main()
		{
			Student zhao("computer");
			Student zhang(zhang);
			zhang.Show();
			zhao.Show();
			system("pause");
			return 0;
		}
