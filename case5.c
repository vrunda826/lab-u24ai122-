#include<stdio.h>
int fibonacci(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
  int num,n=10000,i,count=0;
  printf("enter a number\n");
  scanf("%d", &num);
  for(i=1; i<n; i++)
  {
  	if(num==fibonacci(i))
  	{
  	  printf("IsFibo\n");
	  count++;
  	  break;
	}
  }
  if(count==0)
	printf("IsNotFibo\n");
	return 0;
}