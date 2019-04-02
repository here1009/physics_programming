//v(i)=df(i)/dt(i)
void derivative(float* r, float* f, int n, float * res)
{
	int len=n;
	for(int i=1;i<len;i++)
	{
		res[i]=(f[i]-f[i-1])/(r[i]-r[i-1]);
	}
	res[0]=0.0;
	return;

}

