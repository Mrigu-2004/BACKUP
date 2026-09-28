#include<stdio.h>
#include<math.h>
int main()
{

float a,b,c,d,x1,x2;
printf("Enter 3 nos.");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if (a>0)
{
	if (d<0)
	printf("Roots are imaginary");
	if (d==0)
	{
	
	x1=-b/(2.0*a);
	x2=-b/(2.0*a);
	printf("roots are equal x1=%f x1=%f",x1,x2);
}
if (d>0)
{

printf("roots are real");
x1=-b+(sqrt(d)/(2*a));
x2=-b-(sqrt(d)/(2*a));
printf("values are x1=%f b=%f",x1,x2);
	
}
}
}
