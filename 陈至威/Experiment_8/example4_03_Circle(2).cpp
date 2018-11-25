#include "example4_03_Circle(2).h"
double Circle::Area()
{
	PI = 3.14;
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}