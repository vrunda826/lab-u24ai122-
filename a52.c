#include<stdio.h>
int main()
{
	int i,j,n,z;
	printf("enter how many rows you want to see\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{   
		for(j=1; j<=n; j++)
		{
		if(j>n-i)
		printf("%d",j+i-n);
		else
		printf(" ");
		}
		for(z=i-1; z>=1 && i>1; z--)
		{
		printf("%d", z);
		}
		printf("\n");
	    
    }
	return 0;
}
