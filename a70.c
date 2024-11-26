#include<stdio.h>
int main()
{
	int size,element,count=0,i;
	printf("enter the size of an array\n");
	scanf("%d", &size);
	int array[size];
	printf("enter an array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("which number's occurence you want to search?\n");
	scanf("%d", &element);
	for(i=0; i<size; i++)
	{
		if(array[i]==element)
		{
		count++;
	    }
	}	
	printf("The occurence of number %d is %d times \n", element,count);
	return 0;
}
