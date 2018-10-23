#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

double fangcha(int p[], int i)
{
	double s = 0;
	for (int a = 0; a < i; a++)
	{
		s = s + p[a];
	}
	s = s / i;
	double r = 0;
	for (int a = 0; a < i; a++)
	{
		r += pow(p[a] - s, 2);
	}
	r = r / i;
	cout << "variance:" << r << endl;
	return 0;
}