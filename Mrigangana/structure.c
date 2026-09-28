#include<stdio.h>
#include<malloc.h>
int main()
{
int n,i,m;
typedef struct student
{
	int roll;
	int marks;
	
}std;
std *ptr;
printf("Enter no. of students data to be entered");
scanf("%d",&n);

 ptr=(std*)malloc(n*sizeof(std));
for (i=0;i<n;i++)
{
	scanf("%d%d",&(ptr+i)->roll,&(ptr+i)->marks);
}
for (i=0;i<n;i++)
{
	printf("%d%d",(ptr+i)->roll,(ptr+i)->marks);
}
m=ptr->marks;
for (i=1;i<n;i++)
{
	if ((ptr+i)->marks>m)
	m=(ptr+i)->marks;
}
for (i=0;i<n;i++)
{
	if (m==(ptr+i)->marks)
	printf("\n %d%d",(ptr+i)->roll,(ptr+i)->marks);
}
}
