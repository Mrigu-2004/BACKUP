#include<stdio.h>
int f1(int);
void  main()
{
int n=5;
f1(n);
}
int f1(int x)
{
	if (x>0)
	{
		printf("%d \n",x);
		f1(x-1);
	}
	}

