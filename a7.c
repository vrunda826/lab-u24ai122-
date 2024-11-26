#include<stdio.h>
int main()
{
// program to calculate area of triangle 
float Base,Height,Area;
printf("enter value of Base of triangle\n");
scanf("%f", &Base);
printf ("enter value of Height of triangle \n");
scanf("%f", &Height);
Area=Base*Height/2;
printf("Area=%f\n", Area);

return 0;
}