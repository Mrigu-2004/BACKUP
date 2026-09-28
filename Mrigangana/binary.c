#include<stdio.h>
int binary(int);
int main()
{
int x;
printf("Enter a no.");
scanf("%d",&x);
int b=binary(x);
printf("Binary equivalent=%d",b);	
}
int binary(int n)
{

if (n==0)
return 0;
else
return (n%2+10*binary(n/2));
}
