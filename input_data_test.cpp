#include<iostream>
#include"input_daba_test.h"
using namespace std;

void input_data_test(int,int)
{
	cin.clear();  //�������ʶ��Ϊ0
	cout<<"Bad input;Pleasr enter numbers: ";
	while(cin.get()!='\n')
		continue;
}