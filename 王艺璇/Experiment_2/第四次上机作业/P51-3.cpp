#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int *p;
	int i, x = 0, y = 0;
	p = new int[20];
	cout << "请输入二十个数" << endl;
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
	}
	for (i = 0; i < 20; i++)
	{
		if (p[i]>0)
			x++;
		else if (p[i] < 0)
			y++;
		else if (p[i] == 0)
		{
			x = x;
			y = y;
		}
	}
	cout << "正数的个数为：" << x << endl;
	cout << "负数的个数为：" << y << endl;

	//计算均值
	float sum1 = 0;
	float average = 0.0;
	for (i = 0; i < 20; i++)
	{
		sum1 = sum1 + p[i];
	}
	average = sum1 / 20.0;
	cout << "这二十个数的均值：" << average << endl;

	//计算方差
	float variation = 0;
	float sum2 = 0;
	for (i = 0; i < 20; i++)
	{
		sum2 = sum2 + (p[i] - average)*(p[i] - average);
	}
	variation = sum2 / 20.0;
	cout << "这二十个数的方差为：" << variation << endl;

	//排序算法
	int temp = 0;
	for (i = 0; i < 20; i++)
	{
		int i, j, t;
		for (i = 0; i < 19;i++)
		for (j = 0; j < 19 - i;j++)
		if (p[j]>p[j + 1])
		{
			t = p[j];
			p[j] = p[j + 1];
			p[j + 1] = t;
		}
	}
	cout << "这二十个数由小到大排列顺序为：" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete[]p;
	system("pause");
	return 0;
	getchar();
}