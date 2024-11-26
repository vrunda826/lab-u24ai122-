#include<stdio.h>
struct book{
char name[20];
char author[20];
int pages,price,year;
};
void read(struct book *ptr)
{
 printf("Enter book name: ");
 gets((*(ptr)).name);
 printf("\nEnter book author name: ");
 gets((*(ptr)).author);
 printf("\nEnter publication year of book: ");
 scanf("%d", &(*(ptr)).year);
 printf("\nEnter price of book ");
 scanf("%d", &(*(ptr)).price);
 printf("\nEnter number of pages of book: ");
 scanf("%d", &(*(ptr)).pages);
}
void display(struct book *ptr)
{
    printf("book name: %s\n",(*(ptr)).name );
    printf("author name: %s\n",(*(ptr)).author );
    printf("publication year: %d\n",(*(ptr)).year );
    printf("book price: %d\n",(*(ptr)).price );
    printf("number of pages: %d\n",(*(ptr)).pages );
}
int main()
{
    int n;
    printf("enter number of books\n");
    scanf("%d", &n);
    struct book b[n];
    for (int i = 0; i < n; i++)
    {
      printf("Enter information of book %d\n", i+1);
      read(&b[i]);
      display(&b[i]);
    }
    
}