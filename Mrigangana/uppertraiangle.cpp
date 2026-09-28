#include<stdio.h>
int main()
{
	int i,j,a[10][10];
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(i>=j)
			printf("%d",a[i][j]);
			else
			printf("0");
		}
		printf("\n");
	}
return 0;	
}
