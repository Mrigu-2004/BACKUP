#include<stdio.h>
int hcf(int,int);
int main()
{
	int a,b,findhcf,c,d;
	printf("Enter two nos");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	findhcf=(hcf(a,b),hcf(c,d));
	printf(" hcf=%d",findhcf);
	
}
int hcf(int n1,int n2)
{
	if (n1==n2)
	return n1;
	else if (n1>n2)
	n1=n1-n2;
	else if (n2>n1)
	n2=n2-n1;
	return hcf(n1,n2);
	
}
