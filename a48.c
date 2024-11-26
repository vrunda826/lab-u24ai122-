#include<stdio.h>
int main()
{
	int i,j,r;
	printf("enter how many rows you want to see\n");
	scanf("%d", &r);
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=r; j++)
		{
			if(j<r-i+1)
			printf(" ");
			else
			printf("%d", j+i-r);
		}
		printf("\n");
	    
    }
	return 0;
}
