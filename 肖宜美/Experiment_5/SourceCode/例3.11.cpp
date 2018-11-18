#include<iostream>
#include<stdlib.h>
using namespace std;
class Date
{
	int year,month,day;              //���ݳ�ԱĬ����˽������
public:                              //��һ����ͨ���캯������
	Date(int y=2007,int m=1,int d=1);
	Date(const Date &date);          //�������캯������
	int GetYear();
	int GetMonth();
	int GetDay();
	void Display();                  //��ͨ��Ա����,������ݳ�Ա��ֵ 
};

Date::Date(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
	cout<<"Contstructor called.\n";
}
Date::Date( const Date &date)//�������캯���Ķ���
{
	year=date.year;
	month=date.month;
	day=date.day;
	cout<<"Copy Constructor called.\n";

}
int Date::GetYear()//���г�Ա����,��ȡyear����ֵ
{
	return year;
}
int Date::GetMonth()//���г�Ա����,��ȡmonth����ֵ
{
	return month;
}
int Date::GetDay()//���г�Ա����,��ȡday����ֵ
{
	return day;
}
void Date::Display()//��������Ķ���
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;

}
Date f(Date Q)//��ͨ����,���������Ϊֵ��ʽ����
{
	Date R(Q);//�Ե�1�ֵ��ù��캯�����,��Ӧ��6�����
	return Q;//��3�ֵ��ÿ������캯�����,��Ӧ��7�����
}//��ͨ��������,����Q,R�������ڽ���
int main()
{
	Date day1(2011,5,26);//������ͨ���캯��,��Ӧ��1�����
	Date day3;//������ͨ���캯��,��Ӧ��2�����
	Date day2(day1);//��һ�ֵ��ÿ������캯�����,��Ӧ��3�����
	Date day4=day2;//��Ӧ��4�����,������Ч��Date day4(day2);
	day3=day2;//�����Ϊ��ֵ���,�������κι��캯��
	day3=f(day2);//��2�ֵ��ÿ������캯�����,��Ӧ��5�����
	day3.Display();
	system("pause");
	return 0;
}