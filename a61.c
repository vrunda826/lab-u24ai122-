#include<stdio.h>
int main()
{
 int n,i=0,j=0,t=0;
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
       for(j=0; j<n; j++)
       {
		if(array[j]>array[j+1])
        {
		 t=array[j];
	     array[j]=array[j+1];
	     array[j+1]=t;
        }
       }
  }
 for(i=0; i<n; i++)
 {
 	printf("%d\t", array[i]);
 }

 return 0;
}
