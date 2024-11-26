#include<stdio.h>
int main()
{int factorial=1,n;
printf("enter value of n:\n");
scanf("%d", &n);
    for(int i=1;i<=n;i=i+1)
    {factorial=factorial*i;
    } 
    printf("factorial of n is %d\n", factorial);
    return 0;
    }