#include<iostream>
#include"input_daba_test.h"
using namespace std;

struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr=60;

travel_time sum(travel_time *,int,int );
void show_time(travel_time);

int main()
{
	int n,h,m;
	int num1,num2;
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
	travel_time trip=sum(p1,num1-1,num2-1);
	cout<<"From the "<<num1<<" to the "<<num2<< "total spend :";
	show_time(trip);
	delete [] p1;
	system("pause");
	return 0;
}

travel_time sum(travel_time *t,int t1,int t2)
{
	travel_time total={0,0};
	for(int i=t1;i<=t2;++i)
	{
		total.mins+=t[i].mins;
		total.hours+=t[i].hours;
	}
	total.hours=total.hours+total.mins/Mins_per_hr;
	total.mins=total.mins%Mins_per_hr;
	return total;
}

void show_time(travel_time t)
{
	cout<<t.hours<<"hours,"<<t.mins<<"minutes"<<endl;
}
