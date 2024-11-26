
#include<stdio.h>
int main()
{
char ch;
printf("enter any operator from(+,-,*,/)\n");
scanf("%c", &ch);
int a,b;
printf("enter operands a and b\n");
scanf("%d%d", &a,&b);
switch(ch){
case '+':
printf("%d + %d=%d \n", a,b,a+b);
break;
case '-':
printf("%d - %d=%d \n", a,b,a-b);
break;
case '*':
printf("%d * %d=%d \n", a,b,a*b);
break;
case '/':
printf("%d / %d=%d \n", a,b,a/b);
break;
}
return 0;
}