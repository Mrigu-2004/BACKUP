#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for (i=0;i<n;i++)
	{
		printf("Element=%d\n",a[i]);
		printf("Memory location=%u\n",&a[i]);
	}
}
	

