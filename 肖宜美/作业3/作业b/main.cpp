#include <iostream>
#include <string>
using namespace std;
char a;
int testa(int x)
{
	if (x<15 || x>25)
		throw 1;
	return 0;
}
int tests(int y)
{
	if (y<0 || y>5)
		throw a;
	return 0;
}
int checkagescore(int x, int y)
{
	testa(x), tests(y);
	return 0;
}
int main()
{
	string name; int age, score;
	cout << "please input the student's name,age and score\n";
	cin >> name >> age >> score;
	try {
		checkagescore(age, score);
		cout << "name:" << name << " age:" << age << " score:" << score * 20;
	}
	catch (int)
	{
		cout << "the age is wrong";
	}
	catch (char)
	{
		cout << "the score is wrong";
	}
	system("pause");
}
