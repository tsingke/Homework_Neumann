/*************************************************
** 源文件   : score.c
** 功能说明 : Function Definations
** 创建时间 : 2018-9-2/17:35
/**************************************************/

/*----------------头文件--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*----------------函数定义-------------*/

//1.读取学生基本数据
void readData(SS stu[], int N)
{

	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");

	for (int i = 0; i < N; i++)
	{
		printf("第%d个学生:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}

	printf("------成绩录入完毕!--------\n");



}

SS* readDataFromFile(int *N)
{

	printf("\n\n------第一步: 从文件读取学生的成绩信息--------\n\n");

	SS *stu;// 开辟新空间,存取文件中的每个学生信息

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	//1.获取学生数目
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("学生数目为:%d\n", count);
	getchar();


	//2.给所有学生分配存储空间
	stu = (SS*)malloc(count * sizeof(SS));


	//3.读取每条学生的信息
	while ((!feof(fp)) && (index < count))
	{

		//读入文件数据到内存	
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore);

		//输出原始学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);

		index++;


	}

	fclose(fp);

	return stu;
}

//2.计算N个学生各自的总评成绩
void calcuScore(SS stu[], int N)
{


	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}
}


//3.根据总评成绩排名
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore > (*bb).generalScore)  return -1;

	else
		return 0;

}

void sortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}


//4.按照一定的格式输出N个学生的信息
void printOut(SS stu[], int N)
{


	printf("\n------第三步: 根据总成绩输出学生排名信息!------\n\n");

	for (int i = 0; i < N; i++)
	{

		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].text << " " << "期末成绩:" << stu[i].finalScore << " " << "总成绩:" << stu[i].generalScore << " " << "排名" << stu[i].rank << endl;
	}

}

//写入Excel文档
void putintoExcel(SS stu[],int N)
{
	cout << endl << "-------第四步：将学生完整信息写入项目目录下的Ecxel文档------" << endl;
	ofstream fout;
	fout.open("..\\score.xls");
	fout << "学号\t姓名\t平时分数\t实验分数\t期末分数\t总分\t名次\t\n";
	for (int i = 0; i < N; i++)
	{
		fout<<stu[i].number<<"\t";
		fout << stu[i].name << "\t";
		fout << stu[i].dailyScore << "\t";
		fout << stu[i].finalScore << "\t";
		fout << stu[i].text<<"\t";
		fout << stu[i].generalScore << "\t";
		fout << stu[i].rank<<"\t" ;
		fout << "\n";
	}
	fout.close();

}

//输入学号即可查询功能
void inSpect(SS stu[],int N)
{
	long a;
	int b=0;
	char f=0;
	cout << endl << "————————————第五步：查询功能——————————" << endl;
	cout << "请输入要查询学号：" << endl;

	
		cin >> a;
	
	for (int i = 0; i <N; i++)
	{
		if (a==stu[i].number)
		{
			cout << "符合学号;" << stu[i].number << "的是 " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].text << " " << "期末成绩:" << stu[i].finalScore << " " << "总成绩:" << stu[i].generalScore << " " << "排名" << stu[i].rank << endl;
			b = 1;
		
		}
			
	}

	if (b == 0)cout << "查询失败" << endl;
}
//求方差及平均值
void calculate(SS stu[],int N)
{
	int i = 0;
	cout << endl << "————————————第六步：计算均值——————————" << endl;
	float SUM=0;
	for (; i < N; i++)
	{
		SUM = SUM+stu[i].generalScore;
	}
	SUM = (float)(SUM / i);
	cout << "平均总成绩为：";
	cout<<SUM << endl;
	cout << endl << "————————————第七步：计算方差——————————" << endl;
	float b=0, c;
	i = 0;
	for (; i < N; i++)
	{
		b = (float)(b + (stu[i].generalScore - SUM )*(stu[i].generalScore - SUM ));
	}
	c = (float)(b / i);
	cout << "方差为：" << c << endl;


}