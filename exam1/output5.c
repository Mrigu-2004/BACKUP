#include<stdio.h>
int incr(int n)
{
	static int count=0;int i;
	count=count+i;
	return(count);
}
main()
{
	int i,j;
	for (i=0;i<=4;i++)
	{
	
	j=incr(i);
	printf("j=%d",j);
}
}
