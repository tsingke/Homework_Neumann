#include "iostream"
#include "windows.h"
#include "iomanip"

using namespace std;

double ¦Ð=3.1415926;
double ZC(double a)
{
	double c;
	c = a * 2 * ¦Ð;
	return c;
}
double MJ(double b)
{
	double s;
	s = b *b * ¦Ð;
	return s;
}
int main()
{
	double r;
	double C, S;
	cout << "ÇëÊäÈë°ë¾¶rµÄÖµ£º" << endl;
	cin >> r;
	C = ZC(r);
	S = MJ(r);
	cout << setprecision(8) << "C=" << C << endl;
	cout << setprecision(8) << "S=" << S << endl;
	system("pause");
	return 0;
}