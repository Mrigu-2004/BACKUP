#include<stdio.h>
#include<stdlib.h>
int main()
{

typedef struct student
{
	char name[100];
	int roll;
}std;
int n,i, *p;
	printf("Enter no of student");
	scanf("%d",&n);
	p=(std*)malloc(n*sizeof(std));
	for (i=0;i<n;i++)
	{
		printf("Enter %d student data \n",i+1);
		scanf("%s%d",(p+i)->name,&(p+i)->roll);
	}
int r;
printf("Enter a roll");
	scanf("%d",&r);
	rolle(std,r);
}

void rolle(std *p,int r)
{
	int i;
	/*int n;
	printf("Enter no of student");
	scanf("%d",&n);
	p=(std*)malloc(n*sizeof(std));
	for (i=0;i<n;i++)
	{
		printf("Enter %d student data \n",i+1);
		scanf("%s%d",(p+i)->name,&(p+i)->roll);
	}
//	printf("Enter a roll");
	//scanf("%d",&r);*/
	for (i=0;i<n;i++)
	{
		if ((p+i)->roll==r)
		printf("%s %d",(p+i)->name,(p+i)->roll);
	}
}
	
}
