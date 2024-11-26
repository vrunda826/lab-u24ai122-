#include<stdio.h>
int main()
{
	int i=99999,sum=0;
	int n[99999];
	printf("enter the numbers:\n");
	for(i=99999; i>=0; i--)
	{
		scanf("%d", &n[i]);
		sum=sum+n[i];
		if(n[i]<0)
		break;
	}
	printf("sum=%d", sum);
	return 0;
}
