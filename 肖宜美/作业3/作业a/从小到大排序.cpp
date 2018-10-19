#include<iostream>
#include<string.h>
using namespace std;

void maopaopaixu(int p[], int i)
{
	for (int j = 0; j<i; j++)  //Ã°ÅÝÅÅÐò
	{
		for (int k = 0; k<i - j-1 ; k++)
		{
			if (p[k]>p[k + 1])
			{
				int temp = p[k];
				p[k] = p[k + 1];
				p[k + 1] = temp;
			}
		}
	}
	
	cout << "From small to large£º"<<endl;
	for (int a = 0; a < i ; a++)
	{
		cout << p[a] << endl;
	}
}