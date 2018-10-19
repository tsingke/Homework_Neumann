/*---------------------------------------------------------*
//example2_15.cpp：C++的异常处理过程和方法示例
*---------------------------------------------------------*/
/*try 为检查异常 throw 为抛出异常 catch 为捕捉异常*/
#include <iostream>
using namespace std;

int divide(int x, int y)
{
	if (y == 0) throw y;                 //如果分母为零，抛出异常（分母为0没有意义）
	return x / y;
}


int main()
{
	int a = 10, b = 5, c = 0;

	try                                 //检查是否出现异常
	{
		cout << "a/b=" << divide(a, b) << endl;
		cout << "b/a=" << divide(b, a) << endl;
		cout << "a/c=" << divide(a, c) << endl;//在这里出现异常，所以程序跳到catch
		cout << "c/b=" << divide(c, b) << endl;
	}
	catch (int)                        //捕获异常并作出处理，即输出一条提示信息
	{
		cout << "except of divide zero" << endl;
	}

	cout << "calculate finished" << endl;  	//catch块的后续语句
	system("pause");
	return 0;
}
/*
 throw<表达式>;或throw;  throw y;为第二种
 一定是try 在前，catch在后面，看课本
 try{

 <被进行异常检查的语句>

    } 
	catch(<异常信息类型>或<变量>)
	{
	<异常处理语句>
	}

 */