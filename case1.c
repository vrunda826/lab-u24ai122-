
#include<stdio.h>
#include<string.h>
int main() {

    int t,z;
    printf("enter number of test cases:\n");
    scanf("%d", &t);
    char word[t][20],temp;
    for(int i=0; i<t; i++)
    {
        scanf("%s", &word[i]);
       z=strlen(word[i]);
        for(int j=1; j<=z; )
        {
           rev:
          if(word[i][z-j]>word[i][z-j-1])
          {
            temp=word[i][z-j];
            word[i][z-j]=word[i][z-j-1];
            word[i][z-j-1]=temp;
            break;
          }    
          else{
            j++;
            goto rev;
          }
       }
    }
    for (int i = 0; i <t; i++)
    {
        printf("%s\t", word[i]);
    }
    
    
    return 0;

}

    