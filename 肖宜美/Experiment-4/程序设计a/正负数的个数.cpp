#include<iostream>
#include<string.h>
using namespace std;

void zhengfushu(int p[],int i)
{
	int a = 0, b = 0;
	for (int s = 0; s < i ; s++)
	{
		if (p[s] > 0)
		{
			a++;
		}
		else if (p[s] < 0)
		{
			b++;
		}
		else
			;
	}
	cout <<"The number of positive numbers is:"<<a << "  The number of negative numbers is:" << b << endl;
}
