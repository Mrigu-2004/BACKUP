#include<stdio.h>
#include<math.h>
int main()
{
	
	int i,n,flag=0,c=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if (n<2)
	{
		flag=0;
		
	}
	for (i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}
	while(c<=n)
	{
		if (flag==1)
		printf("n=%d is prime",n);
		c++;
	}
}
