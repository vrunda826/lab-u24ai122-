#include<stdio.h>
int main()
{
	int i,j,r;
	printf("enter how many rows you want to see");
	scanf("%d", &r);
	for(i=1; i<=r; i++)
	{
		for(j=65; j<=(64+i); j++)
		{
			printf("%c", j);
		}
		printf("\n");
	    
    }
	return 0;
}
