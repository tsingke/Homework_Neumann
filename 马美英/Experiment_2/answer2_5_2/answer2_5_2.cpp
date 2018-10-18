#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	float R, C, S;
    #define PI 3.14159
	cin >> R;
	S = PI*R*R;
	C = 2 * PI*R;
	cout << "S="<< S <<'\t'<< "C=" << C << endl;
	system("pause");
	return 0;
}