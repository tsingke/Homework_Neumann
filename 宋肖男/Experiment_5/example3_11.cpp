#include "Date3.h"
//#include"windows.h"
Date f(Date Q)//普通函数，以类对象作为值形式参数
{
	Date R(Q);//第一种调用拷贝构造函数情况，对应第六行输出
	return Q;//第三种调用构造拷贝函数情况，对应第七行输出
}             //普通函数结束，对象Q、R声明周期结束
int main()     //对应第一、二次析构函数的调用
{
	Date day1(2011,5,26);  //调用普通构造函数，对应第一行输出
    Date day3;              //调用普通构造函数，对应第二行输出
    Date day2(day1);       //第一种调用拷贝构造函数情况，对应第三行输出
    Date day4 = day2;      //对应第四行输出，此语句等效于Date day4(day2)
    day3= day2;            //此语句为赋值语句，不调用任何构造函数
    day3= f(day2);          //第二种调用拷贝构造函数，对应第五行输出
    day3.Display();
	system("pause");
    return 0;
}