#include<stdio.h>
int NCR(int n, int r)
{
  return factorial(n)/(factorial(r)*factorial(n-r));
}
int factorial(n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{
	int n,r;
	printf("enter value of n and r for doing NCR\n");
	scanf("%d%d", &n,&r);
	printf("%d", NCR(n,r));
	return 0;
}
