#include<iostream>
#include"head.h"
using namespace std;

void PandDnumber(int *p)
{
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(p[i] > 0)
            sum1++;
        if(p[i] < 0)
            sum2++;
    }
    cout<<"正数个数："<<sum1<<" ,负数个数："<<sum2<<endl;
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

    float sum3 = 0, var;
	for (int i = 0; i < n; i++)
	{

		sum3 = (float)(sum3 + (p[i] - avg)*(p[i] - avg));
	}
	var = (float)(sum3 / n);
    cout<<"The variate = "<<var<<endl;
}

void sortScore(int *p)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(p[j]>p[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
    cout<<"排序结果为："<<endl;
    int i = 0;
    while(i < n)
        {
            cout<<p[i]<<" ";
            ++i;
        }
    cout<<endl;
}
