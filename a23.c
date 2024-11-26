#include<stdio.h>
int main()
{int number,exponent,power=1,i=1;
printf("enter a number\n");
scanf("%d", &number);
printf("enter a exponent\n");
scanf("%d", &exponent);
for(i=1; i<=exponent ; i++)
 {
 power=power*number;
 }
 printf("power=%d", power);
    return 0;
    }