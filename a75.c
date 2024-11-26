#include<stdio.h>
int main()
{
	int marks[10][3],i,j,highestmark[3]={0,0,0},s[4],total[10],maxtotal=0;
	for(i=0; i<10; i++)
	{
	  printf("enter marks of roll number %d\n", i+1);
	  total[i]=0;
		for(j=0; j<3; j++)
		{
	        printf("subject%d\t", j+1);
			scanf("%d", &marks[i][j]);
			if(highestmark[j]<marks[i][j])
			{
				highestmark[j]=marks[i][j];
				s[j]=i+1;
			}		
			total[i]+=marks[i][j];
		}
		printf("total marks of roll no. %d is %d\n\n", i+1,total[i]);
		if(maxtotal<total[i])
		{
			maxtotal=total[i];
			s[3]=i+1;
		}
	}
	printf("highest marks of %d in subject1 is scored by roll number %d\n", highestmark[0], s[0] );
	printf("highest marks of %d in subject2 is scored by roll number %d\n", highestmark[1], s[1] );
	printf("highest marks of %d in subject3 is scored by roll number %d\n", highestmark[2], s[2] );
	printf("highest total marks of %d is obtained by roll number %d\n", maxtotal,s[3]);
	return 0;
}
