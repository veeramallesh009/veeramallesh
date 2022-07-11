//Students with roll numbers 1-9 are seated in ascending order in an examination hall. There has been a slight mistake in their seating arrangement where two consecutive roll numbers have been swapped.
// Choose these two consecutive numbers as per your choice and swap them back in their right places according to ascending order.
#include<stdio.h>

int main()
{
   int a,b,temp;
   printf("enter the values");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
   printf("%d\n%d\n",a,b);
}
