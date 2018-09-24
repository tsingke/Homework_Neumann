#include<iostream.h>
#include<stdlib.h>
#include <fstream>
#include <string.h>
#include<Windows.h>
typedef struct student//定义学生这一结构体
{
	char number[10];
	char name[10];
	int dailyScore;
	int expScore;
    int finalScore;
	float score;
	int place;
}SS;




SS* readData(int n)
{
	//读取学生们的学号，姓名，日常成绩，期末成绩
	cout << "学生数目为:" << n << endl;
	cout<<"请输入这"<<n<<"名同学的信息"<<endl;
     SS stu[100];
	for (int i = 0; i < n; i++)	
	{   stu[i].place=i+1;
		cin >> stu[i].number;
		cin >> stu[i].name;
		cin >> stu[i].dailyScore;
		cin >> stu[i].expScore;
		cin >> stu[i].finalScore;
		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].expScore << " " << "期末成绩:" << stu[i].finalScore << endl;
	}
	//计算综合成绩
	for(i=0;i<n;i++)
	{
		stu[i].score=0.2*stu[i].dailyScore+0.2*stu[i].expScore+0.6*stu[i].finalScore;
        cout<<stu[i].name<<"的综合成绩是"<<stu[i].score<<endl;
	}	
 
    //排名
	int j,t;
 

for(i=0;i<n;i++)
 {
	 for(j=i+1;j<n;j++)
	 {
		 if(stu[i].score<stu[j].score)
		 {
			 t=stu[i].place;
			 stu[i].place=stu[j].place;
			 stu[j].place=t;
		 }
	 }
 }	

//根据学号查询学生信息
	char a[10];
	cout<<"请输入你要查找同鞋的学号"<<endl;
    cin>>a;
	
	for(i=0;i<n;i++)
	{  
	if (strcmp(stu[i].number, a)==1)
	    cout << "学号:" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].expScore << " " << "期末成绩:" << stu[i].finalScore <<"综合成绩"<<stu[i].score<<"排名"<<stu[i].place<<endl;
        break;
	}
return stu;
}












int main()
{
	cout<<"欢迎进入学生信息管理系统！"<<endl;
	int n=0;
    SS  *pstu = NULL;
	cout<<"请输入需要读取学生个数:"<< endl;
	cin>>n;
	readData(n);//录入信息
}

