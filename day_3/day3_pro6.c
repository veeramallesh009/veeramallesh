//Write program to accept hex value as i/p and right shift bit value also as i/p and print the value after doing the hex right shift

#include <stdio.h>
int main()
{
	int num, shift;
	printf("Enter Hexa num  :");
	scanf("%X", &num);
	printf("Enter  no of digits to be shift :");
	scanf("%d", &shift);
	printf("after shifting : %X", (num >> shift));
	return 0;
}
