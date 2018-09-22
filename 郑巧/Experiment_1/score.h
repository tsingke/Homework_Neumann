#ifndef SORE_H_INCLUDED
#define SORE_H_INCLUDED
using namespace std;
struct ST
{
    char name[20];
    char number[20];
    float Dscore;//平时成绩
    float Fscore;//期末成绩
    float Escore;//实验成绩
    float Gscore;//总成绩
    int place;//名词
};
ST* readDataFromFile(int *N)//文件读取
void calcuscore(ST stu[],int n);//计算学生总成绩
void sortscore(ST stu[],int n);//排名
void printout(ST stu[],int n);//按格式输出学生信息


#endif // SORE_H_INCLUDED
