#include<stdio.h>
int power(int,int);
int main()
{
	int num,pow;
	printf("Enter num");
	scanf("%d",&num);
	printf("Enter power");
	scanf("%d",&pow);
	int f=power(num,pow);
	printf("f=%d",f);
		
}
int power(int n,int p)
{
	if (p)
	return n*power(n,p-1);
	else
	return 1;
}
