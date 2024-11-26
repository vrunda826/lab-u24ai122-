#include<stdio.h>
int main()
{
	int matrix[3][3],sum[3],i,j,k;
	for(i=0; i<3; i++)
	{
		printf("\nenter %d row elements\n", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix[i][j]);
			k+=matrix[i][j];
		}
	  sum[i]=k;
	  k=0;
	}
	printf("sum of 1st row=%d\nsum of 2nd row=%d\nsum of 3rd row=%d", sum[0],sum[1],sum[2]);
	return 0;
}
