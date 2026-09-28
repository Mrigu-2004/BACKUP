#include<stdio.h>
int main()
{
	int a[20],i,j,tp,over=4;
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<5/2;i++)
	{
		tp=a[i];
		a[i]=a[over];
		a[over]=tp;
		over--;
	}
	for (i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
