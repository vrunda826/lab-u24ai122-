#include<stdio.h>
int main()
{
	int i,n;
	printf("how much terms do you want to see in fibonacci series?\n");
	scanf("%d", &n);
	int a[n];
	a[0]=0;
	a[1]=1;
	printf("%d,%d", a[0],a[1]);
	for(i=2; i<=(n-1); i++)
	{
	 a[i]=a[i-1]+a[i-2];
	 printf(",%d", a[i]);
	}
	return 0;
}
