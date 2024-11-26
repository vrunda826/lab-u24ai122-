#include<stdio.h>
int main()
{
	int matrix1[3][3],multi[3][3],matrix2[3][3],i,j,k,z;
	for(i=0; i<3; i++)
	{
		printf("\nenter %d row elements of 1st matrix\n", i+1);
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix1[i][j]);
			multi[i][j]=0;
		}
		
		printf("enter %d row elements of 2nd matrix\n", i+1);
		for(k=0; k<3; k++)
		{
			scanf("%d", &matrix2[i][k]);
			
		}}
		for(i=0; i<3; i++)
    	{
	   for(j=0; j<3; j++)
		{	
		for(z=0; z<3; z++)
			{
			multi[i][j]+=matrix1[i][z]*matrix2[z][j];
	     	}
	}}
	for(i=0; i<3; i++)
	{
		printf("\n%d\t", multi[i][0]);
		printf("%d\t", multi[i][1]);
		printf("%d\t", multi[i][2]);
	}
	return 0;
}
