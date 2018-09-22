 #include "score.h"
10  #include <math.h>
11  #include <stdlib.h>
12  #include <stdio.h>
13

14  /*----------------函数定义-------------*/
15

16  //1.读取学生基本数据
17  //void readData(SS stu[], int N)
18  //{
19  //
20  //	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");
21  //
22  //	for (int i = 0; i < N; i++)
23  //	{
24  //		printf("第%d个学生:", i + 1);
25  //		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
26  //		printf("\n");
27  //	}
28  //
29  //	printf("------成绩录入完毕!--------\n");
30  //
31  //
32  //
33  //}
34

35  SS* readDataFromFile(int *N)
36  {
37

38  	printf("\n\n------第一步: 从文件读取学生的成绩信息--------\n\n");
39

40  	SS *stu;// 开辟新空间,存取文件中的每个学生信息
41

42  	FILE *fp = NULL;
43  	int count = 0;
44  	int index = 0;
45

46  	fp = fopen("data.txt", "r");
47

48  	//1.获取学生数目
49  	if (fp != NULL)
50  	{
51  		fscanf(fp, "%d", &count);
52  		*N = count;
53  	}
54  	else
55  	{
56  		printf("failed to open the info file\n");
57  		getchar();
58  	}
59

60  	printf("学生数目为:%d\n", count);
61  	getchar();
62

63

64  	//2.给所有学生分配存储空间
65  	stu = (SS*)malloc(count * sizeof(SS));
66

67

68  	//3.读取每条学生的信息
69  	while ((!feof(fp)) && (index < count))
70  	{
71

72  		//读入文件数据到内存
73  		fscanf(fp, "%s%s %f%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore,&stu[index].expScore, &stu[index].finalScore);
74

75  		//输出原始学生信息
76  		printf("* %s	平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分\n", (stu[index].number), stu[index].dailyScore, stu[index].expScore, stu[index].finalScore);
77

78  		index++;
79

80

81  	}
82

83  	fclose(fp);
84

85  	return stu;
86  }
87

88  //2.计算N个学生各自的总评成绩
89  void calcuScore(SS stu[], int N)
90  {
91

92

93  	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");
94

95  	for (int i = 0; i < N; i++)
96  	{
97  		//总成绩=0.2\*平时成绩+0.2\*实验成绩+0.6\*期末成绩
98  		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].expScore + 0.6*stu[i].finalScore;
99  		printf("* %s			总成绩:%4.2f分\n", (stu[i].number),  stu[i].generalScore);
100

101  	}
102  }
103

104

105  //3.根据总评成绩排名
106  int cmpBigtoSmall(const void *a, const void *b)
107  {
108

109  	SS *aa = (SS *)(a);
110  	SS *bb = (SS *)(b);
111

112

113

114  	if ((*aa).generalScore < (*bb).generalScore)  return 1;
115

116  	else if ((*aa).generalScore > (*bb).generalScore)  return -1;
117

118  	else
119  		return 0;
120

121  }
122

123  void sortScore(SS stu[], int N)
124  {
125

126  	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);
127

128  }
129

130

131  //4.按照一定的格式输出N个学生的信息
132  void printOut(SS stu[], int N)
133  {
134

135

136  	printf("\n------第三步: 根据总成绩输出学生排名信息!------\n\n");
137

138  	for (int i = 0; i < N; i++)
139  	{
140

141  		printf("第%d名信息 %s			总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]),  stu[i].generalScore);
142  	}
143

144

145  }
146

147  /*-6.计算成绩的均值和方差*/
148  void Ave_Variance(SS stu[],int N)
149  {
150  	float ave;
151  	ave = 0.2*(stu[0].generalScore + stu[1].generalScore + stu[2].generalScore + stu[3].generalScore + stu[4].generalScore);
152  	float variance;
153  	variance = 0.2*(pow(stu[0].generalScore - ave, 2) + pow(stu[1].generalScore - ave, 2) + pow(stu[2].generalScore - ave, 2) + pow(stu[3].generalScore - ave, 2) + pow(stu[4].generalScore - ave, 2));
154

155  	printf("总成绩平均值为：%4.2f，总成绩方差为：%4.2f\n", ave,variance);
156
157  }
158

159  /*-7.输入学号查成绩*/
160  void searchScore(SS stu[])
161  {
162  	char number[10];
163  	printf("请输入学号：\n");
164  	//printf("%c", stu[0].number[0]);
165
166  	for (int j = 0; j < 10; j++)
167  	{
168  		scanf("%c", &number[j]);
169  	}
170  	getchar();
171
172

173
174  	for (int i = 0; i < 5; i++)
175  	{
176  		for (int j = 0; j < 10; j++)
177  		{
178  			if (number[j] == stu[i].number[j])
179  			{
180  				if (j == 9)
181  				{
182  					printf("* %s	平时成绩：%4.2f分	实验成绩：%4.2f分	期末成绩:%4.2f分    总成绩为:%4.2f分\n", (stu[i].number), stu[i].dailyScore, stu[i].expScore, stu[i].finalScore,stu[i].generalScore);
183  				}
184

185  			}
186  		}
187  	}
188
189  }
