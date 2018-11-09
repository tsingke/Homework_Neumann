#include<iostream>
using namespace std;
#include"student.h"
const int N=10;
void menu();
void outputstu(student *array);
void Inputstu(student *array);
int searchstu(student *array,char *na);
int count=0;
int main()
{
    student array[N]
    int choice;
    do
    {
        menu()
        cout<<"please input your choice:";
        cin>>choice;
        if(choice>=0&&choice<=3)
            switch(choice)
            {   case 1:Inputstu(array);break;
                case 2:cout<<"Input the name searched"<<endl;
                       char na[20];
                       cin>>na;
                       int i;
                       i=searchstu(array,na);
                       if(i==N)
                                 cout<<"查无此人!\n";
                        else
                                 array[i].Display();
                        break;
                case 3:outputstu(array); break;
                default:break;
            }
        }while(choice);
        return 0;
}
void menu();
{
          cout<<"*****1.录入信息*****"<<endl;
          cout<<"*****2.查询信息*****"<<endl;
          cout<<"*****3.浏览信息*****"<<endl;
          cout<<"*****0.退    出*****"<<endl;
}
void outputstu(student *array)
{
         cout<<"学生人数="<<count<<endl;
         for(int i=0;i<count;i++)
         array[i].Display();
}
int searchstu(student *array,char *na)
{
        int i,j=N;
        for(i=0;i<count;i++)
        if(strcmp(array[i].GetName(),na)==0)
        j=i;
        return j;
}
void inputstu(student *array)
{
        char ch;
        do
        {    array[count].input();
        count++;
        cout<<"继续输入吗?(Y or N)"<<endl;
        cin>>ch;
        }while(ch=='Y';
)
