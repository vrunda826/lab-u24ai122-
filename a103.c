/* WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.*/
#define diff(x,y) x-y
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers to check bigger number\n");
    scanf("%d%d", &num1,&num2);
    if(diff(num1,num2)>0)
    printf("bigger number is %d", num1);
    else
    printf("bigger number is %d", num2);
    return 0;
}