/*AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY
THE HEXADECIMAL COLOR CODE.*/
#include<stdio.h>
enum colour{
    red,
    blue,
    grey,
    green,
    yellow,
    orange,
};
int main()
{
 enum colour num=yellow;
 switch(num){
    case red:
    printf("red=#FF0000");
    break;
    case blue:
    printf("blue=#0000FF");
    break;
    case grey:
    printf("grey=#808080");
    break;
    case green:
    printf("green=#00FF00");
    break;
    case yellow:
    printf("yellow=#FFFF00");
    break;
    case orange:
    printf("orange=#FFA500");
    break;
}
return 0;
}