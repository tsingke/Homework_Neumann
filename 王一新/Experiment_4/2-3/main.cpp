#include<iostream>
#include<stdlib.h>
using namespace std;

float mypow(float x)
{
	return(x*x);
}

int main()
{
	
	int *ptr;
	int a=0;//记录正数个数
	int b=0;//记录负数个数
	int sum=0;//总和
	float meanvalue=0;//均值
	float variance=0;//方差
	float x=0;
	int temp;
	ptr=new int[20];//利用new申请连续20个int大小的内存空间
	cout<<"请输入20个整数"<<endl;


	for(int i=1;i<=20;i++)//输入正数并判断是正数还是负数
	{
		cin>>ptr[i];
		if(ptr[i]<0)b++;
		if(ptr[i]>0)a++;
		else continue;
	}
	cout<<"正数个数:"<<a<<endl;
	cout<<"负数个数:"<<b<<endl;

	for(int i=1;i<=20;i++)//计算均值
	{
		sum=sum+ptr[i];
	}
	meanvalue=sum/20;
	cout<<"均值为:"<<meanvalue<<endl;


	
	for(int i=1;i<20;i++)//计算方差
	{
		x=x+mypow(ptr[i]-meanvalue);
	}
	variance=x/20;
	cout<<"方差为"<<variance<<endl;
	

	for(int i=1;i<20;i++)//排序
	{
		for(int j=i+1;j<=20;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	
	cout << "由小到大排序为：" << endl;
	for (int i = 1; i <=20; i++)
		{
			cout << ptr[i] << " ";
	}
	cout << endl;
	delete ptr;
	system("pause");



	

}
