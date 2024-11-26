#include<stdio.h>
int main()
{
	int number[10],sum=0,i;
	printf("enter 10 integers\n");
	for(i=0; i<10; i++)
	{ scanf("%d", &number[i]);
	  sum=sum+number[i];
	}
	printf("sum of entered integer is %d", sum);
 return 0;
}
