#include <iostream>
#include<math.h>
const double pi = 3.1415926;
using namespace std;
//求周长
void perimeter(double &a, double &P)
{
	P = 2 * pi*a;
}
//求面积
void area(double &a, double &S)
{
	S = pi*a*a;
}

void main()
{
	double a;
	cout << "please input radius of a circle :" << endl;
	cin >> a;
	double P;//周长
	double S;//面积；
	perimeter(a,P);
	area(a,S);
	cout << "perimeter is" <<P << "\t" << "area is" << S << endl;
	system("pause");
}