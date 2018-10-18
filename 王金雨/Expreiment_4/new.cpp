#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int i=0,j=0,k=0,sum=0,variance=0,t=0;
    int*ptr;
    int a[5]={0};
    ptr=a;
   ptr=new int[5];//为一个包含20个整数的数组分配动态内存空间
   int n=0;
   cout<<"请输入您想要赋值的个数"<<endl;
   cin>>n;
   cout<<"请输入"<<n<<"个数"<<endl;

   for(int i=0;i<n;i++)//为数组的前n位赋值，其中n不能大于20
   {
    cin>>*ptr;
    ptr++;
    cout<<endl;
   }

   for( i=0;i<5;i++)//计算该数组的平均值和方差以及其中正负数的个数
   {
      sum+=a[i];
      variance+=pow((a[i]-(sum/5)),2);
   if(a[i])
    {
        if(a[i]>0)
            j++;
        else
            k++;
    }
    else;


   }

    cout<<"该数组中正数有"<<j<< " 个"<<endl;
    cout<<"该数组中负数有"<<k<< " 个"<<endl;
    cout<<"该数组的均值"<<sum<< " 个"<<endl;
    cout<<"该数组的方差为"<<variance/5<< " 个"<<endl;
    //从小到大排序
    for(i=0;i<4;i++)
   {
    if(a[i]>a[i+1])
    {
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;
    }
   }
   for(i=0;i<5;i++)
    {
        cout<<a[i++]<<endl;
    }
      delete[]ptr;
}
