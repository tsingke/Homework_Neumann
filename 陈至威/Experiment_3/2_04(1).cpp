#include "stdio.h"
#include "iostream"
int n = 10;
void func1()
{
	int n = 20;
	printf("func1 n: %d\n",n);
}
void func2()
{
	printf("func2 n: %d\n",n);
}
void func3()
{
	printf("func3 n: %d\n", n);
}
int main()
{
	int n = 30;
	func1();
	func2();
	func3();
	{
		int n = 40;
		printf("block n: %d\n", n);
	}
	printf("main n£º %d\n", n);
	system("pause");
	return 0;
}