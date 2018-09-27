#include<Windows.h>
#include<iostream>
using namespace std;
int main()
{
	int r;
	double s, l;
	cout << "请输入圆的半径" << endl;
	cin >> r;
	s = 3.14*r*r;
	l = 2 * 3.14*r;
	cout << "圆的周长为" << l <<endl<< "圆的面积为" << s << endl;
	system("pause");
	return 0;
}