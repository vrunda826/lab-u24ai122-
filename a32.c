#include<stdio.h>
int main()
{
	int n,num[n],sm=0,M=0,i=0;
	printf("how many numbers are you going to enter?\n");
	scanf("%d", &n);
	for(i=0; i<=n-1; i++)
	{
		scanf("%d", &num[i]);
		if(num[i]>M)
		{
		sm=M;
		M=num[i];
	    }
		else if(num[i]>sm && num[i]<M)
		{sm=num[i];
		}
	}
	printf("maximum number is %d and second maximum is %d", M,sm );
	
	return 0;
	
}
