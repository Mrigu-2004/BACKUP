#include<stdio.h>
#include<stdlib.h>
int search(int a[],int n,int val)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (a[i]==val)
		{
			printf("Element Found");
			break;
		}
	}
}
int main()
{
	int n,val,*a,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter value:");
	scanf("%d",&val);
	a=(int*)calloc(n,sizeof(int));
	if(a==NULL)
	{
		printf("could not allocate memory");
		exit(1);
	}
	printf("array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	search(a,n,val);
	free(a);
	return 0;
}

