#include<iostream>  //包含系统文件
using namespace std;
#include "4_03.h"  //包含自定义头文件
int main()
{
	Circle c1(3.5),c2;  //定义类的两个对象，c2的半径用默认值
	cout<<"area of c1="<<c1.Area()<<",circumference of c1="<<c1.Circumference()<<endl;
	cout<<"area of c2="<<c2.Area()<<",circumference of c2="<<c2.Circumference()<<endl;
	return 0;
}