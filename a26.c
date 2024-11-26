
#include<stdio.h>
int main()
{
   int a=0,i,N;
   printf("enter value of N\n");
   scanf("%d", &N);
   for(i=1; i<=N; i=i+2)
   {
   a=a+i;
   }
   printf("odd sum=%d\n", a);
   a=0;
  for(i=0; i<=N; i=i+2)
   {
   a=a+i;
   }
   printf("even sum=%d", a);
   
return 0;
}