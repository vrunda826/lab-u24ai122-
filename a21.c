
#include<stdio.h>
int main()
{
char ch;
printf("enter any operator from(+,-,*,/)\n");
scanf("%c", &ch);
int p,q;
printf("enter operands p and q\n");
scanf("%d%d", &p,&q);
switch(ch){
case '+':
printf("p+q=%d \n", p+q);
break;
case '-':
printf("p-q=%d \n", p-q);
break;
case '*':
printf("p*q=%d \n", p*q);
break;
case '/':
printf("p/q=%d \n", p/q);
break;
}
return 0;
}