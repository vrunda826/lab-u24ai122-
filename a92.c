/*WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements:\n");
    scanf("%d", &n);
    int array[n],*ptr=array,*max;
    printf("enter array:\n");
    *max=0;
    for(i=0; i<n; i++)
    {
     scanf("%d", &array[i]);
     if(*(ptr+i)>=*max)
      {
        *max=*(ptr+i);
      }
    }
   printf("biggest number is %d", *max);
    return 0;
}
