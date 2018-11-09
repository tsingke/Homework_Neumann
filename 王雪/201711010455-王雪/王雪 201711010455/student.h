#ifndef_STUDENT
#define_STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE80
class student
{
   char *name;
   char ID[19];
   char number[10];
   char speciality[20];
   int age;
public:
   student();
   student(char *np,char *id,char *num,char *spec,int ag);
   student(const student &per);
   ~student();
   char*GetName();
   char*GetId();
   char*GetNumber();
   char*Getspec();
   int GetAge();
   void Display();
   void Input();
}
#endif
