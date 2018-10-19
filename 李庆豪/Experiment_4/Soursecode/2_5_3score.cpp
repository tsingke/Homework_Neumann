#include<iostream>
#include<math.h>
#include "2_5_3head.h"
using namespace std;

//排名(冒泡算法）
void sortScore(int *p)
{
	int i, j;
	int swap;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - i-1); j++)
		{
			if (p[j] >= p[j+1])
			{
				swap = p[j];
				p[j] = p[j + 1];
				p[j + 1] = swap;
			}
		}
	}
	cout << "————————————第三步：数据由小到大排列——————————" << endl;
	for (i = 0; i < n; i++){
		cout << p[i] << "\t";
	}
	cout << endl;
}
//计算正负数个数
void PandDnumber(int *p)
{
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i]>0)a++;
		if (p[i] == 0)b++;
		if (p[i]<0) c++;
	}
	cout << "————————————第四步：输出正负数个数——————————" << endl;
	cout << "正数个数：" << a << " 0的个数：" << b << " 负数的个数：" << c << endl;
}

//求方差及平均值
void calculate(int *p)
{
	int i = 0;
	cout << endl << "————————————第一步：计算均值——————————" << endl;
	float SUM = 0;
	for (; i < n; i++)
	{
		SUM = SUM + p[i];
	}
	SUM = (float)(SUM / i);
	cout << "平均总成绩为：";
	cout << SUM << endl;
	cout << endl << "————————————第二步：计算方差——————————" << endl;
	float b = 0, c;
	
	for (i = 0;i < n; i++)
	{
		b = (float)(b + (p[i] - SUM)*(p[i] - SUM));
	}
	c = (float)(b / i);
	cout << "方差为：" << c << endl;
}