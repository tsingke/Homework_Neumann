#include<iostream>
#include<windows.h>
using namespace std;
#define pi 3.14

int main()
{
	double r = 0;
	double area = 0, length = 0;
	cout << "输入半径：" << endl;
	cin >> r;
	area = pi * r*r;
	length = 2 * pi*r;
	cout << "面积：" << area << endl;
	cout << "周长：" << length << endl;
	system("pause");
	return 0;
}
