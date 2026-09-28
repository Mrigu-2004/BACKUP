#include<stdio.h>
int main()
{
	int a=1,b=2,c=3;
	if (a>b && a>c)
	printf("a=%d is largest",a);
	else if (b>a && b>c)
	printf("b=%d is largest",b);
	else if (c>a && c>b)
	printf("c=%d is largest",c);
	
}
