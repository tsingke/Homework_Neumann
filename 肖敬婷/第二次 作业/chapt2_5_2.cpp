#include<iostream>
#include<windows.h>
using namespace std;
const double pi = 3.14;
int main()
{
cout << "请输入圆的半径" << endl;
double x, y, z;
cin >> x  ;
cout << "输出圆的面积和周长" << endl;
y = pi * x*x;
z = 2 * pi*x;
cout << y << " " << z << endl;
system("pause");

}