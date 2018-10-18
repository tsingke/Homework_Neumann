#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age<16||age>25) throw age;
	return age;
	if (score<0 || score>5) throw score;
	return score;
}
int main()
{
	string name = "ะกร๗";
	int age;
	float score;
	cin >> age;
	cin >> score;
	try
	{
		cout << age<< endl;
		cout << score << endl;
	}
	catch (int)
	{
		cout << "except of appropriating age" << endl;
	}
	catch (float)
	{
		cout << "execpt of appropriating age" << endl;
	}
	system("pause");
	return 0;
}