#include<stdio.h>
int main()
{
	int size,element,count,i;
	printf("enter the size of an array\n");
	scanf("%d", &size);
	int array[size];
	printf("enter an array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("which number's position you want to search?\n");
	scanf("%d", &element);
	for(i=0; i<size; i++)
	{
		if(array[i]==element)
		{
		count=i+1;
		printf("The number %d is in %d position\n", element,count);
	    }
	}	
	return 0;
}
