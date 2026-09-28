#include<stdio.h>
int main()
{
	int i,n,l,f,a[15],mid,v;
	printf("No of elements in an array");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value to be searched");
	scanf("%d",&v);
	f=0;
	l=n-1;
	
	while(f<=l)
	{
		mid=(f+l)/2;
		if (a[mid]==v)
		{
			printf("Element %d found",a[mid]);
			break;
		}
		else if(a[mid]>v)
		l=mid-1;
		else
		f=mid+1;
	}
	if (f>l)
	printf("Element not found");
}


