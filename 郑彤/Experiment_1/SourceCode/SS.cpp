// SS.cpp: implementation of the SS class.
//
//////////////////////////////////////////////////////////////////////

#include "SS.h"
SS a,b,c,d,e,f;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void SS::readData()
{
	/*if(m.number='2017000001')
		cout<<"姚期智"<<"平时成绩90"<<"实验成绩85"<<"期末成绩98"<<endl;*/
	a.number=2017000001;
	strcpy(a.name,"姚期智");
	a.dailyScore=90;
	a.experiScore=85;
	a.finalScore=98;
	b.number=2017000002;
	strcpy(b.name,"周光远");
	b.dailyScore=85;
	b.experiScore=87;
	b.finalScore=92;
	c.number=2017000003;
	strcpy(c.name,"孙家栋");
	c.dailyScore=89;
	c.experiScore=84;
	c.finalScore=96;
	d.number=2017000004;
	strcpy(d.name,"杨芙清");
	d.dailyScore=95;
	d.experiScore=76;
	d.finalScore=98;
    e.number=2017000005;
	strcpy(e.name,"张朝阳");
	e.dailyScore=78;
	e.experiScore=80;
	e.finalScore=88;
	f.number=2017000006;
 	strcpy(f.name,"李彦宏");
	f.dailyScore=82;
	f.experiScore=90;
	f.finalScore=85;
	a.generalScore=0.2*a.dailyScore+0.2*a.experiScore+0.6*a.finalScore;
	b.generalScore=0.2*b.dailyScore+0.2*b.experiScore+0.6*b.finalScore;
	c.generalScore=0.2*c.dailyScore+0.2*c.experiScore+0.6*c.finalScore;
	d.generalScore=0.2*d.dailyScore+0.2*d.experiScore+0.6*d.finalScore;
	e.generalScore=0.2*e.dailyScore+0.2*e.experiScore+0.6*e.finalScore;
	f.generalScore=0.2*f.dailyScore+0.2*f.experiScore+0.6*f.finalScore;
	/*cout<<"请输入学号"<<endl;
	cin>>number;
	cout<<"请输入姓名"<<endl;
	cin>>name;
	cout<<"请输入平时成绩"<<endl;
	cin>>dailyScore;
	cout<<"请输入实验成绩"<<endl;
	cin>>experiScore;
	cout<<"请输入期末成绩"<<endl;
	cin>>finalScore;
	cout<<endl;*/
}



void SS::calcuScore(SS m)
{
	cout<<"请输入学号"<<endl;
	cin>>m.number;
	if(m.number==a.number)
	{
		cout<<"名字："<<a.name<<" 平常成绩："<<a.dailyScore<<" 实验成绩："<<a.experiScore<<" 期末成绩："<<a.finalScore<<endl;
		cout<<"输出总评成绩"<<endl;
		//m.generalScore=0.2*a.dailyScore+0.2*a.experiScore+0.6*a.finalScore;
	    cout<<a.generalScore<<endl;
	}
	else
	if(m.number==b.number)
	{
		cout<<"名字："<<b.name<<" 平常成绩："<<b.dailyScore<<" 实验成绩："<<b.experiScore<<" 期末成绩："<<b.finalScore<<endl;
		cout<<"输出总评成绩"<<endl;
		//m.generalScore=0.2*b.dailyScore+0.2*b.experiScore+0.6*b.finalScore;
	    cout<<b.generalScore<<endl;
	}
	else
	if(m.number==c.number)
	{
		cout<<"名字："<<c.name<<" 平常成绩："<<c.dailyScore<<" 实验成绩："<<c.experiScore<<" 期末成绩："<<c.finalScore<<endl;
		cout<<"输出总评成绩"<<endl;
		//m.generalScore=0.2*c.dailyScore+0.2*c.experiScore+0.6*c.finalScore;
	    cout<<c.generalScore<<endl;
	}
	else
	if(m.number==d.number)
	{
		cout<<"名字："<<d.name<<" 平常成绩："<<d.dailyScore<<" 实验成绩："<<d.experiScore<<" 期末成绩："<<d.finalScore<<endl;
		cout<<"输出总评成绩"<<endl;
		//m.generalScore=0.2*d.dailyScore+0.2*d.experiScore+0.6*d.finalScore;
	    cout<<d.generalScore<<endl;
	}
	else
	if(m.number==e.number)
	{
		cout<<"名字："<<e.name<<" 平常成绩："<<e.dailyScore<<" 实验成绩："<<e.experiScore<<" 期末成绩："<<e.finalScore<<endl;
		cout<<"输出总评成绩"<<endl;
		//m.generalScore=0.2*e.dailyScore+0.2*e.experiScore+0.6*e.finalScore;
	    cout<<e.generalScore<<endl;
	}
	else
	if(m.number==f.number)
	{
		cout<<"名字："<<f.name<<" 平常成绩："<<f.dailyScore<<" 实验成绩："<<f.experiScore<<" 期末成绩："<<f.finalScore<<endl;
		cout<<"输出总评成绩"<<endl;
		//m.generalScore=0.2*f.dailyScore+0.2*f.experiScore+0.6*f.finalScore;
	    cout<<f.generalScore<<endl;
	}
}


void SS::sqrtData()
{
	
	float av=0,s=0;
	av=(a.generalScore+b.generalScore+c.generalScore+d.generalScore+e.generalScore+f.generalScore)/6;
	cout<<"总评成绩均值为："<<av<<endl;
	s=((pow((a.generalScore-av),2)+pow((b.generalScore-av),2)+pow((c.generalScore-av),2)+pow((d.generalScore-av),2)+pow((e.generalScore-av),2)+pow((f.generalScore-av),2)))/6;
	cout<<"总评成绩方差为："<<s<<endl;
}



void SS::output()
{
	cout<<"学号+姓名+总评成绩"<<endl;
	cout<<a.number <<a.name <<a.generalScore <<endl
		<<b.number <<b.name <<b.generalScore <<endl
		<<c.number <<c.name <<c.generalScore <<endl
		<<d.number <<d.name <<d.generalScore <<endl
		<<e.number <<e.name <<e.generalScore <<endl
		<<f.number <<f.name <<f.generalScore<<endl;
}

main()
{
	SS m;
	m.readData();
	m.calcuScore(m);
	m.sqrtData();
	m.output();
}