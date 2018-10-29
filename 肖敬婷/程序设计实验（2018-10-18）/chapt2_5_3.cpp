#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p, a = 0, b = 0;
	//用new运算符为一个包含20个整数的数组分配动态内存空间
	p = new int[20];
	cout << "请输入20个整数" << endl;
	//统计其中正数、负数的个数
	for (int i = 0; i < 20; i++)
	{

		cin >> p[i];

		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;

	}

	cout << "正数为" << a << endl;
	cout << "负数为" << b << endl;
	//数组的元素的均值和方差
	int ave, var, sum2, sum = 0, sum3 = 0, temp;
	for (int i = 0; i < 20; i++)
	{
		sum = sum + p[i];
	}
	ave = sum / 20;
	cout << "均值为" << ave << endl;
	for (int i = 0; i < 20; i++)
	{

		sum2 = (ave - p[i])*(ave - p[i]);
		sum3 = sum3 + sum2;
		var = sum3 / 2;
	}
	cout << "方差为" << var << endl;
	//从小到大顺序输出数组排序结果
	
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
	cout << "输出排序结果" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << p[i] << " ";
	}

	//用delete运算符释放动态内存空间
	delete[]p;
	system("pause");
	return 0;
}














