//定义Date类，其中定义了拷贝构造函数
#include <iostream>
using namespace std;
class Date
{
	int year, month, day;//数据成员默认为是私有函数
public:
	Date(int y = 2007, int m = 1, int d = 1);
	Date(const Date &data);//构造函数声明
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();//普通成员函数，输出数据成员的值
};
Date::Date(int y, int m, int d)//普通构造函数的定义
{
	year = y;
	month = m;
	day = d;
	cout << "constructor called.\n";
}
Date::Date(const Date &data)//拷贝构造函数的定义
{
	year = data.year;
	month = data.month;
	day = data.day;
	cout << "copy constructor called.\n";
}
int Date::GetYear()//公有成员函数，提取year变量值
{
	return year;
}
int Date::GetMonth()//公有成员函数，提取month变量值
{
	return month;
}
int Date::GetDay()//公有成员函数，提取day变量值
{
	return day;
}
void Date::Display()//输出函数的定义
{
	cout << year << "-" << month << "-" << day << endl;
}
