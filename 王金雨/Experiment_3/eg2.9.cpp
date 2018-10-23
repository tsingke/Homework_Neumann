#include <iostream>

using namespace std;
int sqare(int x)
{
    return x*x;
}
float sqare(float x)
{
    return x*x;
}
double sqare(double x=1.5)
{
    return x*x;
}
int main()
{
    cout<<"sqare()="<<sqare()<<endl;
    cout<<"sqare(10)="<<sqare(10)<<endl;
    cout<<"sqare(2.5f)="<<sqare(2.5f)<<endl;
    cout<<"sqare(1.1)="<<sqare(1.1)<<endl;
    return 0;
}
