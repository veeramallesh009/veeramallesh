// Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

#include<stdio.h>
int fun();
int main(){
    int SSPSTAT;
    // enter the register
    printf("enter the SSPSTAT register: ");
    //read the SSPSTAT register
    scanf("%x",&SSPSTAT);
    // define the position of CKE, P and S bit 
    int CKE=3,P=4,S=6;
    // clear the three bit position using bitwise operation
    SSPSTAT=SSPSTAT&~(1<<CKE)&~(1<<P)&~(1<<S);
    //print the SSPSTAT after clear the three bits
    printf("%x\n",SSPSTAT);
    // calling function and passing the arguments
    fun(SSPSTAT);
//Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
}
int fun(int SSPSTAT){
    //define bit postions
    int UA=1,BF=0,SMP=7;
    //print the three bits value(i.e UA,BF,SMP)
    printf("%x %x %x ",(SSPSTAT>>UA)&1,(SSPSTAT>>BF)&1,(SSPSTAT>>SMP)&1);
}
    
