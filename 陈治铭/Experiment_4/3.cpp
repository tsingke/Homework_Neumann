#include <iostream>
using namespace std;
int main()
{
	int *p, i,sum=0,ave, a = 0,b = 0;
	p = new int[20];
	//输入数字并计算数组中正数，负数的个数。
	for (i=0;i<20;i++)
	{
		cin >> p[i];
		if (p[i]<0)
			a++;
		if (p[i] > 0)
			b++;
	}
	//输出数组中正负数的个数
	cout << "正数有:" << b << endl;
	cout << "负数有:" << a << endl;


	//求数组的均值
	for (i = 0; i < 20; i++)
		sum += p[i];
	ave = sum / 20;
	cout << "数组的均值为:" << ave << endl;

	//求数组的方差
	double s = 0.00;
	for (i = 0; i < 20; i++)
	{
		s += (p[i] - ave)*(p[i] - ave) / 20;
	}
	cout << "数组的方差为：" << s << endl;

	//按照从小到大顺序输出数组排序
	for (int j = 0; j < 20; j++)
	{
		for (i = 0; i < 19 - j;i++)
		{ 
			int temp;
			if (p[i]>p[i+1])
			{
				temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
			}
		}
	}
	for (i=0;i<20;i++)
	{
		cout << p[i] << " ";
	}



	delete[]p;


	system("pause");
	return 0;
}