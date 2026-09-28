#include<stdio.h>
int binary(int n)
{
	if (n>0)
	return (binary(n)/2);
	
}
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int b=binary(n);
	printf("%d",b);
}
