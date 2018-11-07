#pragma once
#ifndef _STUDENT
#include <iostream>
#include <string>
using namespace std;
#define size 80
class student
{
private:
	char *name;//姓名
	char ID[19]; //身份证
	char number[10];//学号
	char speciality[20];//专业
	int age;
public:
	student();
	student(char *na, char *id, char *num, char *spec, int ag);
	student(const student &per);//拷贝构造函数
	~student();
	char* getname();
	char* getid();
	char* getnumber();
	char* getspec();
	int getage();
	void display();
	void input();

};
#endif

