/*WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.*/
#include<stdio.h>
#include<string.h>
int count(char *ptr, int x)
{
    int i,c=0;
 for (i = 0; i <x; i++)
 {
    if(*(ptr+i)==' ')
    c++;
 }
 return c;
}
int main()
{
 char string[30], *ptr;
 printf("Enter senetnce\n");
 gets(string);
 int x;
 x=strlen(string);
 ptr=string;
 printf("%d words are there in the string\n", count(ptr,x)+1);
return 0;
}
