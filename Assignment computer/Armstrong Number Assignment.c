#include<stdio.h>
#include<math.h>
int main()
{
	int n,   n1,s=0,no,r,n2;
	printf("Enter a number:");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		n1=n1/10;
		no++;
	}
	printf("Number of digits=%d \n ",no);
	n2=n;
	while(n2!=0)
	{
		r=n2%10;
		s=s+pow(r,no);
		n2=n2/10;
	}
	if (s==n)
	printf("n=%d Is Armstrong",n);
	else
	printf("n=%d Is Not Armstrong",n);
	return 0;
}

	

