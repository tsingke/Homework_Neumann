#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
class Dice
{
public:
	int run()
	{
		return(rand() % 6 + 1);
	}
};
class Gambler
{
public:
	void play()
	{
		int num1, num2, num3;
		num1 = a.run();
		num2 = b.run();
		num3 = c.run();
		if (num1 == num2 && num1 == num3)
			cout << num1 << "  " << num2 << "  " << num3 << "±ª×Ó" << endl;
		else if (num1 + num2 + num3 > 10)
			cout << num1 << "  " << num2 << "  " << num3 << "´ó" << endl;
		else
			cout << num1 << "  " << num2 << "  " << num3 << "Ğ¡" << endl;
	}
private:
	Dice a, b, c;
};
int main()
{
	Gambler Jack;
	srand(time(NULL));
	Jack.play();
	system("pause");
	return 0;
}