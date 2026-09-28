#include<stdio.h>
int main()
{
	int a=23,b=24,*p,*q,x;
	 p=&a;
	 q=&b;
	printf("p=%u\n",p);
	
	printf("q=%u\n",q);
	x=p-q;
	printf("Subtraction of two pointers=%d",x);
	return 0;
}
