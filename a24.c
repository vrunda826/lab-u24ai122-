
#include<stdio.h>
int main()
{
 int x,n,y,power=1,i=1;
 x=0,n=0,y=0;
 printf("enter x and n\n");
 scanf("%d%d", &x,&n);
 if(n==1)
   {
   printf("y=%d", 1+x);
   }
 else if(n==2)
   {
   printf("y=%d", 1+x/n);
   }
else if(n==3)
   {
    for(i=1; i<=n; i++)
    {
     power=power*x;
    }
   printf("y=%d", 1+power);
   }
else
   {
   printf("y=%d", 1+n*x);
   }
return 0;
}