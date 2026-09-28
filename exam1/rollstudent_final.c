#include<stdio.h>
typedef struct student {
	char name[100];
	int roll;
}std;
void rollf(std st[],int r)
{
	int n,i;
	for (i=0;i<n;i++)
	{
		if (r==st[i].roll)
	printf("Name=%s,Roll=%d",st[i].name,st[i].roll);
}
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int i;
	std stu[800];
	printf("Enter student data");
	for (i=0;i<n;i++)
	{
		scanf("%s%d",stu[i].name,&stu[i].roll);
	}
	int r1;
	printf("Enter roll");
	scanf("%d",&r1);
	rollf(stu,r1);
}

