#include<iostream>
using namespace std;
int main()
{
	double ra, ac, pe;
	cout << "请输入圆的半径：" << endl;
	cin >> ra;
	ac = 3.14*ra*ra;
	pe = 2 * 3.14*ra;
	cout << "圆的面积为：" << ac << endl;
	cout << "圆的周长为：" << pe << endl;
	system("pause");
	return 0;
}