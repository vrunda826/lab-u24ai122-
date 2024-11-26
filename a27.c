
#include<stdio.h>
int main()
{
  int i,n,a=0,y=0;
  printf("enter a number\n");
  scanf("%d", &n);
   for(i=2; i<n; i++)
   {
     a=n%i;
     if(a==0)
     {
       y++;
     break;
     }
   }
   

if(y==0)
{
printf("number is prime");
}
else
{
printf("number is not prime");
}
return 0;
}
