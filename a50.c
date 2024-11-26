#include<stdio.h>
int main()
{
	int i,j,r;
	printf("enter how many rows you want to see");
	scanf("%d", &r);
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=(i); j++)
		{
			printf("%c", i+64);
		}
		printf("\n");
	    
    }
	return 0;
}
