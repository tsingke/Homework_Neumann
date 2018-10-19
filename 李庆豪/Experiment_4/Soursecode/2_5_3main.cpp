#include<iostream>
#include<math.h>
#include "2_5_3head.h"
using namespace std;
void main()
{
	int *e, *ee;
	e = new int[20];//申请内存
	ee = e;//首地址保护
	for (int i = 0; i < n; i++)
	{
		cout << "please input 20 integer:" << endl;
		cin >> *e;
		e++;
		cout << (int)e << endl;//显示地址
	}
	calculate(ee);//求方差及平均值
	sortScore(ee);//排名
	PandDnumber(ee);//计算正负值个数
	delete[]ee;//释放内存
	system("pause");
}
