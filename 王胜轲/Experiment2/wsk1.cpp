//1
/*#include<iostream.h>

int main()
{
	int a, b, c;
	char ch;
	cin >>a>>ch>>b>>c;
	cout << a << endl << ch << endl <<b<< endl << c;
	return 0;
}*/
//2
#include<iostream.h>
int main()
{ 
	int arr[4] = { 1,2,3,4 };
	int *a = arr;
	int *&p = a;//p是一个指针应用
	p++;
	*p = 100;
	cout << *a << " " << *p << endl;
	for (int i=0;i<4;i++)
	{
		cout << arr[i] << " ";
		cout << endl;
		int b = 10;
		p = &b;
		cout << *a << " " << *p << endl;
		for (i=0;i<4;i++)
		{
			cout << arr[i] << " ";
			cout << endl;
			return 0;
		}
    }


}
//3
#include<iostream.h>
int i = 0;
int main()
{
	int i = 5;
	{
		int i;
		i = 7;
		cout << "::i=" << ::i << endl;
	    cout << "i=" << i << endl;
	    ::i = 1;
	    cout << "::i=" << ::i << endl;
    }
	cout << "i=" << i << endl;
	cout << "::i=" << i << endl;
	i += ::i;
	::i = 100;
	cout << "i="<<i<<endl;
	cout << "::i=" << ::i << endl;
	return 0;
}
//4
#include<iostream.h>
void f(double x=50.6, int y=10,char z='A');
int main()
{
	double a=216.34;
    int b=2;
	char c='E';
	f();
	f(a);
	f(a,b);
	f(a,b,c);
	return 0;
}
void f(double x,int y,char a)
{
	cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
}
//5
#include<iostream.h>
int &s(const int &a,int &b)
{
	b+=a;
	return b;
}
int main()
{
	int x=500,y=1000,z=0;
	cout<<x<<'\t'<<y<<'\t'<<z<<'\n';
	s(x,y);
	cout<<x<<'\t'<<y<<'\t'<<z<<'\n';
	z=s(x,y);
	cout<<x<<'\t'<<y<<'\t'<<z<<'\n';
	s(x,y)=200;
	cout<<x<<'\t'<<y<<'\t'<<z<<'\n';
	return 0;
}
//6
#include<iostream.h>
void fun(int x,int &y)
{
	x+=y;
	y+=x;
}
int main()
{
	int x=5,y=10;
	fun(x,y);
	fun(y,x);
	cout<<"x="<<x<<",y="<<y<<endl;
	return 0;
}
//1
#include<iostream.h>
int add(int a, int b);
int main()
{ 
	int x,y,sum;
    cout<<"Please input x and y:"<<endl;
	cin>>x>>y;
	sum=add(x,y);
	cout<<x<<"+"<<y<<"="<<sum<<endl;
	return 0;
}
int add(int a,int b)
{
	return a+b;
}

//2
#include<iostream.h>
#define pi 3.1415926 
int main()
{
	double r,s,c;
	cout<<"请输入圆的半径:"<<endl;
	cin>>r;
	s=pi*r*r;
	c=2*pi*r;
	cout<<"圆的周长是："<<c<<"圆的面积是："<<s<<endl;

}
