#include<iostream>
using namespace std;
#define PI 3.1415926
int main()
{
    float radius,area,perimeter;
    cout<<"please input the radius of a circle:";
    cin>>radius;
    cout<<"The circle's area is:"<<PI*radius*radius<<endl;
    cout<<"The circle's perimeter is:"<<2*PI*radius<<endl;
    return 0;
}
