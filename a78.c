#include<stdio.h>
void armstrong(int a, int x, int n, int y);
int main()
{ 
  int a,x,n=0,y=0;
  printf("enter a three digit number\n");
  scanf("%d", &a);
  armstrong(a,x,n,y);
	return 0;
}
void armstrong(a,x,n,y)
{
	x=a*2;
	while(a>0)
	{   n=a%10;
		y= y+(n*n*n);
		a=a/10;
		
    }
    if(y==x/2)
    {
	printf("your number is armstrong\n");
    }
    else 
    {
	printf("your number is not armstrong\n");
    }
}
