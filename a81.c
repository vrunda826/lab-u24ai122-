#include<stdio.h>
int prime(int n,int i,int y,int a)
{
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
return 1;
else
return 0;	
}
int main()
{
	int i=1,n,a=0,y=0;
  printf("enter a number\n");
  scanf("%d", &n);
  printf("%d", prime(n,i,y,a));
	return 0;
}
