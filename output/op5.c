#include<stdio.h>
int main()
{
	int a=1,b=2;
	a+=b;
	printf("a=%d\n",a);
	a-=b;
	printf("a=%d\n",a);
	a=10;b=20;
	a^=b;
	return 0;
}
