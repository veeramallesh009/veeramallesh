//Find whether a given 10-digit number is palindrome or not.
//(HINT: Any number is said to be a palindrome if the original number and the reverse of the original number are the same.)
#include<stdio.h>

int main()
{
   int num,temp,rnum=0,rem;
   printf("enter the value");
   scanf("%d",&num);
   temp=num;
   start:
      rem=num%10;
      rnum=rnum*10+rem;
      num=num/10;
      if(num>0)
      goto start;
    temp==rnum?printf("palindrome"):printf("not palindrome");
}
