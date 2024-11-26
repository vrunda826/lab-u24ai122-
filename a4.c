//program to conver Fahrenheit to centigrade
#include<stdio.h>
int main()
{   int f,c;
     printf ("enter temperature in fehranheit\n");
     scanf("%d", &f);
     c=(f-32)5/9;
     printf("the temperature in centigrade is %d", c);
     
  
  return 0;
}