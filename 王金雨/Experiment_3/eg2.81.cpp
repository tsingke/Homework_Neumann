//用宏定义和内联函数实现两数相乘
//用宏定义来代替简单函数
#include <iostream>

using namespace std;
#define multiple(x,y)  x*y
int main()
{
   int a=multiple(3+4,2+3);
   cout<<"a="<<a<<endl;
   return 0;
}
