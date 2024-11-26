#include<stdio.h>
int main()
{
    char string[30],strcopy[30],strrev[30],strcon[40],strcom[30];
    int count=0,y=0,n=0,i;
    printf("enter string here:\n");
    gets(string);
    printf("enter string here with you have to concanate the firt string:\n");
    gets(strcon);
     printf("enter string here with whom you have to compare the firt string:\n");
    gets(strcom);
     for ( i = 0;(strcon[i])!='\0'; i++)
    {
       count++;
    }
     for ( i = 0;(string[i])!='\0'; i++)
    {
       n++;
    }
    for (i = 0;i<n; i++)
    {
        strcopy[i]=string[i];
        strrev[i]=string[n-i-1];
        strcon[count+i]=string[i];
    }
     
    for (i = 0;i<n; i++)
    {
       if(string[i]!=strcom[i])
       {y=string[i]-strcom[i];
       break;}
    }
    printf("copied string: ");
    printf("%s\n", strcopy);
    printf("reversed string: ");
    printf("%s\n", strrev);
    printf("concatenated string: ");
     printf("%s\n", strcon);
    printf("result of comparison: %d", y);
return 0;
}
