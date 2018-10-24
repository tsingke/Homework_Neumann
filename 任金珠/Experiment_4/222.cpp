#include<iostream>
#include<windows.h>
#include"2.h"
using namespace std;
int main()
{
	int *p,i;
	p=new int [20];
	cout<<"please enter 20 integers :";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<endl;
	insert(p);
	count(p);
	calculator(p);
	delete []p;
	system("pause");
	return 0;
}