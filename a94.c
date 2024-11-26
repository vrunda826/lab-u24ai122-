/*ssWRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
POINTERS.FOR EXAMPLE,
ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”*/
#include<stdio.h>
#include<string.h>
char* copy(char string1[], char string2[],int n)
{
    char *ptr1=string1, *ptr2=string2;
    for(int i=0; i<n; i++)
    {
       *(ptr2+i)=*(ptr1+n-i-1);
    }
    return ptr2;
}
int main()
{
    char string1[30],string2[30];
    printf("enter string\n");
    gets(string1);
    int n=strlen(string1);
    for(int i=0; i<n; i++)
    {
        printf("%c", *(copy(string1,string2,n)+i));
    }
    return 0;
}