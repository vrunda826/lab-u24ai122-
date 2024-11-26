//WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
//POINTERS.
#include<stdio.h>
#include<string.h>
int main()
{int n,i,j;
printf("enter number of strings:\n");
scanf("%d", &n);
  char string[n][30], *ptr[n], *temp;
  printf("enter strings\n");
   for(i=0; i<=n; i++)
   {
    gets(string[i]);
    ptr[i]=string[i];
   }
 for(i=0; i<=n-1 ; i++){
  for(j=0; j<=n-i-1; j++){
    if(strcmp(string[j],string[j+1])>0)
    {
      temp=ptr[j];
      ptr[j]=ptr[j+1];
      ptr[j+1]=temp;
    }
  }
 }
 
  for (i = 0; i <=n; i++)
  {
    printf("%s\t", string[i]);
  }
  return 0;
}
