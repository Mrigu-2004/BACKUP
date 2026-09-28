#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,flag=0;
for (i=1;i<=100;i++)
{
	for (j=2;j<=sqrt(i);j++)
	{
		if (i%j==0)
		{
			flag=1;
			break;
		}
		if (flag!=1)
		printf("i=%d is prime");
		flag=0;
	}
}
}
