#include<stdio.h>
int main()
{
	int yr;
	printf("Enter year:");
	scanf("%d",&yr);
	(yr%400==0&&yr%100!=0||yr%4==0)?printf("Leap year"):printf("Non-leap year");
}
