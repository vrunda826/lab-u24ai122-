#include<stdio.h>
int main()
{int a=2,i,n;
printf(" how  many terms do you want to see in sereis?\n");
scanf("%d", &n);
for(i=1; i<=n; i++)
{   printf("%d,", a);
	a=a+2;
}
	
	
	return 0;
}
