#include<iostream>
#include"input_daba_test.h"
using namespace std;

void input_data_test(int,int)
{
	cin.clear();  //将错误标识改为0
	cout<<"Bad input;Pleasr enter numbers: ";
	while(cin.get()!='\n')
		continue;
}