#include<iostream>
using namespace std;
int add(int a, int b);
void main()
{
	int x, y, sum;
	cout << "please input x and y:" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x << "+" << y << "=" << sum << endl;
	system("pause");
}
int add(int a, int b)
{
	return a + b;
}