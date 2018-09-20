#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include"score.h"
int  readData(struct student stu[])
{
	printf("请输入学生的学号,姓名,平时成绩,期末成绩,实验成绩:\n");
	int i;
	for (i = 0; i < 6;i++)
		scanf_s("%f,%f,%f,%d", &stu[i].dailyscore, &stu[i].finalscore, &stu[i].experiscore);
	}


int  calcuScore(struct student stu[])
{

	int i;
	double m;
	for (i = 0; i<6; i++)
		scanf_s("%f,%f,%f,%d", &stu[i].dailyscore, &stu[i].finalscore, &stu[i].experiscore);
	m = (stu[i].dailyscore*0.2 + stu[i].finalscore*0.6 + stu[i].experiscore*0.2);
	printf("%d\n", m);
}

int sortScore(struct student stu[])
{
	double m, t;
	int i, j, k;
	for (i = 1; i < 6; ++i)
	{
		m = stu[i].generalscore;
		scanf_s("%f,%f,%f,%d", &stu[i].dailyscore, &stu[i].finalscore, &stu[i].experiscore);
		m = (stu[i].dailyscore*0.2 + stu[i].finalscore*0.6 + stu[i].experiscore*0.2);
		k = i;
		for (j = i + 1; j <= 6; ++j)
		{
			if (stu[j].generalscore < stu[k].generalscore)
				k = j;
			if (k != j)
			{
				t = stu[i].generalscore;
				stu[i].generalscore = stu[k].generalscore;
				stu[k].generalscore = t;
			}
		}
		printf("第%d次的排序结果：", i);
	}
	int printOut(struct student stu[]);
	{
		int i;
		for (i = 0; i < 6; i++)
			printf("学号:%d\n 姓名:%s\n 平时成绩:%f\n 实验成绩:%f\n 期末成绩:%f\n 总评成绩:%f\n 名次:%d\n", stu[i].number, stu[i].name, stu[i].dailyscore,
			stu[i].experiscore, stu[i].finalscore, stu[i].generalscore, stu[i].place);
	}
}