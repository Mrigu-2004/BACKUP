#include<stdio.h>
int main()
{
	int a=5,b=6,c=5,*p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	if (*p1<*p2)
	printf("\n %d is less than %d",*p1,*p2);
	if (*p3==*p1)
	printf("\n %d is equal to %d",*p3,*p1);
	if (*p3!=*p2)
	printf("\n %d is equal to %d",*p3,*p2);
	return 0;
}





