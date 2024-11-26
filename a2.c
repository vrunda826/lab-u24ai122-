
#include<stdio.h>
int main()
{   float m,p,c,g,e,t, percent;
     printf ("enter marks of maths\n");
     scanf("%f", &m);
     printf ("enter marks of physics\n");
     scanf("%f", &p);
     printf("enter marks of chemistry \n");
     scanf("%f", &c);
     printf("enter marks of geography\n");
     scanf("%f", &g);
     printf("enter marks of english\n");
     scanf("%f", &e);
     t=m+p+c+e+g;
     percent=t/5;
     printf("total marks is %f\n", t);
     printf("percentage is %f", percent);
  
  return 0;
}