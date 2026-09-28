#include<stdio.h>
int main(){
	int a,g;int h;float f;
	float b;
	char c;
	double d;
	
	printf("enter an integer value:");
	scanf("%d",&a);
	printf("enter a float value, a character value and a double value");
	scanf("%f %c %lf",&b,&c,&d);
	printf("value of a=%d,b=%f,c=%c,d=%lf",a,b,c,d);
	
	return 0;
}
