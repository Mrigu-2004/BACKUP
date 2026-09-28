#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,flag=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for (i=2;i<=sqrt(n);i++) 
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}
		if  (flag==1)
		printf("\n n=%d is not prime",n);
		else
		
		 printf("\n n=%d is prime",n);
	
}
