#include<stdio.h>
int main()
{
	int a=5,b=10;
	int c=(b+2,++b,b+5);
	printf("\n c=%d",c);
	printf("\n a=%d b=%d ",a,b);
	b=~a;
	printf("\n a=%d b=%d",a,b);
	return 0;
}
