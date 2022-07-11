#include <stdio.h>
int main()
{
    unsigned int x,a;
    //enter the unsigned long variable
    printf("enter the unsigned long variable:");
    scanf("%d",&x);
    //gets all even bits of x 1010101010101
    unsigned int eve=x&0xAAAAAAAAAAAAAAAA;
    //gets all odd bits of x 1010101010101
    unsigned int odd=x&0x5555555555555555;
   //combination of rigt shift even bits,left shift odd bits
   a = (eve>>1)|(odd<<1);
   printf("%d",a);
}
