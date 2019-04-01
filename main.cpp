// examples
#include "math.cpp"
#include<iostream>
#include<math.h>
using namespace std;
//v(i)=df(i)/dt(i)
void derivative(float* r, float* f, int n, float * res)
{
	int len=n;
	for(int i=1;i<len-1;i++)
	{
		res[i]=(f[i]-f[i-1])/(r[i]-r[i-1]);
	}
	res[0]=0.0;
	res[len-1]=0.0;
	return;

}
int main()
{
	cout<<"hello"<<endl;
	float r[1000];
	float f[1000];
	float res[1000];
	float h=0.01;
	for(int i=0;i<1000;i++)
	{
		r[i]=i*h;
	}
	for(int i=0;i<1000;i++)
	{
		f[i]=cos(r[i]);
	}
	derivative(r,f,1000,res);
	for(int i=0;i<1000;i++)
	{
		cout<<r[i]<<"  "<<res[i]<<endl;
	}
}
