#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
using namespace std;

	
FILE *fp=NULL;
int num,cnt;
struct student{
	int number;
	char name[10];
	float dailyscore;
	float testscore;
	float finalscore;
	double generalscore;
	int rank;
};

void ReadStudent(student *stu)
{
	//录入学生成绩
	printf("请输入学生总人数：\n");
	scanf("%d",&num);
	printf("请输入学生成绩：\n");
	for(int i=0;i<num;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].number,&stu[i].name,&stu[i].dailyscore,&stu[i].testscore,&stu[i].finalscore);
	}
}
void Totalscore(student *stu)
{
	//总成绩
	printf("\n学生的总成绩\n");
	for(int i=0;i<num;i++)
	{
		stu[i].generalscore=stu[i].dailyscore*0.2+stu[i].testscore*0.2+stu[i].finalscore*0.6;
		printf("学号：%d\t姓名：%s\t总成绩：%.2f\n",(stu[i].number),(stu[i].name),(stu[i].generalscore));
	}
}
void Sort(student *stu,int n)//按学生成绩排序
{
	int i,j;
	student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(stu[i].generalscore<stu[j].generalscore)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
		}
		
	}
}
void Studentrank(student *stu)
{
	//排名
	printf("\n学生名次\n");
	int j;
	for(int i=0;i<num;i++)
	{
		printf("学号：%d\t姓名：%s\t成绩：%.2f\t名次：%d\n",(stu[i].number),(stu[i].name),(stu[i].generalscore),i+1);
		stu[i].rank=i+1;
	}
	int numtemp;//输入的学号
	printf("请输入要查询学生的学号：");
	scanf("%d",&numtemp);
	for(j=0;j<num;j++)
	{
		if(stu[j].number==numtemp)
			{
				printf("查询得：\n");
			    printf("学号：%d\t姓名：%s\t成绩：%.2f\t名次：%d",numtemp,stu[j].name,stu[j].generalscore,stu[j].rank);
		}
	}

}
float mypow(float x)
{
	return(x*x);
}
void Revengescore(student *stu)//均值、方差计算及成绩分布分析
{
	int a=0,b=0,c=0;
	float x=0;
	float sum=0;//总值
	float meanvalue;//均值
	printf("\n均值\n");
	
	for(int i=0;i<num;i++)
	{
		sum=sum+stu[i].generalscore;
	}
	meanvalue=sum/num;
	printf("该课程成绩的均值为：%.2f",meanvalue);
	printf("\n方差\n");
	float variance;//方差
	for(int i=0;i<num;i++)
	{
		x=x+mypow(stu[i].generalscore-meanvalue);
	}
	variance=x/num;
	printf("该课程成绩的方差为：%.2f",variance);
	for(int i=0;i<num;i++)
	{
		if(stu[i].generalscore<=85) a++;
		else if(stu[i].generalscore>85&&stu[i].generalscore<=90) b++;
		else if(stu[i].generalscore>90 )c++;
     }
	printf("\n");
	printf("总成绩不高于85分的总人数有%d人\n",a);
	printf("总成绩大于85分且不高于90分的人数有%d人\n",b);
	printf("总成绩高于90分的人数有%d人\n",c);

}

int main()
{
	void ReadStudent(student *stu);
	student stu[10];
	printf("录入学生成绩：\n");
	ReadStudent(stu);
	Totalscore(stu);
	Sort(stu,num);
	Studentrank(stu);
	Revengescore(stu);
	system("pause");
}

