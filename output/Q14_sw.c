#include<stdio.h>
int main()
{
	int i=3;
	switch(i)
	{
		printf("outside");
		case 1:printf("In 1");
		break;
		case 2:printf("In 2");
		break;
		default:printf("in others");
	}
	return 0;
}
