#include <iostream>

using namespace std;
int fun(const int &x,int &y,int z)
{

    z++;
    y=x+y+z;
    return y;
}
int main()
{
   int a=1,b=2,c=3,d=0;
   cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d;
   d=fun(a,b,c);
   cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d;
   return 0;
}
