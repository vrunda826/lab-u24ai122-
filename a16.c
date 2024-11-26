#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value of a\n");
scanf("%d", &a);
printf("enter value of b\n");
scanf("%d", &b);
printf("enter value of c\n");
scanf("%d", &c);
if(a>b)
{if(c>a)
    {
    printf("maximum number is c");
    }else{
    printf("maximum number is a");
    }
}
else
{if(c>b)
   {
   printf("maximum number is c");
   }else{
   printf("maximum number is b");
   }
}
return 0;}