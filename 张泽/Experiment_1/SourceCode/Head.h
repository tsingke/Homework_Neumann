#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;


//学生结构体
    struct SZ
 {
    long number;//学号
    char name[30];//姓名
    float dailyScore;//平时成绩
    float finalScore;//期末成绩
    float totalScore;//总评成绩
    float text;//实验成绩
    int rank;//名次

 };

 //成员函数

 //读取学生信息
 //void redData(SZ stu[],int N);//输入读取
 SZ* readDataFromFile(int N);//文件读取

 //计算学生总评成绩

 void calcuScore(SZ stu[],int N);

 //计算学生名次

 void sortScore(SZ stu[],int N);

 //输出学生完整信息

 void printOut(SZ stu[],int N);

 //写入Excel文档

 void putintoExcel(SZ stu[],int N);

 //输入学号查询学生信息及成绩

 void inSpect(SZ stu[],int N);

 //求平均值及方差

 void calculate(SZ stu[],int N);


 #endif

