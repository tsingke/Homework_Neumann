#include<iostream.h>
#include<stdlib.h>
#include <fstream>
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
//想用文件，没成功。
/*SS* readData(int n)
{
{
	ifstream fin;
	fin.open("C:\Users\LENOVO\Desktop\data.txt");//读取本项目内txt里的数据
	if (fin.fail())
	{
		cout << "Input file opening failed!";
		exit(1);
	}
	cout << "学生数目为:" << n << endl;
	SS stu[100];
	for (int i = 0; i < n; i++)	
	{   stu[i].place=i+1;
		fin >> stu[i].number;
		fin >> stu[i].name;
		fin >> stu[i].dailyScore;
		fin >> stu[i].expScore;
		fin >> stu[i].finalScore;
		cout << "学号;" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].expScore << " " << "期末成绩:" << stu[i].finalScore << endl;
	}
	fin.close();
	return stu;
}
}*/



//1读取学生们的学号，姓名，日常成绩，期末成绩
SS* readData(int n)
{
	cout << "学生数目为:" << n << endl;
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
	return stu;
}



//2计算学生们的综合成绩
void calcuScore(SS stu[],int n)
{   
	
	for(int i=0;i<n;i++)
	{
		stu[i].score=0.2*stu[i].dailyScore+0.2*stu[i].expScore+0.6*stu[i].finalScore;
        cout<<stu[i].name<<"的综合成绩是"<<stu[i].score<<endl;
	}
	
}


//3排名
void mingci(SS stu[],int n)
{  
	int i,j,t;
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
}




//4查询并输出
void printout(SS stu[],int n)
{
	char a[10];
	cout<<"请输入你要查找同鞋的学号"<<endl;
    cin>>a;
	
	for(int i=0;i<n;i++)
	{
		if(a==stu[i].number)
	    cout << "学号:" << stu[i].number << " " << "姓名:" << stu[i].name << " " << "平时成绩：" << stu[i].dailyScore << " " << "实验成绩:" << stu[i].expScore << " " << "期末成绩:" << stu[i].finalScore <<"综合成绩"<<stu[i].score<<"排名"<<stu[i].place<<endl;
        else
		cout<<"查无此人!"<<endl;
	}
}



int main()
{	cout<<"欢迎进入学生信息管理系统！"<<endl;
	int n=0;
    SS  *pstu = NULL;
	cout<<"请输入需要读取学生个数:"<< endl;
	cin>>n;
	readData(n);//录入信息
    calcuScore(pstu,n);//综合成绩
    mingci(pstu,n);//排名
    printout(pstu,n);//查询并输出
}

