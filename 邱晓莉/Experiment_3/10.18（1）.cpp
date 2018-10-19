#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];//利用new申请连续20个int大小的内存空间实现动态一维数组
	int i,a = 0, b = 0;//定义i来计数，a来计算负数的个数，b为正数的个数
	cout <<"please enter 20 numbers,except 0 "<< endl;//用户输入20个除0以外的整数
	for (i = 0; i < 20; i++)
	{
		cin >> ptr[i];
		
		if (ptr[i] < 0)//如果输入的数小于0，a+1
			a++;
		if (ptr[i] > 0)
			b++;//如果输入的数大于0，b+1
     }
	cout << "正数个数为：" << a << endl;
	cout << "负数个数为：" << b << endl;
	int m, s, sum = 0,sum2=0;//定义平均数为m,方差为s，sum为这20个数的和
	for (i = 0; i <20; i++)
		sum = sum + ptr[i];

		m = sum / 20;
		cout << "这20个数的平均值为：" << m << endl;
	for (i = 0; i <20; i++)
		sum2 =sum2+ (ptr[i] - m)*(ptr[i] - m);
	s = sum2 / 20;
	cout << "这20个数的方差为：" << s << endl;




		delete[]ptr;
	system("pause");
	return 0;
}