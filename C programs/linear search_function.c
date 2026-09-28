#include<stdio.h>
void linear(int[],int,int);
void main()
{
	int i,x,v,a[10];
	printf("Enter no of elements of array");
	scanf("%d",&x);
	printf("Enter elements of the array");
	for (i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elememt to be searched");
	scanf("%d",&v);
	linear(a,x,v);
}
	void linear(int a[],int n,int val)
	{
		int i,flag;
		for (i=0;i<n;i++)
		{
			if (a[i]==val)
			{
				flag=1;
				break;
			}
			
		}
		if (flag==1)
		printf("Element found");
		else 
		printf("Element not found");
	}
	
	
	

	

