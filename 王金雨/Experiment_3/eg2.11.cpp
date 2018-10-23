#include <iostream>

using namespace std;
void swap(int &x,int &y)//调用之初参数传递就是的引用参数称为实际变量参数的别名
{
    int t=x;
    x=y;
    y=t;
}
int main()
{
    int a=3,b=5,c=10,d=20;
    cout<<"a="<<a<<"b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
    cout<<"c="<<c<<"d="<<d<<endl;
    swap(c,d);
    cout<<"c="<<c<<"d="<<d<<endl;
    return 0;

}
