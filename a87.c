#include<stdio.h>
struct student{
	int roll_no,marks;
	char name[20];

}s[10];
void mark(struct student *ptr)
{
    if((*(ptr)).marks>=500)
    printf("%s  %d  %d\n", (*(ptr)).name, (*(ptr)).roll_no,(*(ptr)).marks);
}
int main()
{
	int i;
	printf("enter name,roll no. and marks of students respectively\n");
	for(i=0; i<10; i++)
	{
		scanf("%s  %d  %d", &s[i].name,&s[i].roll_no,&s[i].marks);
		mark(&s[i]);
	}
	return 0;
}
