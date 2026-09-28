#include<stdio.h>
int main()
{
int ch,a,b,s,d,m,di,r;
printf("Enter your choice(1-Addition 2-Subtraction 3-MUltiply 4-Division )");
scanf("%d",&ch);
printf("enter 2 nos-");
scanf("%d %d",&a,&b);
switch(ch)
{
	case 1:
		{
		
	r=a+b;
	printf("RESULT:%d",r);
	break;
}
	case 2:
		{
		
	r=a-b;
	printf("RESULT:%d",r);
	break;
}
	case 3:
		{
		
	r=a*b;
	printf("RESULT:%d",r);
	break;
}
	case 4:
		{
		
	r=a/b;
	printf("RESULT:%d",r);
	break;
}
	default:
		printf("Case value mismatch");
		
}
printf("\n RESULT:%d",r);
}
