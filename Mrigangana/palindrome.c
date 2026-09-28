#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	printf("Enter a string");
	gets(str);
	int len=strlen(str),flag,i;
	for (len=0;str[len];len++);
	for (i=0;str!='\0';i++)
	{
		ch=str[i];
		if (str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
		
	}
	if (flag==0)
	printf("String=%s is palindrome",str);
	else
	printf("String=%s is not palindrome",str);
	
	
}

