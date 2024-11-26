#include<stdio.h>
int main()
{
	int num[10],num1[10],i,j,sum[10];
	printf("enter numbers of first array and then of second array consecutively\n");
	for(i=0; i<10; i++)
	{
	  scanf("%d", &num[i]);
	  scanf("%d", &num1[i]);
	  sum[i]=num[i]+num1[i];
	}
	printf("sum=");
	for(i=0; i<10; i++)
	{printf("%d\t", sum[i]);
	}

	
	return 0;
}
