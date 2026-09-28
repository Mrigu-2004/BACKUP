#include<stdio.h>
int main()
{
	int a=1,b=3,c=2,max;
	if (a>b)
	{
		if (a>c)
		max=a;
		else
		max=c;
		
	}
	else
	{
		if (b>c)
		max=b;
		else
		max=c;
		
	}
	printf("max of three nos=%d",max);
}
