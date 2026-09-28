#include<stdio.h>
int main()
{
	int a=1,b=1,c=0,d=0,e=0;
	if (a--||--b)
	{
		printf("\n if...");
		printf("\n a=%d b=%d",a,b);
	}
	else
	{
		printf("\n else...");
		printf("\n a=%d b=%d",a,b);
		
	}
	a=1,b=1;
	if (a-- && b--)
	{
		printf("\n if..");
		printf("\n a=%d b=%d",a,b);
	}
}
