#include<cmath>
#include<iostream>
using namespace std;

double pi = acos(-1.0);

double peri(int x)
{
    return 2 * pi * x;
}

double spa(int x)
{
    return pi * x * x;
}

int main()
{
    double r, p, s;
    cout<<"Please input the radius of the circle :"<<endl;
    cin>>r;
    p = peri(r);
    s = spa(r);
    cout<<"perimeter = "<<p<<", space = "<<s<<endl;
    return 0;
}
