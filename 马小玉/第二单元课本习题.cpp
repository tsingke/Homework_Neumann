#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	char ch;
	cin >> a >> ch >> b >> c;
	cout << a << endl << ch << endl << b << endl << c;
	return 0;
}
//结果：23  .  56  10

#include<iostream>
using namespace std;
int main()
{

	int arr[4] = { 1, 2, 3, 4 };
	int *a = arr;
	int *&p = a;
	p++;
	*p = 100;
	cout << *a << " " << *p << endl;
	for (int i = 0; i<4; i++)
		cout << arr[i] << " ";
	cout << endl;
	int b = 10;
	p = &b;
	cout << *a << " " << *p << endl;
	for (int i = 0; i<4; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
//结果：100  100
//1  100  3  4
//10  10
//1  100 3  4


#include<iostream>
using namespace std;
int i = 0;
int main()
{
	int i = 5;
	{
		int i;
		i = 7;
		cout << "::i=" << ::i << endl;
		cout << "i=" << i << endl;
		::i = 1;
		cout << "::i=" << ::i << endl;
	}
	cout << "i=" << i << endl;
	cout << "::i=" << ::i << endl;
	i += ::i;
	::i = 100;
	cout << "i=" << i << endl;
	cout << "::i=" << i << endl;
	return 0;
}
//结果：0  7  1  5  1  6  5

#include<iostream>
using namespace std;
void f(double x = 50.6, int y = 10, char z = 'A');
int main()
{
	double a = 216.34;
	int b = 2;
	char c = 'E';
	f();
	f(a);
	f(a, b);
	f(a, b, c);
	return 0;
}
void f(double x, int y, char z)
{
	cout << "x=" << x << " y=" << y << " z=" << z << endl;
}
//结果：x=50.6 y=10 z='A'
//结果：x=216.34  y=10  z='A'
//结果：x=216.34  y=2  z='A'
//结果：x=216.34  y=2  z='E'


#include<iostream>
using namespace std;
int & s(const int &a, int &b)
{

	b += a;
	return b;
}
int main()
{
	int x = 500, y = 1000, z = 0;
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	z = s(x, y);
	cout << x << '\t' << y << '\t' << z << '\n';
	s(x, y) = 200;
	cout << x << '\t' << y << '\t' << z << '\n';
	return 0;
}
//结果：500  1000  0
//结果：500  1500  0
//结果：500  2000  2000
//结果：500  200   2000


#include<iostream>
using namespace std;
void fun(int x, int &y)
{

	x += y;
	y += x;
}
int main()
{

	int x = 5, y = 10;
	fun(x, y);
	fun(y, x);
	cout << "x=" << x << ",y=" << y << endl;
	return 0;
}
//结果：x=35 y=25

#include<iostream>
using namespace std;
int main()
{
	int x, y, sum;
	cin >> x >> y;
	sum = x + y;
	cout << "sum=" << sum << endl;
	return 0;
}
int add(int a, int b)
{

	return a + b;
}


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	int r;
	double s, c;
	s = PI*r*r;
	c = 2 * PI*r;
	cin >> r;
	cout << "s=" << s << " c=" << c << endl;
	return 0;

}