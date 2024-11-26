#include<stdio.h>
int main()
{
 int d,m,s,h,et;
  et=31558150;
  printf("earth's total time of period of revolution in seconds is %d\n", et);
  d=et/86400;
  h=(et-d*86400)/3600;
  m=(et-d*86400-h*3600)/60;
  s=et-d*86400-h*3600-m*60;
  printf("earth's time is %d days %d hours %d minutes %d seconds\n",d,h,m,s);
return 0;}