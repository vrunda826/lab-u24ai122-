/*WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.*/
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("LNMIITSTUDENT.DAT", "a");
    char string[20];
    gets(string);
    fprintf(ptr, "%s", string);
    fclose(ptr);
}