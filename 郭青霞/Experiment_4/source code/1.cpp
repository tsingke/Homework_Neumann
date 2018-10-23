#include<iostream>
#include<windows.h>
#include<windows.h>
using namespace std;
int main()
{
	int *p, i, a = 0, b = 0;
	p = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		else
			b++;
	}
	cout << "正数为" << a << endl;
	cout << "负数为" << b << endl;

	double sum = 0, aver = 0;
	for (i = 0; i < 20; i++)
	{
		sum += p[i];
	}
	aver = sum / i;
	cout << "均值为" << aver << endl;

	double s1 = 0, s = 0;
	for (i = 0; i < 20; i++)
	{
		s1 += (p[i] - aver)*(p[i] - aver);
	}
	s = s1 / i;
	cout << "方差为" << s << endl;

	int temp,j;
	for (i = 0; i < 20; i++)
	{
		for (j = i + 1; j < 20; j++)
		{
			if (p[i] > p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
		cout << p[i] << endl;
	}
	delete[]p;
	system("pause");
	return 0;

}