#include<iostream>
#include"11.h"
using namespace std;

void PandDnumber(int *p)
{
    int s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(p[i] > 0)
            s1++;
        if(p[i] < 0)
            s2++;
    }
    cout<<"正数个数："<<s1<<" 负数个数："<<s2<<endl;
}
void calculate(int *p)
{
    float sum = 0, avg;
    for(int i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }
    avg = (float)(sum / n);
    cout<<"The average = "<<avg<<endl;

    float s3 = 0, var;
	for ( i = 0; i < n; i++)
	{

		s3 = (float)(s3 + (p[i] - avg)*(p[i] - avg));
	}
	var = (float)(s3 / n);
    cout<<"The variate = "<<var<<endl;
}
