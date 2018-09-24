/*******************************************

**功能：学生成绩管理系统
**作者：Zhangze/1343680145@qq.com&&LiLingzhi/saintLilz@163.com
**版本：2018-9-23/11:30

/********************************************/

#include<iostream>
#include<stdlib.h>
#include<Windows.h>
#include"Head.h"
using namespace std;

int main()
{
    cout<<" ********************************** \n";
    cout<<"       学生成绩管理分析系统           \n";
    cout<<"              Zhangze                \n";
    cout<<"       Thanks for LLz's help         \n";//鸣谢
    cout<<" ********************************** \n";


    int N=0;//N为学生总数
    char c[20];//查询学号

    SZ *pstu=NULL;
    cout<<"开始数据读取——————————>>>)"<<endl;

    cout<<"请输入需要读取学生个数："<<endl;
    cin>>N;
    pstu=readDataFromFile(N);
    //计算学生总成绩
    calculate(pstu,N);

    //根据学生成绩排名
    sortScore(pstu,N);

    //按照排名输出学生信息
    printOut(pstu,N);

    //写入Excel文件
    putintoExcel(pstu,N);

    //输入学号即可查询功能
    inSpect(pstu,N);

    //求均值及方差
    calculate(pstu,N);
    system("pause");

}
