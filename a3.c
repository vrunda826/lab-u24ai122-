//program to calculate simple interest
#include<stdio.h>
int main()
{   int gross_salary,hra,da,main_salary,other_allowances;
     printf ("enter value of main_salary\n");
     scanf("%d", &main_salary);
     printf ("enter value of da\n");
     scanf("%d", &da);
     printf("enter value of hra \n");
     scanf("%d", &hra);
     printf("enter value of other_allowances\n");
     scanf("%d", &other_allowances);
     gross_salary=main_salary+hra+da*30+other_allowances;
     printf("gross salary is %d\n", gross_salary);
     
  
  return 0;
}