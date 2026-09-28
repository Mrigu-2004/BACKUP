#include<stdio.h>
#include<malloc.h>
int main()
{
	typedef struct student
	{
		char name[50];
		int roll;
	}std;
	int n;int r,i;
	printf("Enter no. of students");
	scanf("%d",&n);
	std *p;
	p=(std*)malloc(n*sizeof(std));
	for (i=0;i<n;i++)
	{
		printf("Enter %d student data \n",i+1);
		scanf("%s%d",(p+i)->name,&(p+i)->roll);
	}
	printf("Enter a roll");
	scanf("%d",&r);
	for (i=0;i<n;i++)
	{
		if ((p+i)->roll==r)
		printf("%s %d",(p+i)->name,(p+i)->roll);
	}
}
	

