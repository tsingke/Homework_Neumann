#include<stdio.h>
#include<math.h>
struct student
{
	int number;//学号
	char name[20];//姓名
	float dailyscore;//平时成绩
	float finalscore;//期末成绩
	float experiscore;//实验成绩
	double generalscore;//总评成绩
	int place;//名次
};
/*函数声明*/
int  readData(struct student stu[]);//输入N个学生的学号，姓名，平时及期末，实验成绩
int  calcuScore(struct student stu[]);//计算N个学生的总评成绩
int  sortScore(struct student stu[]);//根据总评成绩排名，得出每个学生的名次
int  printOut(struct student stu[]);//输出N个学生的完整信息
struct student stu[6];
