#ifndef __SCORE_H__
#define __SCORE_H__

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct
{
	char number[10]; 
	char name[10]; 
	float dailyScore; 
	float finalScore;  
	float generalScore; 
}SS;

void readData(SS stu[], int N);
SS* readDataFromFile(int *N);

void calcuScore(SS stu[], int N);


void sortScore(SS stu[], int N);


void printOut(SS stu[], int N);



#endif
