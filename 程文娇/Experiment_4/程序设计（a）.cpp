#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
void fun1(float *ptr) //计算正数、负数的个数
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0)
			a1++;
		else if (ptr[i] < 0)
			a2++;

	}
	cout << "正数 ：" << a1 << " 负数:" << a2 << endl;
}
void fun2(float *ptr) //计算均值和方差
{
	float sum = 0, a, b = 0;
	for (int i = 0; i < 20; i++)
		sum = sum + *ptr;
	a = sum / 20;
	for (int i = 0; i < 20; i++)
		b = b + pow(ptr[i] - a, 2);
	cout << "均值：" << a << " 方差：" << b << endl;
}
void fun3(float *ptr) //按从小到大排序
{
	int a;
	for (int i = 0; i < 20; i++)
		for (int j = i + 1; j < 20; j++)
		{
			if (ptr[i] > ptr[j])
			{
				a = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = a;
			}
		}
	cout << "从小到大排序：" << endl;
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << " ";
}int main()
{
	float *ptr;
	ptr = new float[20];
	cout << "请输入 20 个数：" << endl;
	for (int i = 0; i < 20; i++)
		cin >> *(ptr + i);
	fun1(ptr); //计算正数、负数的个数
	fun2(ptr); //计算均值和方差
	fun3(ptr); //按从小到大排序输出数组的排序
	delete[]ptr;
	system("pause");
	return 0;
}
