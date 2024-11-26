#include<stdio.h>
int main()
{
	int a,i,f;
	printf("enter a number whose factors you want to see\n");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		f=a%i;
		if(f==0)
		{printf("%d,", i);
		}
	}
	return 0;
}
