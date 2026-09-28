#include<stdio.h>
#include<malloc.h>
int main()
{

int n,l;
int *element;
printf("No. of elements");
scanf("%d",&n);
element=(int*)malloc(n*sizeof(int));
int i;
for (i=0;i<n;i++)
{
	scanf("%d",(element+i));
}
l=*element;
for (i=1;i<n;i++)
{

if (*(element+i)>l)
l=*(element+i);
}
printf("Largest element=%d",l);
}
