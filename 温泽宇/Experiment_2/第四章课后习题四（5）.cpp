#include<iostream>

using namespace std;

#include<windows.h>

int & s(const int &a,  int &b)
{
	b += a;
	return b;
}
int main()
{
	int x = 500, y = 100, z = 0;
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y);
	x = 100;
	cout << x << '\t' << y << '\t' << z << '\n';
	z=s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y)=200;
	cout << x << '\t' << y << '\t' << z << '\n';
	system("pause");
	return 0;
}