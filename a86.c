#include<stdio.h>
#include<string.h>
int length(char string[])
{
	gets(string);
	int length;
	length=strlen(string);
	return length;
	
}
int main()
{
	char string[1000];
	printf("enter a text\n");
	printf("%d", length(string));
	return 0;
}
