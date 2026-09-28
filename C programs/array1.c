#include<stdio.h>
int main()
{
	int avg=0,sum=0;
	int x;int y;
	int num[5];
	printf("Enter elements into the array");
	for (x=0;x<5;x++)
	{
		
		scanf("%d",&num[x]);
	}
	for(y=0;y<5;y++)
	{
		sum=sum+num[y];
		
	}
	printf("SUM=%d",sum);
	}

	

