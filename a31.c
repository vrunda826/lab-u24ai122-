#include<stdio.h>
int main()
{
	int a,n,y=0;
	printf("Enter any number of N digit\n");
	scanf("%d", &a);
	while(a>0)
	{
		n=a%10;
		y=y+n;
		a=a/10;
	}
	printf("The sum of individual digits of N digit number is %d.", y);
	return 0;
}
