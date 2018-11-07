#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
struct data
{
	char name[10];
	int age;
	float score;

};
data *p = new data;
void putdata(data *p)
{
	cout << "输入依次学生名字,年龄,五级制c++分数" << endl;
	cin >> p->name >> p->age >> p->score;
}

data check(data *p)
{
if ((p->age < 16 || p->age> 25))
throw p->age;

else
if (p->score > 5 || p->score < 0)
	throw p->score;
else
cout << "学生信息检验正确" << endl;
cout<<  p->name << "  " << p->age << "  " << p->score* 20<< "分" << endl;
}
int main()
{
	putdata(p);
	try
	{
	check(p);
	}
	catch (int)
	{
	cout << "学生姓名不合适或不正确,请重新输入" << endl;
	}
	catch (float)
	{
	cout << "学生成绩输入错误,请重新输入" << endl;
	}
	system("pause");
	return 0;
}