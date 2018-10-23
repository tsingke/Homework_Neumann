#include<iostream>
using namespace std;

int main()
{
	int n;
	int * ptr = new int[20];      //new运算符分配内存
	int i, j, swap, a = 0, b = 0;
	cout << "请输入一个不大于20的正整数" << endl;
	cin >> n;
	cout << "请输入" << n << "个整数" << endl;
	for (i = 0; i < n; i++)            //输入数并判断为正数还是负数
	{
		cin >> ptr[i];
		if (ptr[i] >0)
		{
			a++;
			continue;
		}
		if (ptr[i] < 0)
		{
			b++;
			continue;
		}
	}
	cout << "正数有" << a << "个," << "负数有" << b << "个" << endl;

	float c, s2, s = 0;
	float sum = 0;
	for (i = 0; i < n; i++)    //计算平均数
		sum = sum + ptr[i];
	c = sum / n;
	for (i = 0; i < n; i++)       //计算方差
		s = s + (ptr[i] - c)*(ptr[i] - c);
	s2 = s / n;
	cout << "平均数：" << c << "  方差：" << s2 << endl;


	for (i = 0; i < n; i++)      //排序
		for (j = i + 1; j < n; j++)
			if (ptr[i]>ptr[j])
			{
		swap = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = swap;
			}
	cout << "由小到大排序为：" << endl;
	for (i = 0; i < n; i++)
		cout << ptr[i] << " ";
	cout << endl;


	delete[]ptr;    //释放动态内存空间
	system("pause");
	return 0;
}