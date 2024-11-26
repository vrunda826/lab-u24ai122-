/*WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
PRESENT IN THE FILE.*/
#include<stdio.h>
#
int main()
{
 FILE *ptr;
 ptr=fopen("k.txt", "r");
 char str[]="aeiou";
 char c=fgetc(ptr);
 int count=0;
 while(c!=EOF)
 {
    c=fgetc(ptr);
    for (int i = 0; i <5; i++)
    {
        if(c==str[i]){
            count++;
            break;}
    }
    
 }
 printf("there are %d vowels in file\n", count);
 fclose(ptr);
}