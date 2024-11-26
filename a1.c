//program to calculate simple interest
#include<stdio.h>
int main()
{   float p,r,t,simple_interest;
     printf ("enter value of principal amount\n");
     scanf("%f", &p);
     printf ("enter value of rate of interest in percentage\n");
     scanf("%f", &r);
     printf("enter value of time of duration in years\n");
     scanf("%f", &t);
    simple_interest=p*r*t/100;
  printf ("simple interest is %f\n", simple_interest);
  return 0;
}