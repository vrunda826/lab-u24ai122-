#include<stdio.h>
int main()
{
 int m,h,s,t;
 printf("enter total time in seconds\n");
 scanf("%d", &t);
 h=t/3600;
 m=(t-h*3600)/60;
 s=t-h*3600-m*60;
 printf("time is %d hours,%d minutes %d seconds\n", h,m,s);
return 0;}