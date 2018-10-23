#include <iostream>
#include<math.h>
using namespace std;
void main()
{
	int * p = new int[20];
	cout << "输入20个整数"<< endl;
	//统计正、负数的个数
	int Pos_num = 0, Neg_num = 0,i,sub=0;
	double averge;
	for (int i = 0; i < 20; i++)
	{
		cin >> p[i];
	}

	for (i = 0; i < 20; i++)
     { 
		

		if (p[i] > 0) Pos_num++;
		else if (p[i] < 0) Neg_num++;
		sub += p[i];
		
	}averge=sub / 20.0;  //计算平均值
	//计算方差
	double variation;
	for (i = 0; i < 20; i++)
	{
		double fc =0.0;
		fc += (averge - p[i])*(averge - p[i]);
		variation= fc/20.0;
		

	}
	//将20个数按从小到大排序
	for (int j = 0; j < 20; j++)
	{
		for (i = 0; i < 19 - j; i++)
		{
			int temp;
			if (p[i] > p[i + 1])
			{
				temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
			}
		}
	}cout << "按从小到大排序为" << endl;
	for (i = 0; i < 20; i++)
	{
		cout<< p[i] << " ";
	}
	cout << endl;
	cout << "正数个数: " << Pos_num << endl;
	cout << "负数个数 : " << Neg_num << endl;
	cout << "均值:" << averge << endl;
	cout<< "方差:" << variation << endl;
	delete[]p;
	system("pause");
}

