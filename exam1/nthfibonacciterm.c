#include<stdio.h>
int fibbo(int n)
{
	if (n==1 || n==2)
	return n-1;
	else
	return fibbo(n-1)+fibbo(n-2);
}
int main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i==n)
		{
			printf("%d",fibbo(i));
			break;
		}
	}
}
