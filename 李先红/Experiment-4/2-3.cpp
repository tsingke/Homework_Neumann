#include<iostream>
using namespace std;
int main()
{
	int *a;
	a = new int[20];
	const  int n = 20;
	int i, j, t;
	int m = 0, k = 0, s = 0;
	int sum1 = 0, sum2 = 0;
	double avg, fangcha;
	cout << "请输入数字：" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	//从小到大排序
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] >= a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;

			}
		}

	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	//正数负数的个数
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)m++;
		if (a[i] == 0)k++;
		else s++;

	}
	cout << "负数的个数" << m << "   正数的个数" << s << endl;
	//求平均数
	for (i = 0; i < n; i++)
	{
		sum1 = sum1 + a[i];
	}
	avg = sum1 / n;
	cout << "平均数为：" << avg << endl;
	//求方差
	for (i = 0; i < n; i++)
	{
		sum2 = sum2 + (a[i] - avg)*(a[i] - avg);

	}
	fangcha = sum2 / n;
	cout << "方差为： " << fangcha << endl;
	delete[]a;
	system("pause");
	return 0;
}