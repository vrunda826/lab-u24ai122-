/* WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.*/
#include<stdio.h>
int *copy(int array1[], int array2[],int n)
{
    int *ptr1=array1, *ptr2=array2;
    for(int i=0; i<n; i++)
    {
       *(ptr2+i)=*(ptr1+i);
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