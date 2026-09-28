#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t,m;
	printf("enter values of principle, rate and time");
	scanf("%f %f %f",&p,&r,&t);
	m=p*pow((1+r/100),t);
	printf("maturity amt=%f",m);
	return 0;
	
	
	

}
