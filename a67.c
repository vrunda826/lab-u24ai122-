#include<stdio.h>
int main()
{
	int matrix1[3][3],minus[3][3],matrix2[3][3],i,j,k,z;
	for(i=0; i<3; i++)
	{
		printf("\nenter %d row elements of 1st matrix\n", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
		printf("enter %d row elements of 2nd matrix\n", i+1);
		for(k=0; k<3; k++)
		{
			scanf("%d", &matrix2[i][k]);
			minus[i][k]=matrix1[i][k]-matrix2[i][k];
		}
	}
	for(z=0; z<3; z++)
	{
		printf("\n%d\t", minus[z][0]);
		printf("%d\t", minus[z][1]);
		printf("%d\t", minus[z][2]);
	}
	return 0;
}
