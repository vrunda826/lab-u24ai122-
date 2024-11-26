#include <stdio.h>

int main() {
    int n,m,i;
    printf("enter the number of jars\n");
    scanf("%d", &n);
    printf("enter the number of operations\n");
    scanf("%d", &m);
    int a[m],b[m],k[m],candy[n],average=0,j;
    for(i=1; i<=n; i++)
    {
    	candy[i]=0;
	}
    for(i=1; i<=m; i++)
    {
    	scanf("%d", &a[i]);
    	scanf("%d", &b[i]);
    	scanf("%d", &k[i]);
    	for(j=a[i]; j<=b[i]; j++)
    	{
    		candy[j]+=k[i];
		}
	}
    for(i=1; i<=n; i++)
    {
    	average+=candy[i]/n;
	}
	printf("%d", average);
    return 0;
}