#include<stdio.h>
int main()
{int a=1,i,n,y;
printf(" how  many terms do you want to see in sereis?\n");
scanf("%d", &n);
for(i=1; i<=n; i++)
{   y=a*a;
    printf("%d,", y);
	a=a+1;
}
return 0;
}
