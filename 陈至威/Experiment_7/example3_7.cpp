//li3_7.cpp：修改后的程序
#include<iostream>
using namespace std;
class Date
{
public:
	int year, month;
protected:
	int day;
	// DateB无法调用成员函数GetDay( )
public:
	int GetDay()                    	//错误1：此函数的属性应定义为public，因为
	{
		return day;                 	//protected属性使得 main( )函数中的对象DateA，
	}
	void Init(int y, int m, int d)         	//给数据成员初始化
	{
		year = y;
		month = m;
		day = d;
	}
	int GetYear()                  	//错误2：GetYear( )函数需要返回year的值，所以其
	{
		return year;                 	//函数返回类型应定义为int型
	}
	void SetYear(int y)                	//错误3：SetYear()函数目的在于给类中变量year赋值，
	{
		year = y;                    	//无需返回任何值，因此返回值类型应改为void类型
	}
}DateA, DateB;                          //定义类的同时定义了两个类对象DateA、DateB
int main()
{
	DateA.Init(2011, 7, 23);           	 //通过公有函数的调用完成对象的初始化
	DateB.SetYear(2012);
	cout << "DateA.year=" << DateA.GetYear() << endl;   	//28行
	cout << "DateA.day=" << DateA.GetDay() << endl;  	//错误4：day为对象DateA的保护数据成员不能在
											// main()函数中直接访问，应改为DateB.GetDay( )
	cout << "DateA.year=" << DateA.year << endl;   //year为公有数据成员，所以可以直接访问
	cout << "DateB.year=" << DateB.year << endl;
	cout << "DateB.year=" << DateB.GetYear() << endl;   	//33行
	system("pause");
	return 0;
}
