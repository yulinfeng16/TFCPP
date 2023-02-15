#ifndef TFCPP_H
#define TFCPP_H
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<ctime>
#include<stdio.h>
#include<vector>
#include<queue>
#include<windows.h>
#define elif else if
using namespace std;
void timeload(int keytime,string a,int z)
{
	cout<<" ";
	if(z==0)
	{
	for(int i=0;i<keytime;i++)
	{
		cout<<"\b|";
		Sleep(250);
		cout<<"\b/";
		Sleep(250);
		cout<<"\b—";
		Sleep(250);
		cout<<"\b\\";
		Sleep(250);
	}}if(z==1){for(int i=0;i<keytime;i++)
	{
		cout<<"\b·";
		Sleep(250);
		cout<<"\b\b‥";
		Sleep(250);
		cout<<"\b…";
		Sleep(250);
		cout<<"\b∷";
		Sleep(250);
	}}
	if(z==2)
	{
		for(int i=0;i<keytime*2;i++)
	{
		cout<<"\b+";
		Sleep(250);
		cout<<"\b×";
		Sleep(250);
		cout<<"\b";
	}
	}
	cout<<"\b"<<a;
}
void timeprogress(double keytime,string a)
{
	keytime+=1;
	double gt=keytime/10;
	for(int i=0;i<10;i++)
	{
		Sleep(gt*1000);
		if(i==0)
		{
			cout<<" ";
		}
		cout<<"\b\b[";
		for(int j=0;j<=i;j++)
		{
			cout<<"▓";
		}
		for(int j=0;j<9-i;j++)
		{
			cout<<"_";
		}
		cout<<"]";
		cout<<"\b\b\b\b\b\b\b\b\b\b\b ";
	}
	cout<<"\b\b"<<a<<"       "<<endl;
}
#endif
 
//我必须提醒一下，由于编码问题一些IDE可能会出现乱码。一般DevC++容易出现这种情况。所以建议您先查看您的IDE是否兼容utf8编码，有必要时将这个文件转换为ANSI编码。
