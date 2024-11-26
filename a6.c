#include<stdio.h>
int main()
{
 int a=3,b=7;
 printf("a=3,b=7\n");
 a=a*b;
 printf("a=a*b\n");
 printf("now a=21,b=7\n");
 b=a/b;
 printf("b=a/b\n");
 printf("now a=21,b=3\n");
 a=a/b;
 printf("a=a/b\n");
 printf("now a=7,,b=3\n");
return 0;}