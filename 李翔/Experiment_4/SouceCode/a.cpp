#include<iostream>
#include"a.head.h"
using namespace std;

int main()
{
    int *e, *p;
    p = new int [20];
    e = p;

    cout<<"Please input 20 integer"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>p[i];
    }

    zhengfu(e);
    fp(e);
    rank(e);

    delete []p;
    return 0;
}