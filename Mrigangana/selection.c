#include<stdio.h>
void selection(int,int[]);
int main()
{
int x,i,arr[20];
printf("Enter no. of elements of array");
scanf("%d",&x);
for	(i=0;i<x;i++)
{
	scanf("%d",&arr[i]);
}
selection(x,arr);
for	(i=0;i<x;i++)
{
	printf("%d \n",arr[i]);
}
}
	void selection(int n,int a[])
	{
		int i,j,min_pos;
		for (i=0;i<n-1;i++)
		{
			min_pos=i;
			for (j=i+1;j<n;j++)
			{
				if (a[j]>a[min_pos])
				min_pos=j;
			}
			if (i!=min_pos)
			{
				a[i]=a[i]+a[min_pos];
				a[min_pos]=a[i]-a[min_pos];
				a[i]=a[i]-a[min_pos];
			}
			}
		}
	

