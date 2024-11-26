/*WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/
#include<stdio.h>
struct employee{
    int number;
    char name[30];
    float basic_pay;
}e[50];
int main()
{
    int n;
    struct employee *ptr;
    ptr=e;
    printf("enter number of emplyee:\n");
    scanf("%d", &n);
    for (int i = 0; i <n; i++)
    {
      printf("Enter employee number,name and basic pay of %d employee\n", i+1);
      scanf("%s", &(*(ptr+i)).name);
      scanf("%d", &(*(ptr+i)).number);
      scanf("%f", &(*(ptr+i)).basic_pay);
    }
     printf("number\tname\t basic pay\n");
     for (int i = 0; i <n; i++)
    {
     printf("%d\t", (*(ptr+i)).number);
     printf("%s\t", (*(ptr+i)).name);
     printf("%f\n", (*(ptr+i)).basic_pay);
    }
    return 0;
}
