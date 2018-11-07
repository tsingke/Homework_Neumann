#include "example3_26_student.h"
Student::Student()
{
    name=NULL;
    age=0;
}

Student::Student(char *na,char *id,char *num,char *spec,int ag)
{
    if(na)
    {
        name=new char[strlen(na)+1];//避免浅拷贝
        strcpy(name,na);
    }
    strcpy(ID,id);
    strcpy(number,num);
    strcpy(specialty,spec);
    age=ag;
}

Student::Student(const Student &per)  //拷贝构造函数
{
    if(per.name)
    {
        name=new char[strlen(per.name)+1];
        strcpy(name,per.name);
    }
    strcpy(ID,per.ID);
    strcpy(number,per.number);
    strcpy(specialty,per.specialty);
    age=per.age;
}


Student::~Student()    //析构函数
{
    if(name)
        delete []name;
}

char* Student::GetName()     //提取姓名
{
    return name;
}

char* Student::GetID()        //提取身份证
{
    return ID;
}


int Student::GetAge()         //提取年龄
{
    return age;
}


char* Student::GetSpec()       //提取专业
{
    return specialty;
}


char* Student::Getnumber()      //提取学号
{
    return number;
}

void Student::Display()          //输出的数据信息
{
   cout<<"姓名："<<name<<endl;
   cout<<"身份证："<<ID<<endl;
   cout<<"学号："<<number<<endl;
   cout<<"专业："<<specialty<<endl;
   cout<<"年龄："<<age<<endl;
}


void Student::Input()
{
    char na[10];
    cout<<"输入姓 名：";
    cin>>na;
    if(name)
        delete []name;
    name=new char[strlen(na)+1];
    strcpy(name,na);
    cout<<"输入身 份 证：";
    cin>>ID;
    cout<<"输入年 龄：";
    cin>>age;
    cout<<"输入专 业：";
    cin>>specialty;
    cout<<"输入学 号：";
    cin>>number;

}




