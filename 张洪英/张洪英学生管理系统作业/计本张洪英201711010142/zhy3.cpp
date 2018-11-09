#include<iostream>
#include<string>
using namespace std;
class student
{
	int age;
	char *name;
public:
	student(int m, char *n)
	{
		age = m;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
}
	friend void disp(student&);
	~student()
	{
		cout << "delete it." << name << endl;
		delete[]name;
	}
};
void disp(student &p)
{
	cout << "student's name is" << p.name << ",age is" << p.age << endl;
}
int main()
{
	student a(18, "wujiang");
	student b(19, "ffff");
		disp(a);
	disp(b);
	return 0;
}