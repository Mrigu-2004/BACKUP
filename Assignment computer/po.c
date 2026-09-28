#include<stdio.h>
int main()
{
	char c='a',*cptr ,d='b',*fptr;int a=34;int b=56;int *p=&a;int *q=&b;int x;
	p=p+q;
	cptr=&c;
	fptr=&d;
	cptr=cptr*5;
	//cptr=cptr*5;
	//cptr=cptr/5;
	return 0;
}
