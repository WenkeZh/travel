#include<iostream>
#include"input_daba_test.h"
using namespace std;

struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr=60;

void  sum(const travel_time *, travel_time *,int,int );
void show_time(const travel_time *);

int main()
{
	int n,h,m;
	int num1,num2;
	travel_time total={0,0};
	cout<<"Total-day's number: ";
	cin>>n;
	
	while(n<=1)
	{
		cout<<"输入错误，请输入大于1的数：";
		cin>>n;
	}
	travel_time *p1=new travel_time[n];
	cout<<"every-day time:"<<endl;
	for(int i=0;i<n;++i)
	{
	while(!(cin>>h>>m))
	{
		input_data_test(h,m);
	}
	p1[i].hours=h;
	p1[i].mins=m;
	}
	
	cout<<"输入欲计算时间段的起止序号:"<<endl;
	while(!(cin>>num1>>num2))
	{
		input_data_test(num1,num2);
	}
	sum(p1,&total,num1-1,num2-1);
	cout<<"From the "<<num1<<" to the "<<num2<< "total spend :";
	show_time(& total);
	delete [] p1;
	system("pause");
	return 0;
}

void sum(const travel_time *t, travel_time *total,int t1,int t2)
{
	int tmins=0,thours=0;
	for(int i=t1;i<=t2;++i)
	{
		tmins+=t[i].mins;
		thours+=t[i].hours;
	}
	(*total).hours=thours+tmins/Mins_per_hr;
	(*total).mins=tmins%Mins_per_hr;
}

void show_time(const travel_time *total)
{
	cout<<(*total).hours<<"hours,"<<(*total).mins<<"minutes"<<endl;
}
