#include<stdio.h>
int main()
{
int n,num[n],m=99999,M=0,i=0;
	printf("how many numbers are you going to enter?\n");
	scanf("%d", &n);
	for(i=0; i<=n-1; i++)
	{
		scanf("%d", &num[i]);
		if(num[i]>=M)
		{
		M=num[i];
		}
		if(m>=num[i])
		{
		m=num[i];
		}
	}
	printf("maximum number is %d and minimum is %d", M,m);
	return 0;
}
