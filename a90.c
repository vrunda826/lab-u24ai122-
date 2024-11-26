/*WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
USING POINTERS.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char string[30];
	printf("Enter string here:\n");
	gets(string);
  char *ptr=string;
  int is=(strlen(string)),count=0;
  for(int i=0; i<is; i++)
  {
    if((*(ptr+i))==' ')
    {
      count++;
    }
  }
  int e=(is-count);
	printf(" length of string including space is %d and excluding space is %d\n", is,e);
	return 0;
}


