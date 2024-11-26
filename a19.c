#include<stdio.h>
int main()
{
char ch;
printf("enter any alphabet\n");
scanf("%c", &ch);
'A'<=ch && ch<='Z'? printf("alphabet is upper case"): printf("alphabet is lower case");
return 0;
}