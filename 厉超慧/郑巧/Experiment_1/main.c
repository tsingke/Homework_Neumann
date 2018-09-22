#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include"score.h"
int main()
{
    printf("******************************\n");
	printf("       学生成绩管理分析系统        \n");
    printf("******************************\n\n");
    int N = 0;     //学生总数
    ST stu[100];
	SS *p = &stu[0];//结构体数组指针
	printf("请输入学生数目(小于100):");//手动输入学生信息
	scanf("%d", &N);
	readData(p, N);
	calcuScore(P, N);//计算总成绩
	sortScore(p, N);//排名
	printOut(p, N);//按照排名输出学生信息
	free(p);//释放动态内存空间
	printf("\n");
	return 0;
}
