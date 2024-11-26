#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value of a\n");
scanf("%d", &a);
printf("enter value of b\n");
scanf("%d", &b);
printf("enter value of c\n");
scanf("%d", &c);
if(a>b && c>a)
{
printf("maximum number is c");
}
if(a>b && a>c)
{
printf("maximum number is a");
}
if(b>a && b>c)
{
printf("maximum number is b");
}
if(b>a && c>b)
{
printf("maximum number is c");
}
return 0;}