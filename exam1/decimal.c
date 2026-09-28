#include<stdio.h>
int dec(int n)
{
	if (n==0)
	return 0;
	else
	return ((n%2)+10*dec(n/2));
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int b=dec(n);
	printf("b=%d",b);
}
