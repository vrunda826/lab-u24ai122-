#include<stdio.h>
void vowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("character is vowel");
	else
	printf("character is consonant");
}
int main()
{
	char c;
	printf("enter an small letter alphabet character\n");
	scanf("%c", &c);
	vowel(c);
	
	return 0;
}
