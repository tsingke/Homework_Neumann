#include<iostream>
using namespace std;
void PandDnumber(int *p)//求正数和负数个数
{
    int a=0,b=0,c=0;
    for(int i=0;i<20;i++)
    {
        if(p[i]>0)a++;
        if(p[i]<0)b++;
    }
    cout<<"正数个数为"<<a<<endl<<"负数个数为"<<b<<endl;
}
void calculate(int *p)//求均值和方差
{
    int i=0;
    float SUM=0;
    float ave;
    for(i=0;i<20;i++)
    {
        SUM=SUM+p[i];
    }
    ave=SUM/i;
    cout<<"均值为："<<ave<<endl;
    float b=0,var;
    for(i=0;i<20;i++)
    {
        b=b+(p[i]-ave)*(p[i]-ave);
    }
    var=b/i;
    cout<<"方差为："<<var<<endl;
}
void sortScore(int *p)//按从小到大顺序输出（冒泡算法）
{
    int i,j;
    int swap;
    for(i=0;i<20;i++)
      {

        for(j=0;j<(20-i-1);j++)
    {
        if(p[j]>=p[j+1])
        {
            swap=p[j];
            p[j]=p[j+1];
            p[j+1]=swap;
        }
    }
}
cout<<"按从小到大输出为："<<endl;
for(i=0;i<20;i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int *ptr,*ee;
    ptr=new int[20];//申请内存
    ee=ptr;//首地址保护
    cout<<"请输入20个数："<<endl;
    for(int i=0;i<20;i++)
        {
          cin>>*ptr;
           ptr++;
        //cout<<(int)ptr<<endl;//显示地址
        }
        calculate(ee);//求均值和方差
        sortScore(ee);//按顺序输出
        PandDnumber(ee);//计算正负值个数
        delete[]ee;//释放内存


}



