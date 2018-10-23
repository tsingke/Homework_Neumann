#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<cstring>

using namespace std;
//#include<>
/**********结构体******************/
typedef struct
{
	char number[12];//学号
	char name[10];//姓名
	int dailyscore;//平时成绩
	int finalscore;//期末成绩
	int experscore;//实验成绩
	int lastscore;//总成绩
	int rank;

} ss;
void read(ss stu[], int n)//读取学生成绩
{
	for (int i = 0; i<n; i++)
	{
		cin >> stu[i].number >> stu[i].name >> stu[i].dailyscore >> stu[i].experscore >> stu[i].finalscore;
	}
	/*	cout<<"student信息是"<<endl;
	for(int j=0;j<n;j++)
	{
	cout<<stu[j].number<<' '<<stu[j].name<<' '<<stu[j].dailyscore<<' '<<stu[j].experscore<<' ' <<stu[j].finalscore  <<endl;
	}*/
}
void count(ss stu[], int n)//计算学生总成绩
{
	for (int i = 0; i<n; i++)
	{
		stu[i].lastscore = 0.2*stu[i].dailyscore + 0.2*stu[i].experscore + 0.6*stu[i].finalscore;
	}
	cout << "student信息是" << endl;
	//	for(int j=0;j<n;j++)
	//	{
	//	cout<<stu[j].number<<' '<<stu[j].name<<' '<<stu[j].dailyscore<<' '<<stu[j].experscore<<' ' <<stu[j].finalscore <<' '<<stu[j].lastscore  <<endl;
	//	}
}
void rankscore (ss stu[], int n)//以总成绩进行排名
{
	int temp;
	for (int k = 0; k<n; k++)//排名初始化
	{
		stu[k].rank = k + 1;
	}
	for (int i = 0; i<n - 1; i++)//重新洗牌
	{
		for (int j = i + 1; j<n; j++)
		{
			if (stu[i].lastscore <stu[j].lastscore)
			{
				temp = stu[i].rank; stu[i].rank = stu[j].rank; stu[j].rank = temp;
			}
		}
	}
	for (int j = 0; j<n; j++)//输出排名
	{
		cout << stu[j].number << ' ' << stu[j].name << ' ' << stu[j].dailyscore << ' ' << stu[j].experscore << ' ' << stu[j].finalscore << ' ' << stu[j].lastscore << "名次" << stu[j].rank << endl;
	}
}
void search(ss stu[], int  n)//查找学生信息
{
	char num[12];
	cout << "输入要查询的学号" << endl;
	cin >> num;
	for (int i = 0; i<n; i++)
	{
		if (strcmp(num, stu[i].number) == 0)//进行匹配
		{
			cout << stu[i].number << ' ' << stu[i].name << ' ' << stu[i].dailyscore << ' ' << stu[i].experscore << ' ' << stu[i].finalscore << ' ' << stu[i].lastscore << "名次" << stu[i].rank << endl;
		}

	}
}
void fc(ss stu[], int n)//计算均值和方差
{
	int FC = 0, JZ = 0, k = 0, p = 0;
	for (int i = 0; i<n; i++)//综合成绩
	{
		p += stu[i].lastscore;
	}
	JZ = p / n;
	for (int j = 0; j<n; j++)//计算方差
	{
		k+= pow((stu[j].lastscore - JZ), 2);
	}
	FC = k / n;
	cout << "该科目平均分为" << JZ << "方差为" << FC << endl;
}

 int main()
{
	int n;
	//char num[10]; 
	ss stu[20];
	cout << "输入n" << endl;
	cin >> n;
	read(stu, n);
	count(stu, n);
	rankscore(stu,n);
    search(stu, n);
	fc(stu, n);
	system("pause");
	return 0;
}