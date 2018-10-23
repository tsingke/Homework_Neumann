#include<iostream>
using namespace std;
 struct student//学生结构体
{
    char name[10];
    int age;
    float score;
};
float checkAgeScore(int Age,float score)
{
    if(Age<16||Age>25)throw Age;//抛出
    if(score<0||score>5)throw score;//抛出
    if(Age>=16&&Age<=25&&score>=0&&score<=5)
    {
        float score1=20*score;
        return score1;
    }
}
int main()
{
    student A;
    float score1;
    cout<<"请输入学生姓名"<<endl;
    cin>>A.name;
    cout<<"请输入年龄"<<endl;
    cin>>A.age;
    cout<<"请输入C++成绩"<<endl;
    cin>>A.score;
    try
    {
        score1=checkAgeScore(A.age,A.score);//被检测函数
        cout<<"name:"<<A.name<<"age:"<<A.age<<"score:"<<score1<<endl;//被检测函数
    }
    catch(int)//捕获异常年龄
    {
        cout<<"年龄不在合理范围内!";
    }
    catch(float)//捕获异常成绩
    {
        cout<<"成绩不在合理范围内！";
    }

}
