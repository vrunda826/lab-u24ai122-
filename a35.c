#include<stdio.h>
int main()
{
int n,sum=0,r;
printf("Enter N digit number\n");
scanf("%d", &n);
while(n!=0)
{
	r=n%10;
	sum=sum+r;
	n=n/10;
}
if(sum>=10) 
	{ 
	  n=sum;
	  while(sum>9)
	  {
	 	r=n%10;
	 	sum=sum+r;
	 	n=n/10;
	 	
	  }
	}

printf("sum=%d", sum);
 return 0;
}
