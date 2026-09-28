#include<stdio.h>
	int main()
	{
	int n,i,j,t;
	printf("No of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter elements into the array:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
    }
	printf("\n Elements of the array before sorting:");
		for (i=0;i<n;i++)
	{
		printf("%d \n ",a[i]);
		
    }
    for (i=0;i<=n-1;i++)
    {
    	for (j=0;j<n-i-1;j++)
    	{
    		if (a[j]<a[j+1])
    		{
    			t=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t;
    			
			}
		}
	}
	printf("\n Elements of the array after sorting:");
		for (i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
		
    }
}

