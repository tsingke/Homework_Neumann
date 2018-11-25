#ifndef _STUDENT               
#define _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define SIZE 80
class Student
{
	char *name;                     
	char ID[19];                     
	char number[10];                
	char speciality[20];    
	int age;
	static int count;
public:
	Student();                        
	Student(char *na, char *id, char *num, char * spec, int ag); 
	Student(const Student &per);          
	~Student();                        
	char* GetName()const;                   
	char* GetID();                      
	char* GetNumber();                 
	char* GetSpec();                    
	int GetAge()const;
	void Display() const;
	void Input();    
	void Insert();
	void Delete();
	static int GetCount();
};
#endif
