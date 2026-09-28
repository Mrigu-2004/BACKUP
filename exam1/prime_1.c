#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i=2,c=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(c<=n)
	{
		if(prime(i)==1)
		{
			printf("n=%d is prime",i);
			c++;
		}
		i++;
	}
}
int prime(int n)
{
	int i,flag=1;
	if (n<2)
	{
		flag=0;
		return flag;
	}
	for (i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	 } 
	 return flag;
	
}
