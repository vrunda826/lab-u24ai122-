#include<stdio.h>
int main()
{
 int a,r,rev=0,y;
 printf("Enter a number\n");
 scanf("%d", &a);
 y=a*2;
 while(a!=0)
  {
  r=a%10;
  rev=rev*10+ r;
  if(a==0)
  break;
  a=a/10;
  }
 if(rev==y/2)
  {
 printf("number is palindrome");
  }
 else
  {
 printf("number is not palindrome");
  }
return 0;   
}
