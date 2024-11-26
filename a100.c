/*A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
STUDENTS.*/
#include<stdio.h>
int main()
{
 FILE *ptr;
 ptr=fopen("LNMIITSTUDENT.JAVA", "a");
 int n;
 printf("enter number of students:\n");
 scanf("%d", &n);
 char name[20];
 int roll, marks;
for (int i = 0; i < n; i++)
{
    printf("enter name, roll number and total marks of %d student: \n", i+1);
    scanf("%s", &name);
    scanf("%d", &roll);
    scanf("%d", &marks);
    fprintf(ptr, "\n%d\t\t\t\t", roll);
    fprintf(ptr, "%s\t\t\t\t", name);
    fprintf(ptr, "%d", marks);
}
 fclose(ptr);
}