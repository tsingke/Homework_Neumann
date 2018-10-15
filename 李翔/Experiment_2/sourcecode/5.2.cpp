#include<iostream>
using namespace std;
int main()
{
	double PI=3.14,r,l,s;
	cout<<"请输入圆的半径："<<endl;
	cin>>r;
	l=2*PI*r;
	s=PI*r*r;
	cout<<"周长为:"<<l<<endl<<"面积为:"<<s<<endl;
	return 0;
}