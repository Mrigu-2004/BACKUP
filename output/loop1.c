#include<stdio.h>
int main()
{
	int i;
	for (i=1;i<=10;i++)
	{
		printf("Within for loop entrycontrolled loop1 \n");
		printf("i=%d \n",i);
		
	}
	printf("out of for loop---i=%d",i);
	while(i<20)
	{
		printf("Within while loop---entry controlled loop2\n");
		printf("i=%d\n",i);
		i++;
	}
	printf("out of the while loop---i=%d",i);
	return 0;
}
