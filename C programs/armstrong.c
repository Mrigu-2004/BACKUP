#include<stdio.h>
#include<math.h>
int main()
{

int n=153,n1,r,f=0,s=0,n2,r1;
n1=n;
while(n1>0)
{
r=n1%10;
f=f+1;
n1=n1/10;	
}
printf("No of digits=%d",f);
n2=n;
while(n2>0)
{

r1=n2%10;
s=s+pow(r1,f);
n2=n2/10;
}
if (s==n)
printf("n=%d Is Armstrong",n);
else
printf("n=%d Is Not Armstrong",n);
}



