//Consider a character input from a user and print if it is a vowel or consonant
#include <stdio.h>

int main()
{
   char c,d;
   printf("enter the character");
   scanf("%c",&c);
   d= c=='a' || c=='e' || c=='i' || c=='o' || c=='u'?printf("vowel"): printf("consonant");
}
