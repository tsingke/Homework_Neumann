#include "4_04.h"  //����ͷ�ļ�
double Circle::Area()  //��Բ�����
{
	return PI*Radius*Radius;
}
double Circle::Circumference()  //��Բ���ܳ�
{
	return 2*PI*Radius;
}
double Circle::GetRadius()const  //����Ա��������ȡ�뾶ֵ��ʵ�ִ��룬����������
{
	return Radius;
}