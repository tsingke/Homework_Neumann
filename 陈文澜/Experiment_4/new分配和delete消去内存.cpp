#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	int *ptr;
	ptr = new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		cout << endl;
	}
	int n = 0;//为正数的个数
	int s = 0;//为负数的个数
	int m = 0, l = 0;//m为均值，l为方差
					 /*计算数组中正数的个数*/
	for (int i = 0; i<20; i++)
	{
		if (ptr[i]>0)
		{
			n++;
		}
	}
	/*计算数组中负数的个数*/
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] < 0)
		{
			s++;
		}
	}
	/*计算均值*/
	for (int i = 0; i < 20; i++)
	{
		m += ptr[i];
	}
	m = m / 20;
	/*计算方差*/
	for (int i = 0; i < 20; i++)
	{
		l += (ptr[i] - m)*(ptr[i] - m);
	}
	l = sqrt(l / 20);
	cout << "数组中正数的个数为：" << n << "数组中负数的个数为：" << s << endl;
	cout << "数组中的平均值大小" << m << "数组中的方差大小" << l << endl;
	/*排顺序的大小*/
	for (int i = 0; i < 19; i++)
	{
		for (int j = 19; j >= i; j--)
		{
			if (ptr[j] < ptr[j - 1])
			{
				int t = ptr[j];
				ptr[j] = ptr[j - 1];
				ptr[j - 1] = t;
			}
		}
	}
	cout << "数组中的大小排序为" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << ptr[i] << endl;
	}

	system("pause");
	delete ptr;
}