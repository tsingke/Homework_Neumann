#pragma once
class SS
{
private :
	char number[20]; //学号
	char name[10]; //姓名
	float dailyScore;  //平时成绩   
	float testScore; //实验成绩
	float finalScore;  //期末成绩 

	float generalScore;//总评成绩 
	int  place;        //名次

	float gScore = 0.0;  // 所有人的平均成绩
	float variance = 0.0; //方差
	

public:    
	void readData();   //输入学生的信息   
	void calcuScore(); //计算学生总评成绩    
	void printOut();     //输出学生信息 
	void search(); //查找学生
	void sort();  //对学生进行排名
	void printCourse(); //对课程的均值和方差进行输出
};