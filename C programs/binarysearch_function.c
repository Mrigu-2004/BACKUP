#include<stdio.h>
void binary(int[],int,int);
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
	binary(a,x,v);
}
	void binary(int a[],int n,int val)
	{
		int i,flag,f,l,mid;
		f=0;
		l=n-1;
		
		while(f<=l)
		{
		mid=(f+l)/2;
		if (a[mid]==val)
		{
		
		printf("\n Element is found");
		break;
	}
		else if (a[mid]>val)
		l=mid-1;
		else
		f=mid+1;
	}
	if (f>l)
	printf("Element not found");
		
	}
	
	
