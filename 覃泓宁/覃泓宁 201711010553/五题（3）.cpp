# include <iostream>
using namespace std;
double avery(int a[], int n);
double variance(int a[], int n);
void sort(int a[], int n);
int main()                                           //主函数输入带有正负号的数组a[]
{
	int *ptr, a[10];
	int p = 0, q = 0;
	double aver，var;
	ptr = new int[10];
	cout << "please enter 10 data";
	for (int i = 0; i < 10;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < 10 ; i++)                    //在主函数统计数组中正负号的个数
	{
		if (a[i] >= 0)
		{
			p++;
		}
		if(a[i]<0)
			q++;
	}
	cout << "非负数个数为" << p << endl<< "负数为个数" << q << endl;
	avery(a, 10);
	cout << "均值为" << avery(a, 10)<<endl;           //在主函数中调用计算均值的函数
	variance(a,10);
	cout << "方差为" << variance(a, 10) << endl;      //在主函数中调用计算方差的函数
	cout<< "从小到大排序为"  << endl;               //在主函数中调用排序的函数
	sort(a, 10);
	system("pause");                               //主函数用delete释放空间
	delete[]a;
}
double avery(int a[], int n)//                  子函数中计算均值
{
	double sum = 0.0,aver;
	for (int i = 0;i < n; i++)
	{
		sum += a[i];
	}
	aver = sum / n;
	return aver;
}
double variance(int a[], int n)             //子函数中计算方差
{
	double var= 0;
	for (int i = 0;i < n; i++)
	{
		var += (a[i] - avery(a, 10))*(a[i] - avery(a, 10));
		
	}
	return var;
}
void sort(int a[], int n)                   //子函数选择排序法排序
{
	int max,t;
	for (int i = 0;i < n; i++)
	{
		max = i;
		for (int j = i + 1;j < n; j++)
			if (a[j] < a[max])
				max = j;

		if (i!=max)
		{
			t = a[i];
			a[i] = a[max];
			a[max] = t;
		}
	}
	for (int i = 0; i < n;i++)
	{
		cout << a[i] << " ";
	}
}



