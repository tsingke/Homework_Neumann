#include <iostream>
using namespace std;
int main()
{
	int *s,i;
	s = new int[20];
	cout << "请输入20个整数" << endl;
	for (i = 0; i < 20; i++)
	{
		cin >> s[i];
	}
	int a=0, b=0, c=0;
	for (i = 0; i < 20; i++)
	{
		if (s[i] > 0)
		a++;
		if (s[i] < 0)
		b++;
		if (s[i] == 0)
		c++;
	}
	cout << "20个整数中正数有" << a << "个。" << "负数有" << b << "个。" << "0有" << c << "个。" << endl;
	int sum = 0;
	for (i = 0; i < 20; i++)
	{
		sum += s[i];

	}
	int average = sum / 20;
	cout << "20个整数的均值为：" << average << endl;
	int e = 0;

	for (i = 0; i < 20; i++)
	{
		e += (s[i] - average)*(s[i] - average);
	}
	int S = e / 20;
	cout << "20个整数的方差为：" << S << endl;
	int t;

	for(int k=0;k<20;k++)
	{
	for (int j = 0; j < 20; j++)
	{
		for (i = 0; i < 20; i++)
		{
			if (s[i] > s[i + 1])
			t = s[i];
			s[i] = s[i + 1];
			s[i + 1] = t;
		}
	}
	}
	for (i = 0; i < 20; i++)
	{
		cout << s[i]<<endl;
	}
}
