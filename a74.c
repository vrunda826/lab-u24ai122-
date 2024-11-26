#include<stdio.h>
int main()
{
 int i,j,minimum=0;
 int array1[]={2,3,5,7,8,11,14};
 int array2[]={4,6,9,13,17};
 int array[12];
 for(i=0; i<12; i++)
 {
 	if(i<8)
 	{
	array[i]=array1[i];
    }
 	else
 	array[i]=array2[i-8];
 }
 for(i=0; i<12; i++)
 {
    minimum=array[i];
    for(j=i+1; j<12; j++)
    {
    	if(array[j]<minimum)
    	{
		minimum=array[j];
    	array[j]=array[i];
    	array[i]=minimum;
        }
    }
 }
 printf("sorted array=");
 for(i=0; i<12; i++)
 {
 	printf("%d\t", array[i]);
 }
	return 0;
}
