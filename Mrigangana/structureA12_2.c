#include<stdio.h>
int main()
{
typedef struct student
{
	int rollno;
	char name[20];
	int score;
}std;
int n,i; struct student s;
printf("Enter no. of students data");
scanf("%d",&n);
for (i=0;i<n;i++)
{
	scanf("%d%s%d",s[i].rollno,s[i].name,s[i].score)
}
std *
