//Implement basic logic gates using C (AND, OR, NOT). Consider the inputs:
		//0,0
		//1,0
		//0,1
        //1,1.
#include<stdio.h>

int main()
{
   int a,b,x;
   printf("enter the values");
   scanf("%d%d",&a,&b);
   x=a&b;
   printf("%d",x);
}
