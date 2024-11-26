#include<stdio.h>
int main()
{
  int testcase,i;
  printf("enter number of test case\n");
  scanf("%d", &testcase);
  int number[testcase], count[testcase], number2[testcase],rem;
  printf("enter the numbers\n");
  for(i=0; i<testcase; i++)
  {
    scanf("%d", &number[i]);
    number2[i]=number[i];
    count[i]=0;
    while(number[i]!=0)
    {
       rem=number[i]%10;
       if(number2[i]%rem==0)
       {
        count[i]++;
       }
       number[i]/=10;
    }
}
for(i=0; i<testcase; i++)
{
    printf("%d\n", count[i]);
}
return 0;
}