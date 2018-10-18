#include<iostream>
using namespace std;
void main()
{
	double pai = 3.1415926;
	double r, V, s;
	cout << "ÇëÊäÈëÔ²µÄ°ë¾¶r:" << '\n';
	cin >> r;
	V = pai * r*r;
	s = 2 * pai*r;
	cout << "V=" << V << ",s=" << s;
}