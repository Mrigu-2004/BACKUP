#include<stdio.h>
int main()
{
	int a[10],n,i,min_pos,j;
	printf("Enter no of elements of array");
	scanf("%d",&n);
	printf("Enter elements of the array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		min_pos=i;
		for (j=i+1;j<n;j++)
		{
			if (a[j]<a[min_pos])
			min_pos=j;
			
		}
		if (i!=min_pos)
		{
				a[i]=a[i]+a[min_pos];
		a[min_pos]=a[i]-a[min_pos];
		a[i]=a[i]-a[min_pos];
	}
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
		
	}

