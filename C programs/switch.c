#include<stdio.h>
int  main()
{
	int ch,a,b;float r;
	printf("Enter your choice(1-Adition 2-Subtraction 3-Multiplication)");
	scanf("%d",&ch);
	printf("Enter two nos");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		
		case 1:r=a+b;
		printf("result=%f",r);
		break;
		case 2:r=a-b;
		printf("result=%f",r);
		break;
		case 3:r=a*b;
		printf("result=%f",r);
		break;
		default:printf("Invalid choice");
		
	}
	printf("RESULT=%f",r);
}
