#include<stdio.h>
int main()
{
	int n,a[20],t,i,j;
	printf("Enter no. of array elememnts");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			}
			for (i=0;i<n/2;i++)
			{
				t=a[i];
				a[i]=a[n-i-1];
				a[n-i-1]=t;
			}
			for (i=0;i<n;i++)
	{
		printf("%d\n ",a[i]);
			}
			
}
