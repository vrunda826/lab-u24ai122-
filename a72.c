#include<stdio.h>
int main()
{
	int n,i,j,minimum=0,N;
 printf("how many elements are you going to enter?\n");
 scanf("%d", &n);
 int array[n], array2[n];
 printf("Enter an array\n");
 for(i=0; i<n; i++)
 {
 	scanf("%d", &array[i]);
 	array2[i]=array[i];
 }
 printf("by how much element you want to rotate an array\n");
 scanf("%d", &N);
 for(i=0; i<n; i++)
 {
 	if(i<n-N)
 	{
	 array[i+N]=array2[i];
    }
    else
    {
	array[i+N-n]=array2[i];
    }
 }
 for(i=0; i<n; i++)
 {
 	printf("%d\t", array[i]);
 }
	return 0;
}
