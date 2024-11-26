#include<stdio.h>
int main()
{
int m,p,c,e,h,t,per;
printf("enter marks of mathematics\n");
scanf("%d", &m);
printf("enter marks of chemistry\n");
scanf("%d", &c);
printf("enter marks of physics\n");
scanf("%d", &p);
printf("enter marks of english\n");
scanf("%d", &e);
printf("enter marks of history\n");
scanf("%d", &h);
t=m+p+c+e+h;
per=t/5;
if(90<per && per<=100)
{
printf("you division is A++");
}else if(80<per && per<=90){
printf("your division is A+");
}else if(70<per && per<=80){
printf("your division is A");
}else if(60<per && per<=70){
printf("your division is B");
}else if(50<per && per<=60){
printf("your division is c");
}else{
printf("you are fail");
}
return 0;}