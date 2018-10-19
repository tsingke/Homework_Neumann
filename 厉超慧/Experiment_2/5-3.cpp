
#include<iostream>
#include<Windows.h>
const double PI = 3.14;
using namespace std;
int main()
{
	float r,C, S;
	cin >> r;
	C = 2 * PI*r;
	S = PI * r*r;
	cout << "C=" << C <<endl<< "S=" << S << endl;
	system("pause");
	return 0;

}
