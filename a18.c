#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a,b,c\n");
scanf("%d%d%d", &a,&b,&c);
(a>b) ?( (c>a) ? printf("c is maximum"):printf("a is maximum")) : ((c>b) ? printf("c is maximum"):printf("b is maximum"));
return 0;
}