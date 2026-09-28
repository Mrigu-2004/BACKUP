#include<stdio.h>
int main() 
{
	int a;
	float b;
	char c;
	double d;
	printf("Enter an integer value");
	scanf("%d",&a);
	printf("Enter float value,character value,double value");
	scanf("%f %c %lf",&b,&c,&d);
	prinf("Value of a=%d,value of b=%f,value of c=%c , value of d=%d",a,b,c,d);
	return 0;
	
}
