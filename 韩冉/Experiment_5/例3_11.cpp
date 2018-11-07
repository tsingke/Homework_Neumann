#include<iostream>
using namespace std;
class Date
{
	int year, month, day;
public:
	Date(int y = 2017, int m = 1, int d = 1);
	Date(const Date &date);
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();
};
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << "Constructor called.\n";

}
Date::Date(const Date&date)
{
	year = date.year;
	month = date.month;
	day = date.day;
	cout << "Copy Constructor called.\n";
}
int Date::GetYear()
{
	return year;

}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
void Date::Display()
{
	cout << year << "-" << month << "-" << day << endl;
}
Date f(Date Q)
{
	Date R(Q);
	return Q;

}
int main()
{
	Date day1(2011, 5, 26);
	Date day3;
	Date day2(day1);
	Date day4 = day2;
	day3 = day2;
	day3 = f(day2);
	day3.Display();
	system("pause");
		return 0;
}














































