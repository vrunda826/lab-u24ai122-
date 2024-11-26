#include<stdio.h>
int main()
{
	int n,i,j,minimum=0;
 printf("how many elements are you going to enter?\n");
 scanf("%d", &n);
 int array[n];
 printf("Enter an array\n");
 for(i=0; i<n; i++)
 {
 	scanf("%d", &array[i]);
 }
 for(i=0; i<n; i++)
 {
    minimum=array[i];
    for(j=i+1; j<n; j++)
    {
    	if(array[j]<minimum)
    	{
		minimum=array[j];
    	array[j]=array[i];
    	array[i]=minimum;
        }
    }
 }
 for(i=0; i<n; i++)
 {
 	printf("%d\t", array[i]);
 }
	return 0;
}
