#include <stdio.h>
int fun();
int main(){ 
    int arg1,arg2,x;
    //enter the arg1 and arg2
    printf("enter the arg1 and arg2 :");
    // read the arg1 and arg2
    scanf("%x%d",&arg1,&arg2);
    // calling function and passing the arguments
    x=fun(arg1, arg2);
    //print return value
    printf("%x",x);
}
int fun(int arg1,int arg2){
    // flip the bit 
    arg1=arg1^(1<<arg2);
     return arg1;
}
