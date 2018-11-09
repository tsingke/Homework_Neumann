#include"student.h"
student::student()
{
  name=NULL;
  age=0;
}
student::student(char *na,char *id,char *num,char *spec,int ag)
{
    if(na)
    {
        name=new char[strlen(na)+1];
        strcpy(name,na);
    }
    strcpy(ID,id)
    strcpy(number,num);
    strcpy(speciality,spec);
    age=ag;
}
studebt::student(const student &per)
{
    if(per.name)
    {
        name=new char[strlen(per.name)+1];
        strcpy(name,per.name);
    }
    strcpy(ID,per.ID)
    strcpy(number,per.number);
    strcpy(speciality,per.speciality);
    age=per.age;
}
student::~student()
{
    if(name)
        delete []name;
}
char *student::GetName()
{
    return  name;
}
char *student::GetID()
{
    return  ID;
}
char *student::GetAge()
{
    return  age;
}
char *student::Getspec()
{
    return  speciality;
}
char *student::GetNumber()
{
    return  number;
}
void student::Display()
{
cout<<"姓 名:"<<name<<endl;
cout<<"身份证:"<<ID<<endl;
cout<<"学 号:"<<number<<endl;
cout<<"专 业:"<<speciality<<endl;
cout<<"年 龄:"<<age<<endl;
}
void student::input()
{
char na[10];
cout<<"输入姓 名:"；
cin>>na;
if(name)
    delete []name;
name=new char[strlen(na)+1];
strcpy(name,na);
cout<<"输入身份证:";
cin>>ID;
cout<<"输入年 龄:";
cin>>age;
cout<<"输入专 业:";
cin>>speciality;
cout<<"输入学 号:";
cin>>number;
}
