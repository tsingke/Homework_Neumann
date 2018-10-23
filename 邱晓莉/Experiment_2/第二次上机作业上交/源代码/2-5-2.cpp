#include<iostream>
#include<Windows.h>
#define PAI 3.14
using namespace std;
int main()
{
	int r;
	float S, C;
	cout << "enter the radius of the circle" << endl;
	cin >> r;
	S = PAI*r*r;
	C = 2 * PAI*r;
	cout << S << " " << C << endl;

	
	system("pause");
	return 0;
}