#include<iostream>
#include<string.h>

using namespace std;

void zhengfushu(int p[], int i);
double pinjunzhi(int p[], int i);
double fangcha(int p[], int i);
void maopaopaixu(int p[],int i);

int main()
{
	int *p = new int[20];
	int i = 0;
	while (cin>>p[i])
	{
		++i;
	}

	zhengfushu( p, i);
	pinjunzhi(p, i);
	fangcha(p, i);
	maopaopaixu(p, i);

	delete[]p;
	system("pause");
	return 0;
}