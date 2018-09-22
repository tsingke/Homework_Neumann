#include"sore.h"
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
//读取学生基本信息
void readData(ST stu[],int N)
{
    printf("请按照如下格式输入学生信息：学号，姓名，平时成绩，期末成绩\n")
    for(int i=0;i<N;i++)
    {
        printf("第%d个学生：",i+1);
        scanf("%s %s %f %f",&stu[i].number,&stu[i].name,&stu[i].Dscore,&stu[i].Fscore);
        printf("\n");
    }
    printf("******成绩录入完毕******");

}
ST* readDataFromFile(int *N)
{
    printf("\n\n-----第一步：从文件读取学生成绩信息-----\n\n");
    ST *stu;//开辟新空间，存取文件中每个学生信息
    FILE *fp=NULL;
    int count=0;
    int index=0;
    fp=fopen("data.txt","r");

    //获取学生数目
    if(fp!=NULL)
    {
        fscanf(fp,"%d",&count);
        *N=count;
    }
    else
    {
        printf("读取失败");
        getchar();
    }
    printf("学生数目为：%d\n",count);
    getchar();

    //给所有学生分配存储空间
    stu=(ST*)malloc(count*sizeof(ST));

    //读取每条学生信息
    while ((!feof(fp)) && (index < count))
	{

		//读入文件数据到内存
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].DScore, &stu[index].FScore);

		//输出原始学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].DScore, stu[index].FScore);

		index++;


	}

	fclose(fp);

	return stu;
}
//计算N个学生各自的总评成绩
void calcuScore(ST stu[], int N)
{


	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].Gscore = 0.2*stu[i].Dscore + 0.8*stu[i].Fscore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].Gscore);

	}
}


//根据总评成绩排名
int cmpBigtoSmall(const void *a, const void *b)
{

	ST *aa = (ST *)(a);
	ST *bb = (ST *)(b);



	if ((*aa).Gscore < (*bb).Gscore)  return 1;

	else if ((*aa).Gscore > (*bb).Gscore)  return -1;

	else
		return 0;

}

void sortScore(ST stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}


//按照一定的格式输出N个学生的信息
void printOut(ST stu[], int N)
{


	printf("\n------第三步: 根据总成绩输出学生排名信息!------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].Gscore);
	}


}
