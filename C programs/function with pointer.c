#include<stdio.h>
int swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter values of a and b\n");
	scanf("%d %d",&a,&b);
	printf("Values of a and b before swaping");
	printf("\n a=%d b=%d",a,b);
	swap(&a,&b);
	printf("\n Values of a and b after swaping");
		printf("\n a=%d b=%d ",a,b);
	return 0;
	}
	int swap(int *x,int *y )
	{
		*x=*x+*y;
		*y=*x-*y;
		*x=*x-*y;
		//printf("\n Values of a and b after swaping");
		//printf("\n a=%d b=%d ",x,y);
	}
