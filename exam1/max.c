#include<stdio.h>
float max(float [],int );
int main()
{
	int n,i;float a[10];
	printf("Enter n:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	max(a,n);
}
	float max(float arr[],int x)
	{
		float l=0;int i;
		l=arr[0];
		for (i=0;i<x;i++)
		{
			if (arr[i]>l)
			l=arr[i];
		}
		printf("Largest=%f",l);
	}
	


