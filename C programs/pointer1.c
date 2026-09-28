#include<stdio.h>
int main()
{
	int a=10;float b=7.5; char c='A';
	int *p=&a;
	float *q=&b;
	char *r=&c;
	printf("%d \n",*p);
	printf("%lf \n",*q);
	printf("%c \n",*r);
	return 0;
}
