#include<stdio.h>
int fibonacci(int n)
{
    if(n>2)
	return fibonacci(n-1)+fibonacci(n-2);
	else
	return 1;
}
int main()
{
	int y,i;
	printf("enter how many numbers do you want to see in fibonacci sereis\n");
	scanf("%d", &y);
	for(i=1; i<=y; i++)
	{
	 printf("%d\t", fibonacci(i));
	}
	return 0;
}
