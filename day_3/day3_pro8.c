//Write program to check given i/p by user is alphabet or not alphabet using conditional operator
#include<stdio.h>

int main()
{
	char a;
	printf("Enter Character : ");
	scanf("%c", &a);
	(a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')? printf("Entered input is character"): printf("Entered input is not character");
	return 0;
}
