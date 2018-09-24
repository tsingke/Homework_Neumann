#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

struct Student{
	char name[10];
	char number[10];
	 float dailyScore;
    float testScore;
    float finalScore;
    float generalScore;
};


void input_student(struct Student * parr, int len)
{
	int i;

	for (i=0; i<len; i++)
	{
		printf("请输入第 %d 个学生的信息\n",i+1);

		printf("名字：");
		scanf("%s",parr[i].name);

		printf("学号：");
		scanf("%s",&parr[i].number);

		printf("平时成绩：");
		scanf("%f",&parr[i].dailyScore);
		printf("实验成绩：");
		scanf("%f",&parr[i]. testScore);
		printf("期末成绩：");
		scanf("%f",&parr[i].finalScore);
		  parr[i].generalScore = parr[i].dailyScore * 0.2 + parr[i].testScore * 0.2 + parr[i].finalScore * 0.6;
	}
}


void sort(struct Student * parr, int len)
{
	int i, j;
	struct Student t;

	for (i=0; i<len-1; i++)
	{
		for (j=0; j<len-1-i; j++)
		{
			if (a[j].generalScore < a[j+1].generalScore)
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
#endif // FUNCTION_H_INCLUDED
