 #include<iostream>
using namespace std;

void main()
{
	int *p;
	p= new int[20];
	int i,a = 0, b = 0;
	cout <<"please enter 20 numbers "<< endl;
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];

		if (p[i] < 0)
			a++;
		if (p[i] > 0)
			b++;
     }
	cout<< "正数个数：" << b << "负数个数：" << a<< endl;
	int avg, fc,sum= 0,sum2=0;
	for (i= 0; i<20; i++)
		sum = sum + p[i];

		avg = sum /20;
		cout << "avg："<<avg << endl;
	for (i = 0; i <20; i++)
		sum2 =sum2+ (p[i] - avg)*(p[i] - avg);
	    fc= sum2 / 20;
	cout << "fc：" << fc<<endl;
int j,t;
	for (i = 0; i<20; i++)
	{
	    for(j=i+1;j<20;j++)
		{
		    if (p[i]>p[j])
            {
                t = p[j];
                p[j] = p[i];
                p[i] = t;

            }
		}
	}
	cout << "从小到大的排序：" << endl;
	for (i = 0; i < 20; i++)
		cout << p[i] << endl;

		delete[]p;
	system("pause");
}


