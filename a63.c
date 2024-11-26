#include<stdio.h>
int main()
{
	int matrix[3][3],i,j,max=0,min=100000;
	for(i=0; i<3; i++)
	{
		printf("\nenter %d row elements\n", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j]<min)
			{
				min=matrix[i][j];
			}
			if(matrix[i][j]>max)
			{
				max=matrix[i][j];
			}
		}
	}
	printf("maximum element is %d and minimum element is %d\n", max,min);
	return 0;
}
