#include "4_04.h"  //包含头文件
double Circle::Area()  //求圆的面积
{
	return PI*Radius*Radius;
}
double Circle::Circumference()  //求圆的周长
{
	return 2*PI*Radius;
}
double Circle::GetRadius()const  //常成员函数，获取半径值的实现代码，此例新增加
{
	return Radius;
}