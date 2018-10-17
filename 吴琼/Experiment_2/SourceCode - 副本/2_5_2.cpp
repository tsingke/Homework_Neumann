#include <iostream.h>
#define PI 3.141593
class Circle
{
public:
	Circle() :m_radius(1)
	{
	}
	~Circle()
	{
	}
	void SetRadius(double radius)
	{
		if (radius < 1e-6) radius = 1e-6;
		m_radius = radius;
	}
	double GetRadius()
	{
		return m_radius;
	}
	double Perimeter()
	{
		return 2 * PI*m_radius;
	}
	double Area()
	{
		return PI*m_radius*m_radius;
	}
private:
	double m_radius;
};
int main()
{
	Circle c;
	double r;
	cout << "Please input R:" << endl;
	cin >> r;
	c.SetRadius(r);
	cout << "It's perimeter is " << c.Perimeter() << endl;
	cout << "It's perimeter is " << c.Area() << endl;
	return 0;
}