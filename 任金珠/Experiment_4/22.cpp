#include<iostream>
#include"2.h"
using namespace std;
void insert(int *p)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=p[i];
		j=i-1;
		while(j>=0&&p[j]>key)
		{
			p[j+1]=p[j];
	
			j=j-1;
		}
		p[j+1]=key;
	}
	cout<<"从小到大排序：";
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
void count(int *p)
{
	int s1=0,s2=0;
	for(int i=0;i<n;i++)
	{
		if(p[i]>0)
			s1++;
		else if(p[i]<0)
			s2++;
	}
	cout<<"正数的个数："<<s1<<"负数的个数："<<s2<<endl;
}
void calculator(int *p)
{
	float v=0, var=0, ave=0, sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=p[i];
	}
	ave=(float)(sum/n);
	for(i=0;i<n;i++)
	{
		v+=(float)((p[i]-ave)*(p[i]-ave));
	}
	var=(float)(v/n);
	cout<<"平均值："<<ave<<"方差："<<var<<endl;
}





		