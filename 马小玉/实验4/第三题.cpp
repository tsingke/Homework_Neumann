#include<iostream>
#include<windows.h>
using namespace std;
void swap(int *x,int *y)
{
		int t = *x;
		*x = *y;
		*y = t;

}
int main()
{
	int *p, i,a = 0, b = 0;
	double average, variation=0;//均值，方差
	double v=0.0;
		double sum=0.0;
	p = new int[20];
	for (i = 0; i<20; i++)
	{
		cin >> p[i];
		if (p[i]>0)
			a++;
		if (p[i] < 0)
			b++;
		sum = sum + p[i];
		average = sum / 20.0;
		v = v + (average - p[i])*(average - p[i]);
		variation = v / 20.0;
		//swap(&p[i], &p[i + 1]);
    }
	cout << "正数为" << a << endl;
	cout << "负数为" << b<<endl;
	cout << "sum=" << sum << endl;
	cout << "averge=" << average << endl;
	cout << "variation=" << variation << endl;
	for (i = 0; i < 20; i++)
	{
		if (p[i]>p[i + 1])
			swap(&p[i], &p[i + 1]);
			cout << p[i]  ;

	}
	//cout << p[i] << p[i + 1] << endl;

	delete[]p;
	system("pause");
	return 0;

}
