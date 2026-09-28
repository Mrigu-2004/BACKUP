#include<stdio.h>
#define AREA(x)(3.14*x*x)
int main()
{
	float r1=6.25,r2=2.5,a,b;
	a=AREA(r1);
	b=AREA(r2);
	printf("a=%f \n",a);
	printf("b=%f",b);
}
