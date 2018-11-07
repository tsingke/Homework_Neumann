#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	student(int m, char *n)
	{
		age = m;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	friend void disp(student&);//将函数disp()声明为自己的友元函数
	~student()
	{
		cout << "delete it." << name << endl;
		delete[]name;
	}

private:
	int age;
	char *name;

};
void disp(student & p)
{
	cout << "student's name is " << p.name << "age is" << p.age << endl;
}
int main()
{
	student a(18, "wujiang");
	student b(19,"xiayu");
	disp(a);
	disp(b);
	system("pause");
	return 0;
}
