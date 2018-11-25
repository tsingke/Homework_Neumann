#include "example4_04_Circle(3).h"
double Circle::Area()
{
	double a = GetRadius();
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	return Radius;
}
