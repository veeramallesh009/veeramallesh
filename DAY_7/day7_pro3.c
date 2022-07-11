#include <stdio.h>

int main()
{
  int num1,num2;
  // enter the two registers 
  printf("enter the values");
  //read the registers
 scanf("%d%d",&num1,&num2);
//check the condition 
 if((28 & num1) == 28)
  {
      num2=num2&0xF0;
      printf("%d",num2);
  }
}
