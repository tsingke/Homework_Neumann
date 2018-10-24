#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int n;
	float average, M, s;//平均数及方差,M为计算方差的中间变量，s=m/20;
	int  sum = 0;//20个整数的总和
	int  positive = 0, negative = 0;//正数的个数，负数的个数
	int *ptr;
	ptr = new int[20];
	for (n = 0; n < 20; n++)
	{
		cin >> ptr[n];
	}
	//负数的个数
	for (int i = 0; i<20; i++)
	{
		if (ptr[i]< 0)
			negative = negative + 1;
	}
	//正数的个数
	positive = n - negative;
	//平均值
	for (int i = 0; i<20; i++)
	{
		sum = sum + ptr[i];
	}
	float total = int(sum);
	average = total / 20;
	//方差的计算
	for (int i = 0; i<19; i++)
	{
		M = (ptr[i] - average)*(ptr[i] - average);
	}
	s = M / 20;
	//数值从小到大排序
	int t;
	for (int i = 0; i<19; i++)
	{
		for (int j = 0; j<19 - i; j++)
		{
			if (ptr[j]>ptr[j + 1])
			{
				t = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = t;
			}

		}
	}

	cout << "负数的个数为" << negative <<endl<< "正数的个数为" << positive << endl;
	cout << "平均值为" << average << endl;
	cout << "方差的值为" << s << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << "    ";
	delete[]ptr;
	system("pause");
	return 0;
}