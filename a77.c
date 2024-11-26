#include<stdio.h>
#define void palindrome(int a, int rev,int y, int r);
int main()
{ 
  int a,r,rev=0,y;
  printf("Enter a number\n");
  scanf("%d", &a);
  palindrome(a,rev,y,r);
	return 0;
}
void palindrome(a,rev,y,r)
{
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
}
