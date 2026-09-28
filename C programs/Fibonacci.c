#include<stdio.h>
int fibo(int n)
{
	if (n==0 || n==1)
	return n;
	else
	return (fibo(n-1)+fibo(n-2));
}
int main()
{
	int n,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Printing the series");
	for (i=0;i<n;i++)
	{
		printf("%d\n",fibo(i));
	}
	return 0;
	
}
