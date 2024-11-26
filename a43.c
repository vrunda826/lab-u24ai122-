#include<stdio.h>
int main()
{
float s,c;
 printf("enter your sales here:\n");
 scanf("%f", &s);
 if(s<=500)
 printf("your commision is %f", 0.05*s);
 else if(s>500 && s<=2000)
 printf("your commision is %f", 35+ 0.100*(s-500) );
 else if(s>2000 && s<=5000)
 printf("your commision is %f", 185+0.120*(s-2000));
 else if(s>5000)
 printf("your commision is %f", 0.125*s );
 return 0;
}
