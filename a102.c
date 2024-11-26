/*WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.*/
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("kkk.txt", "r");
    int ch=0,line=0,word=0;
    char c=fgetc(ptr);
    for(int i=0; c!=EOF; i++)
    {
        c=fgetc(ptr);
        ch++;
        if(c==32 || c==46)
        {
            word++;
        }
        if(c==46)  {
            line++;
        }
    }
    printf("number of characters: %d\n", ch-word+line);
    printf("number of words: %d\n", word);
    printf("number of lines: %d\n", line);
    fclose(ptr);
}