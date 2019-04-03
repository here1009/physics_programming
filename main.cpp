// examples
#include "mathmatics.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout<<"hello"<<endl;
	float r[1000];
	float f[1000];
	float res[1000];
	float res2nd[1000];
	float h=0.01;
	for(int i=0;i<1000;i++)
	{
		r[i]=i*h;
	}
	for(int i=0;i<1000;i++)
	{
		f[i]=cos(r[i]);
	}
	int stat=derivative(r,f,1000,res);
	if(stat==0)
	{
		for(int i=0;i<1000;i++)
		{
			cout<<r[i]<<"  "<<res[i]<<endl;
		}
	}
	else
	{
		cout<<"r is wrong!"<<endl;
	}
	//
	stat=derivative(r,res,1000,res2nd);
	if(stat==0)
	{
		for(int i=0;i<1000;i++)
		{
			cout<<r[i]<<"  "<<res2nd[i]<<endl;
		}
	}
	else
	{
		cout<<"r is wrong!"<<endl;
	}
}
