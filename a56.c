#include<stdio.h>
int main()
{
	int number[10],count1=0,count2=0,i,count3=0;
	printf("enter 10 integers\n");
	for(i=0; i<10; i++)
	{ scanf("%d", &number[i]);
	 if(number[i]<0)
	  count1++;
	 else if(number[i]>0)
	  count3++;
	 else
	  count2++;
	}
  printf("total positive numbers are %d\n", count3);
  printf("total zero numbers are %d\n", count2);
  printf("total negative numbers are %d\n", count1);
  return 0;
}
