#include<stdio.h>
int main()
{
	int max=0,smax=0,i,N;
	printf("how many numbers are you going to enter\n");
	scanf("%d", &N);
	int num[N];
	for(i=0; i<N; i++)
	{
	   scanf("%d", &num[i]);
	   if(num[i]>max)
	  {
	   smax=max;
	   max=num[i];
      }
	  else if(num[i]<max && smax<num[i])
	   {
	   smax=num[i];
       }
	}
	printf("maximum number is %d\n", max);
	printf("second maximum number is %d", smax);
	return 0;
}
