#include<iostream>
#include<string.h>
using namespace std;

double pinjunzhi(int p[], int i)
{
	double s=0;
	for (int a = 0; a < i; a++)
	{
		s =s+ p[a];
	}
	s = s / i;
	cout << "average value is£º"<<s << endl;
	return s;
};