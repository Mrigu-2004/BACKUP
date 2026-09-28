#include<stdio.h>
int main()
{
	int a[2][2];int *p=&a;int i,j;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d",((*p)[2][2]));
		}
	}
}
