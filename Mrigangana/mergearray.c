#include<stdio.h>
int main()
{
	int a[10],b[10],c[20],i,j;
	printf("Enter 1st array");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 2nd array");
	for (i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<5;i++)
	{
		c[i]=a[i];
	}
	for (j=0;j<5;j++)
	{
		c[i++]=b[j];
	}
	for (i=0;i<10;i++)
	{
		printf("%d\n",c[i]);
	}
	
}
