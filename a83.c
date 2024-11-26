#include<stdio.h>
int max1(int array[],int i,int maximum,int n)
{
	printf("enter an array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
		if(array[i]>maximum)
		maximum=array[i];
	}
	return maximum;
}
int main()
{
	int i,n,maximum=0;
	printf("how many elements are you going to enter?\n");
	scanf("%d", &n);
	int array[n];
	printf("maximum element is %d", max1(array,i,maximum,n));
	return 0;
}
