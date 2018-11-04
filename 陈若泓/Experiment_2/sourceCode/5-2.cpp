#include <iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	double r,C,S;
	cin >> r;
	C = 2 * PI*r;
	S = PI * r*r;
	cout << C << endl << S << endl;
	system("pause");
	return 0;
}