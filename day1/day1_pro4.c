//Take a 6-digit number as input from the user and reverse the number.
//Make sure that the number does not include a ‘0’ in any of its digits.
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
      printf("reverse the number %d",rnum);
}
