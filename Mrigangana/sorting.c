#include<stdio.h>
int sort(int*,int);
int main()
{
	int a[20],n,i;
	printf("No. of elements");
	scanf("%d",&n);
	printf("Elements in array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
sort(a,n);
for (i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
}
}
int sort(int *a,int n)
{
	int i,j,t;
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (*(a+j)>*(a+j+1))
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
	}
}
