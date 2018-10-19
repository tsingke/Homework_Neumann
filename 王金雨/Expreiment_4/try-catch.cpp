#include <iostream>

using namespace std;
//检查学生的年龄以及成绩是否有错
 float checkAgeScore(int x, float y)
 {

    if(y>100||y<0)  throw y;
    else;
    if(x>25||x<16) throw x;
    else;
 }
 //输出学生的年龄，从姓名，成绩
void putInformation(int a,char *b,float c)
{
     cout<<"确认自己的年龄:"<<endl;
    cout<<a<<endl;
    cout<<"确认自己的姓名:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
    cout<<"确认自己的分数:"<<endl;
    cout<<c<<endl;
}
int main()
{  //输入学生的年龄
    int age=0;
    char name[10];
    float score;
    cout<<"请输入自己的年龄:"<<endl;
    cin>>age;

    //输入自己的姓名
    cout<<"请输入自己的姓名:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>name[i];

    }

    cout<<"请输入自己的分数:"<<endl;
    cin>>score;
    //try-catch块
    try
    {
        cout<<checkAgeScore(age,score);
    }
    catch(int)
    {
        cout<<"学生的年龄有误!"<<endl;
    }
    catch(float)
    {
        cout<<"学生的分数有误!"<<endl;
    }
    putInformation(age,name,score);
}
