#include<stdio.h>
int fact(int);
int main()
{
	int n=5;int f;
	f=fact(n);
	printf("factorial of %d=%d",n,f);
}
int fact(int x)
{
	if (x>1)
	return x*fact(x-1);
	else
	return 1;
}
	
	

