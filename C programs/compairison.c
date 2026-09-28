#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 nos.");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if (b>c)
		printf("a=%d is largest",a);
		else if(b>c)
		printf("b=%d is largest",b);
		else
		printf("c=%d is largest",c);
	}
}
