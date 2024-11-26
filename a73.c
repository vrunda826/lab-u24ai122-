#include<stdio.h>
int main()
{
	int voters,spoilt=0,candidate[6],i,v;
	printf("enter number of voters\n");
	scanf("%d", &voters);
	for(i=0; i<6; i++)
	{
		candidate[i]=0;
	}
	for(i=1; i<=voters; i++)
	{
		printf("enter your vote by entering candidate number\n");
		scanf("%d", &v);
		if(v<1 || v>5)
		spoilt++;
		else
		candidate[v]++;
	}
	for(i=1; i<6; i++)
	{
		printf("votes of candidate%d is %d", i,candidate[i]);
	}
	printf("spoilt ballots are %d", spoilt);
	
	return 0;
}
