#include<stdio.h>
int main()
{
	int a,n=0,y=0,x;
	printf("Enter a three digit number\n");
	scanf("%d", &a);
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

	return 0;
}
