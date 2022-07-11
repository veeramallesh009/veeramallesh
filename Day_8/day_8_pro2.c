//Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.

//Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3
#include<stdio.h>
int fun();
int main(){
    int T0CON,y;
    // enter the T0CON register
    printf("enter the T0CON register:");
    // read the T0CON register
    scanf("%x",&T0CON);
    //asign position of TMR0ON and PSA
    int TMR0ON=3 ,PSA=7;
    // set the two bits (i.e TMR0ON and PSA)using bitwise operation
    T0CON = T0CON | (1<<TMR0ON) | (1<<PSA);
    // print the T0CON
    printf("%x\n",T0CON);
    // calling function and passing the register (i.e T0CON)
    fun(T0CON);
}
int fun(int T0CON){
    int x,i;
    // print T0PS0 T0PS1 T0PS2 bits using for loop
    for(i=2;i>=0;i--){
        x=(T0CON>>i)&1;
        printf("print T0PS0 T0PS1 T0PS2 bits is %x\n",x);
    }
}
