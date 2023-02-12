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
#endif
 
