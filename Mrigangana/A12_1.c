#include<stdio.h>
int fact(int,int*);
int main()
{
	int n,f;
	printf("Enter a number");
	scanf("%d",&n);
	fact(n,&f);
	printf("Factorial value=%d",f);
}
int fact(int x,int *fa)
{
	int i;*fa=1;
	for (i=1;i<=x;i++)
	{
		*fa=*fa*i;
	}
}
