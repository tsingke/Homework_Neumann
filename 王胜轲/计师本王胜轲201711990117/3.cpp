#include <string>
#include <iostream>
#include<windows.h>
using namespace std;
class Student
{
	char *special;
public
	Student(char * pspec = 0);
	~Student();
	void Show();
};
Student::Student£¨ char *m);
		{
		if (m)
		{
			special new char[strlen(m) + 11;
			strcpy(special, m);
		}
		else special = 0;
		}
		Student:: - Student()
		{
			if (special)
				delete[]special;
		}
		void Student::Show()
		{
			cout << "special=" << special << '/n';
		}
		int main()
		{
			Student a("computer");
			Student b(zhang);
			a.Show();
			b.Show();
			system("pause");
			return 0;
		}
