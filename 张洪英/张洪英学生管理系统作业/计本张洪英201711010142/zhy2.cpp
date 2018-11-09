#include<iostream>
#include<Windows.h>
using namespace std;
class b
{
	int x, y;
public:
	b()
	{
		x = y = 0;
		cout << "con1\t";

	}
	b(int i)
	{
		x = i; y = 0;
		cout << "con2\t";
	}
	b(int i, int j)
	{
		x = i;
		y = j;
		cout << "con3\t";

	}
	~b()
	{
		cout << "des\t";
	}
};
int main()
{
	b *ptr;
	ptr = new b[3];
	ptr[0] = b();
	ptr[1] = b(1);
	ptr[2] = b(2, 3);
	delete []ptr;
	system("pause");
	return 0;
}