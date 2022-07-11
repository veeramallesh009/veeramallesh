// balls are numbered with random 1-digit number each. Assign these numbers using user input.
//Print whether each ball is assigned odd or even number.
#include<stdio.h>

int main()
{
   int a,b,c,d,e;
   printf("enter the values");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   a%2==0?printf("even\n"):printf("odd\n");
   b%2==0?printf("even\n"):printf("odd\n");
   c%2==0?printf("even\n"):printf("odd\n");
   d%2==0?printf("even\n"):printf("odd\n");
   e%2==0?printf("even\n"):printf("odd\n");
}
