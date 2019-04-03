#include<cmath>
#include<iostream>
using namespace std;
//v(i)=df(i)/dt(i)
int derivative(float* r, float* f, int n, float * res)
{
	int len=n;
	for(int i=1;i<len;i++)
	{
		if(abs(r[i]-r[i-1])<1.0E-15) 
		{
			return 1;
		}
		res[i]=(f[i]-f[i-1])/(r[i]-r[i-1]);
	}
	res[0]=0.0;
	return 0;

}

