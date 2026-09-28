#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr,*wptr;char ch;
	fptr=fopen("Test1.txt","r");
	if (fptr==NULL)
	{
		printf("File does not exist");
		exit(0);
	}
	wptr=fopen("Test2.txt","w");
	while(1)
	{
		ch=fgetc(fptr);
		if (ch==EOF)
		break;
		fputc(ch,wptr);
	}
}

