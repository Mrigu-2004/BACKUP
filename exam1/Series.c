#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	double s=0.0;int i;
	for (i=2;i<=n;i++)
	{
	s=s+((i*10)+i)/(double)fact(i);
	}
	printf("s=%lf",1+s);
}
