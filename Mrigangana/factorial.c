#include<stdio.h>
int fact(int);
int main()
{
	int x,f;
	printf("Print factorial of the number");
	scanf("%d",&x);
	 f=fact(x);
	printf("Factorial=%d",f);
}
int fact(int n)
{
	if (n>1)
	return n*fact(n-1);
	else
	return 1;
}
