#include<stdio.h>
int main()
{
	int n,i;
    printf("how many terms do you want to see?\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
     printf("%d/%d!+", i,i);
	}

	
	return 0;
}
