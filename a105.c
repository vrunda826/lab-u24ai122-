#include<stdio.h>
int main()
{
  char str[4];
  printf("enter four character word here to print permutations of it:\n");
  gets(str);
  char *ptr=str;
  for (int i = 0; i<4; i++)
  {
    for (int j= 0; j<4; j++)
    {
       if(i!=j){
       for(int k = 0; k <4; k++)
       {
        if(i!=k&& j!=k){
        for(int l=0; l<4; l++)
        {
            if(i!=l&&j!=l&&k!=l){
         printf("%c%c%c%c\n", *(ptr+i),*(ptr+j),*(ptr+k),*(ptr+l));
        }}}
       }}
       }}
  return 0;
}