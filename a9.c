#include<stdio.h>
int main()
{
 int t,m,s,h;
 printf("enter the hours of time\n");
 scanf("%d", &h);
 printf("enter the minutes of time\n ");
 scanf("%d", &m);
 printf("enter the second of time\n");
 scanf("%d", &s);
 t=h*3600+m*60+s; 
 printf("total time in seconds is %d", t);
return 0;}