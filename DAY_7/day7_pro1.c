#include <stdio.h>

int main()
{
    int n;
    printf("Enter Little Endian number : ");
    scanf("%X", &n);

    int a, b;

    a = (n & 0x0F) << 4;
    b = (n & 0xF0) >> 4;
    n = a | b ;

    printf("Big Endian number : %X", n);

    return 0;
}
