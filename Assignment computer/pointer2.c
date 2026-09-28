#include<stdio.h>
int main()
{
	int a=23,*p;float c=12.1,*q;
	p=&a;
	q=&c;
	printf("p=%u\n",p);
	
	printf("q=%u\n",q);
	
	p=p+4;
	printf("p ,after adding 4=%u\n",p);
	q=q-4;
	printf("q, after adding 4=%u\n",q);
	return 0;
}
