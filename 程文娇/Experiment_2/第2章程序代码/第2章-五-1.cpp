#include<iostream>
#include<windows.h>
using namespace std;
void fun(int a, int b);

int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x;
	cin >> y;

	sum = x + y;

	cout << "x=" << x<<" y=" << y <<" sum="<<sum << endl;
	system("pause");

	return 0;

}
int add(int a, int b)
{
	return a + b;
}


