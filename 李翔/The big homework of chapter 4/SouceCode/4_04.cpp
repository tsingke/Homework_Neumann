#include<iostream>  //����ϵͳ�ļ�
using namespace std;
#include "4_04.h"  //�����Զ���ͷ�ļ�
int main()
{
	Circle c1(3.5),c2;  //���������������c2�İ뾶��Ĭ��ֵ
	cout<<"radius of c1="<<c1.GetRadius();  //���ó���Ա��������뾶
	cout<<"area of c1="<<c1.Area()<<",circumference of c1="<<c1.Circumference()<<endl;
	cout<<"radius of c2="<<c2.GetRadius();  //���ó���Ա��������뾶
	cout<<"area of c2="<<c2.Area()<<",circumference of c2="<<c2.Circumference()<<endl;
	return 0;
}