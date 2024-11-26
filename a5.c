#include<stdio.h>
int main()
{
 int a=3,b=7,c;
 printf("a=3,b=7\n");
 c=a;
 printf("c=a\n");
 printf("c=%d\n", c);
 a=b;
 printf("a=b\n");
 printf("a=%d\n", a);
 b=c;
 printf("b=c\n");
 printf("b=%d", b);
 
 
return 0;}