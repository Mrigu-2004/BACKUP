#include<stdio.h>
#include<math.h>
int fact(int n)
{
	if(n>1)
	return n*fact(n-1);
	else
	return 1;
}
int main()
{
	double s;int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+pow(-1,i+1)*1.0/fact(2*(i+1));
	}
	printf("s=%lf",s);
}
