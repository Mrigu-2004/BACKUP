#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,flag=0,c=0;
for (i=2;i<=100;i++)
{
	for (j=2;j<=sqrt(i);j++)
	{
		if (i%j==0)
		{
			flag=1;
			break;
		}
	}
		if (flag!=1)
		printf("\n i=%d is prime",i);
		flag=0;
	}
	return 0;
}

