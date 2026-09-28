#include<stdio.h>
int main()
{
	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int *p;
	p=(int *)a;
	for (;p<=&a[3][2];p++)
	{
		printf("%d \n",*p);
		
	}
	return 0;
}
