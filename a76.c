#include<stdio.h>
void evenodd(int n);
int main()
{ 
   int x;
   printf("enter a number\n");
   scanf("%d", &x);
   evenodd(x);
	return 0;
}
void evenodd(n)
{
	if(n%2==0)
	printf("even");
	else
	printf("odd");
}
