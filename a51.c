#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter how many rows or columns you want to see\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
		 if(j==i)
		 printf("1");
		 else
		 printf("0");
		}
		printf("\n");
	    
    }
	return 0;
}
