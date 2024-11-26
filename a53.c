#include<stdio.h>
int main()
{
	long int i,j,r,z,x;
	printf("enter how many rows you want to see\n");
	scanf("%d", &r);
	for(i=1; i<=r; i++)
	{
		for( j=1; j<=(2*r-1); j++)
		{
			if(j<=(r-i) || j>(r+i-1))
			{
			printf(" ");
		    }
			else
		   {
			printf("*");
		   }
		}
		printf("\n");
	}
	for( z=1; z<=r-1; z++)
	{
		for( x=1; x<=2*r-z-1; x++)
		{                              
			if(x<=z)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
