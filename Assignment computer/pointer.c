#include<stdio.h>
int main()
{
	int a=23;
	int *p=&a;
	printf("p=%u\n",p);
	p++;
	printf("p++=%u\n",p);
	p=p-4;
	printf("p--=%u\n",p);
	float b=21.2;
	float *q=&b;
	printf("q=%u\n",q);
	q++;
	printf("q++=%u\n",q);
	q--;
	printf("q--=%u\n",q);
	char c='a';
	char *r=&c;
	printf ("r=%u\n",r);
	r++;
	printf("r++=%u\n",r);
	r--;
	printf("r--=%u\n",r);
	
}
	

