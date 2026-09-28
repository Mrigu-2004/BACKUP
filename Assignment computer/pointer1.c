#include<stdio.h>
int main()
{
	int a=23,*p;char c='a',*q;
	p=&a;
	q=&c;
	printf("p=%u\n",p);
	
	printf("q=%u\n",q);
	
	p++;
	printf("p++=%u\n",p);
	q--;
	printf("q--=%u\n",q);
	return 0;
}
