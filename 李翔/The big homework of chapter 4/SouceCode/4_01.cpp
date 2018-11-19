#include<iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;  //���еľ�̬���ݳ�Ա
	Student() {total++;}  //���캯����ÿ����һ���¶�����total��1
	~Student() {total--;}  //����������ÿһ�����������ڽ�������total��1
	Student(int n ,char *p="Wang");
	void GetName();
	int Getnum();
};
int Student::total=0;  //��̬���ݳ�Ա�ĳ�ʼ��
Student::Student(int n, char *p)  //���ι��캯����ÿ����һ���¶�����total��1
{
	num=n;
	strcpy(name,p);
	total++;
}
void Student::GetName()
{
	cout<<name<<endl;
}
int Student::Getnum()
{
	return num;
}
int main()
{
	cout<<"The number of all students: "<<Student::total<<endl;
	//�޶���ʱ��������::��̬��Ա����ʽ����
	Student *p=new Student(13);  //��ָ�����鶯̬�ռ䲢�õ�����*p
	cout<<"The number of all students: "<<Student::total<<endl;
	//������::��̬��Ա����ʽ����
	cout<<"The number of all students: "<<p->total<<endl;//��ָ����ָ��Ķ���ȥ����
	delete p;  //ͨ��ָ��ɾ����̬��������һ��
	cout<<"The number of all students: "<<Student::total<<endl;
	//������::��̬��Ա����ʽ����
	Student s[2];  //�����������󣬹��캯����������
	cout<<"The number of all students: "<<s[0].total<<endl;//������������һ����ͬ
	cout<<"The number of all students: "<<s[1].total<<endl;
	return 0;
}