/*WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int* nu;
    nu=&n;
    int square=pow(*nu,2),cube=pow(*nu,3);
    printf("square=%d\tcube=%d", square,cube);
    return 0;
}
