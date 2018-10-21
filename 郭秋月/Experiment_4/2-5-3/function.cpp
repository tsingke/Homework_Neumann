#include <iostream>
#include <cmath>
#include "2-5-3.h"

using namespace std;

//排名（冒泡法）
void sortscore(int *p)
{
    int i,j;
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i+1);j++)
        {
            if(p[j]>=p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    cout<<"-------第三步：数据由小到大排列-------"<<endl;
    for(i=0;i<n;i++)  cout<<p[i]<<"\t";
    cout<<endl;
}

//计算正负个数
void panddnumber(int *p)
{
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]>0)  a++;
        if(p[i]<0)  b++;
    }
    cout<<"-------第四步：输出正负数的个数-------"<<endl;
    cout<<"正数个数："<<a<<endl;
    cout<<"负数个数："<<b<<endl;
}

//求方差和平均值
void calculate(int *p)
{
    int i=0;
    cout<<endl<<"-------第一步：计算均值-------"<<endl;
    float sum=0;
    for(;i<n;i++) sum=sum+p[i];
    sum=(float)(sum/i);
    cout<<"平均总成绩为："<<sum<<endl;
    cout<<"-------第二步：计算方差-------"<<endl;
    float b=0,c;
    for(i=0;i<n;i++)
    {
        b=(float)(b+(p[i]-sum)*(p[i]-sum));
    }
    c=(float)(b/i);
    cout<<"成绩方差为："<<c<<endl;
}
