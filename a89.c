/*WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.*/
#include<stdio.h>
int *copy(int array1[], int array2[],int n)
{
    int *ptr1=array1, *ptr2=array2;
    for(int i=0; i<n; i++)
    {
       *(ptr2+i)=*(ptr1+n-i-1);
    }
    return ptr2;
}
int main()
{
    int n;
    printf("enter number of elements:\n");
    scanf("%d", &n);
    int array1[n],array2[n];
    printf("enter numbers:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t", *(copy(array1,array2,n)+i));
    }
    return 0;
}