// Online C compiler to run C program online
#include <stdio.h>

#include <stdio.h>
int main()

{
  int num1,num2,pos=3,pos1=6,pos2=7;
  // enter two register
  printf("enter the registers: ");
  // read the two registers
  scanf("%d%d",&num1,&num2);
  // check the condition
  if((48 & num1) == 48)
  {
      // set the three registers(i.e CIS,C1OUT and C2OUT)
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);
      //print CMCON
      printf("%d",num2);
  }
}
