#include<stdio.h>
int main()
{
 int m,p,c,cm,ee;
 printf("enter marks of mathematics out of 200\n");
 scanf("%d", &m);
 printf("enter marks of physics out of 200\n ");
 scanf("%d", &p);
 printf("enter marks of chemistry out of 200\n");
 scanf("%d", &c);
 printf("enter marks of entrance examination out of 100\n");
 scanf("%d", &ee);
 cm=m/2+p/2+c/2+ee;
 printf("cutoff marks is %d", cm);
return 0;}