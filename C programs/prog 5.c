#include<stdio.h>
int main(){
	int yr;
	printf("Enter the year:");
	scanf("%d",&yr);
	if (yr%400==0)
	{
	printf("year %d is a leap year",yr); 
    }
else if(yr%100==0)
    {
	printf("year %d is not a leap year",yr);
	
	}	
	else if (yr%4==0)
{
	printf("year %d is a leap year",yr);
}
else
{
	printf("year %d is not a leap year",yr);
	
}
return 0;

}
