#include "example4_04_Circle(1).h"
double Circle::Area()
{
	Radius *= 2;
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	Radius *= 2;
	return Radius;
}