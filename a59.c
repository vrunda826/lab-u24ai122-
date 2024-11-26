#include<stdio.h>
int main()
{
	int array1[10],array2[10],i,array[10],j,k,z;
		printf("enter first array\n");
	for(i=0; i<9 ;i++)
	{
		scanf("%d\t", &array1[i]);
		array[i]=array1[i];
	}
	printf("enter second array\n");
	for(j=0; j<10 ;j++)
	{
		scanf("%d\t", &array2[j]);
		array1[j]=array2[j];
		array2[j]=array[j];
	}
	printf("array 1= ");
	for(k=0; k<10; k++)
	{
	  printf("%d\t", array1[k]);
	}
	printf("\narray 2= ");
	for(z=0; z<10; z++)
	{
	  printf("%d\t", array2[z]);
	}
	return 0;
}
