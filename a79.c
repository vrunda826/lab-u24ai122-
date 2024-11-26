#include<stdio.h>
void swap(int x,int y,int z)
{
	z=x;
	x=y;
	y=z;
	printf("x=%d,y=%d", x,y);
}
int main()
{
	int x=3,y=7,z=0;
	printf("x=%d,y=%d\n", x,y);   
    swap(x,y,z);
	return 0;
}
