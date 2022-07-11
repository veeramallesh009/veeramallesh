//Consider the weights of three people as user input. Find the heaviest among them and print it.
#include<stdio.h>

int main()
{
   int a,b,c;
   printf("enter the value");
   scanf("%d%d%d",&a,&b,&c);
   a>b?printf("%d",a):b>c?printf("%d",b):printf("%d",c);
}
