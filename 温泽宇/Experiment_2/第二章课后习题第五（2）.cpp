#include<iostream>

using namespace std;

#include<windows.h>

#define pi 3.14
void cirlce(double r)
{
	double s, l;
	s = pi * r*r;
	l = 2 * pi*r;
	cout << "圆的面积：" << s << endl;
	cout << "圆的周长" << l << endl;

}

int main()
{
	int r;
	cout << "请输入圆的半径";
	cout << endl;
	cin >>  r;
	cirlce(r);
	system("pause");
	return 0;
}