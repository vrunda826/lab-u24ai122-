#include<stdio.h>
int main()
{
	int number[10],count1=0,count2=0,i;
	printf("enter 10 integers\n");
	for(i=0; i<10; i++)
	{ scanf("%d", &number[i]);
	  if(number[i]%2==0)
	   {
	   count2++;
       }
	  else
	   {
	   count1++;
       }
	}
	printf("total odd numbers are %d\n", count1);
	printf("total even numbers are %d\n", count2);
	return 0;
}
