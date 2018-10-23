#include<iostream>

using namespace std;

int main()
{
	int *ptr;
	ptr = new int;
	ptr = new int[20];
	int i,a = 0, b = 0;
	for (i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		if (ptr[i]>0)  a++;
		if (ptr[i] < 0)  b++;
	}
	cout << "正数的个数为： " << a << endl;
	cout << "负数的个数为： " << b << endl;
	float sum = 0;
	float avr = 0;
	for (i = 0; i < 20; i++)
	{
		sum += ptr[i];
	}
	avr = sum / 20;
	cout << "数组元素的均值为： " << avr<<endl;
	float su = 0, fan = 0;
	for (i = 0; i < 20; i++)
	{
		su += (ptr[i] - avr)*(ptr[i] - avr);
	}
	fan = su / 20;
	cout << "数组元素的方差为： " << fan << endl;
	int temp;
	for (i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19 - i; j++)
		{
			if (ptr[j]>ptr[j + 1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
	cout << "数组从小到大的顺序为：" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << ptr[i] << endl;
	}
	delete []ptr;
	system("pause");
	return 0;
}