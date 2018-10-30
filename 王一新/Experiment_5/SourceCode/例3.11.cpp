#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
	int year,month,day;              //数据成员默认是私有属性
public:                              //下一行普通构造函数声明
	Date(int y=2007,int m=1,int d=1);
	Date(const Date &date);          //拷贝构造函数声明
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();                  //普通成员函数,输出数据成员的值 
};

Date::Date(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
	cout<<"Contstructor called.\n";
}
Date::Date( const Date &date)//拷贝构造函数的定义
{
	year=date.year;
	month=date.month;
	day=date.day;
	cout<<"Copy Constructor called.\n";

}
int Date::GetYear()//共有成员函数,提取year变量值
{
	return year;
}
int Date::GetMonth()//共有成员函数,提取month变量值
{
	return month;
}
int Date::GetDay()//共有成员函数,提取day变量值
{
	return day;
}
void Date::Display()//输出函数的定义
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;

}
Date f(Date Q)//普通函数,以类对象作为值形式参数
{
	Date R(Q);//以第1种调用构造函数情况,对应第6行输出
	return Q;//第3种调用拷贝构造函数情况,对应第7行输出
}//普通函数结束,对象Q,R生命周期结束
int main()
{
	Date day1(2011,5,26);//调用普通构造函数,对应第1行输出
	Date day3;//调用普通构造函数,对应第2行输出
	Date day2(day1);//第一种调用拷贝构造函数情况,对应第3行输出
	Date day4=day2;//对应第4行输出,此语句等效于Date day4(day2);
	day3=day2;//此语句为赋值语句,不调用任何构造函数
	day3=f(day2);//第2种调用拷贝构造函数情况,对应第5行输出
	day3.Display();
	system("pause");
	return 0;
}