#include<stdio.h>
int main()
{
	int matrix[3][3],i,j,k;
	for(i=0; i<3; i++)
	{
		printf("\nenter %d row elements\n", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix[j][i]);
		}
	}
	for(k=0; k<3; k++)
	{
		printf("%d\t", matrix[k][0]);
		printf("%d\t", matrix[k][1]);
		printf("%d\n", matrix[k][2]);
    }
	
	return 0;
}
