#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("Value-n:");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		if (n%i==0)
		f=f+i;
	}
	if (f==n)
	printf("The number is perfect");
	else
	printf("The number is not perfect");
}

