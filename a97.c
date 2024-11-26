/*WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char string[30], *ptr=string;
    char str[5]={'a','e','i','o','u'};
    gets(string);
    int count=0,n=strlen(string);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
      if(*(ptr+i)==str[j])
      {
        (count)++;
      }
    }
    printf("number of vowels is %d", count);
}