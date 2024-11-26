#include<stdio.h>
#include<math.h>
int flip(int num, int n)
{
  int rem,rev=0,i;
    for (i = 1; i <= n; i++)
    {
      rem=num%10;
      rev+=pow(10,n-i)*rem;
      num=num/10;
    }
    return rev+num*pow(10,n)+1;
}
int main()
{
    int num,n,i,x;
    printf("enter number:");
    scanf("%d", &num);
    printf("by how many digit you want to flip\n");
    scanf("%d", &n);
   int reverse=flip(num,n);
   printf("flipped number is %d", reverse);
 return 0;
}
