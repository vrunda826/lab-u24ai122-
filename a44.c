#include<stdio.h>
int main()
{
float u,c;
 printf("enter your consumtion units here:\n");
 scanf("%f", &u);
 if(u<=200)
 printf("your charges are %fRs.", 0.5*u);
 else if(u>=201 && u<=400)
 printf("your charges are %fRs.", 100+ 0.65*(u-200) );
 else if(u>=401 && u<=600)
 printf("your charges are %fRs.", 230+0.80*(u-400) );
 else if(u>=601)
 printf("your charges are %fRs.", 425+125*(u-600) );
 return 0;
}
