#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

int main()
{
	
	int *ptr;
	int a = 0;
	int b = 0;                           
		ptr = new int[20];
		cout << "输入数值 "<< endl;
		for (int i=0;i<20;i++)
		{
			cin >> ptr[i];
			
			if (ptr[i] < 0)
				a++;
			else b++;
		}

		cout << "正数" << b << "负数" << a << endl;
		double sum = 0.0;
		double c;
		for ( int i= 0; i< 20; i++)
		{
			sum = sum + ptr[i];
			
		}
		c = sum / 20.0;
		cout << "平均值" << c << endl;

		double s=0.0;
		double d;
		for (int i = 0; i < 20; i++)
		{
			s = s + (c - ptr[i])*(c - ptr[i]);
			
		}
		d = sqrt(s/20.0) ;

		cout << "方差" << d << endl;
		for (int i = 0; i < 20; i++)
		{
			if (ptr[i] > ptr[i + 1])
				swap(&ptr[i], &ptr[i + 1]);
			cout << ptr[i] << " " << ptr[i + 1];
		}

		delete[] ptr;


		system("pause");
		return 0; 

}