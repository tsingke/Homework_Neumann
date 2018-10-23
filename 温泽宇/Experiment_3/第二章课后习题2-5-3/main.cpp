#include<iostream>
using namespace std;
const int n = 20;
int sortnumber(int *ptr,int &n)//统计正数和负数的个数，并算出其中的均值和方差
{
	int i = 0, x = 0, t = 0, m = 0;//x为每一个数加起来的总和,m为统计正数的个数，n统计负数的个数
	cout << "输入数据： ";
		for (i = 0; i < n; i++)
		{
			cin >> ptr[i];
			x += ptr[i];
			if (ptr[i] >= 0)
			{
				m++;//统计正数的个数
			}
			else
			{
				t++;//统计负数的个数
			}

		}
	double z = 0, y = 0;//z为均值，y为方差
	z = x / n;
	for (i = 0; i <n; i++)//计算方差
	{
		y +=(ptr[i] - z)*(ptr[i] - z);//不知道为什么  y+=(1/n)*(ptr[i] - z)*(ptr[i] - z)出现错误，将1/n放入输出时（y/n）输出成功
	
	}
	cout << "正数的个数： " << m << endl << "负数的个数： " << t << endl << "均值： " << z << endl << "方差： " << y/n << endl;
	int j = 0;
	//数字的排序(冒泡排序)
	for (i = 0; i <n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (ptr[j]>=ptr[j + 1])
			{
				int p;
				p = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = p;
			}
		}
	}
	cout << "数据从小到大的顺序排列:";
	for (i = 0; i <n; i++)
	{
		cout << ptr[i];
		if (i < n - 1)
		{
			cout <<",";
		}
	}
	cout << endl;
	return 0;
}
int main()
{
	int sortnumber(int *ptr,int &n);//声明sortnumber函数
	int *ptr;
	ptr = new int[20];
	int n;//输入数字的个数
	cout << "输入数字的个数： "  << endl;
	cin >> n;
	if (n > 20)
	{
		cout << "error" << endl;
		exit(1);
	}
	else
	{
		sortnumber(ptr,n);
	}
	delete []ptr;
	system("pause");
	return 0;

}