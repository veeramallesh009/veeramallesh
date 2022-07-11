//Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all
//the tickets that have the number 3 in them.
//Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.
#include <stdio.h>

int main()
{
    int n,i,count=0;
    printf("enter the number value");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%10==3){
            count++;
        }
    }
    if(count<4)
    printf("%d",count);
    else
    printf("%d",count+10);

}
